
/*----------------------------------------------------------------------------
                                    E.S.O.
 -----------------------------------------------------------------------------
   File name    :   gnuplot_i.h
   Author       :   N. Devillard
   Created on   :   Fri Sept 26 1997
   Software     :   ANSI C under Solaris Unix
                    Part of ECLIPSE library for Adonis
   Description  :   C interface to gnuplot
  
    gnuplot is a freely available, command-driven graphical display tool for
    Unix. It compiles and works quite well on a number of Unix flavours as
    well as other operating systems. The following module enables sending
    display requests to gnuplot through simple C calls.
  
 ---------------------------------------------------------------------------*/

/*

 $Id: gnuplot_i.h,v 1.2 2000/04/18 12:31:17 ndevilla Exp $
 $Author: ndevilla $
 $Date: 2000/04/18 12:31:17 $
 $Revision: 1.2 $

 */

#ifndef _GNUPLOT_PIPES_H_
#define _GNUPLOT_PIPES_H_

/*---------------------------------------------------------------------------
                                Includes
 ---------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>



#define GP_MAX_TMP_FILES    64
#define GP_TMP_NAME_SIZE    512
#define GP_CMD_SIZE     	1024

/*---------------------------------------------------------------------------
                                New Types
 ---------------------------------------------------------------------------*/

/*
 * This structure holds all necessary information to talk to a gnuplot
 * session.
 */

typedef struct _GNUPLOT_CTRL_ {
    /* command file handling */
    FILE    * gnucmd ;
    
    /* Plotting options */
    int       nplots ;      /* Number of active plots at the moment */
    char      pstyle[32] ;  /* Current plotting style */

    /* temporary files opened */
    char      to_delete[GP_MAX_TMP_FILES][GP_TMP_NAME_SIZE] ;
    int       ntmp ;


} gnuplot_ctrl ;


#ifndef _ECLIPSE_TYPES_H_
/*
 * dpoint is convenient to store signals which have definition both on x and
 * y axis.
 */
typedef struct _DPOINT_ {
    double  x ;
    double  y ;
} dpoint ;
#endif


extern "C" {

/*---------------------------------------------------------------------------
                        Function ANSI C prototypes
 ---------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------*/
/**
  @name     check_X_display
  @memo     Checks out if the DISPLAY environment variable is set.
  @param    activate int flag
  @return   int 1 if the variable is set, 0 otherwise.
  @doc
 
  This function checks out the DISPLAY environment variable to see if
  it exists. It does not check if the display is actually correctly
  configured. If you do not want to activate this check (e.g. on
  systems that do not support this kind of display mechanism), pass a
  0 integer as the activate flag. Any other value will activate it.
 */
/*--------------------------------------------------------------------------*/
 
int check_X_display(int activate);


/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_get_program_path
  @memo     Find out where a command lives in your PATH.
  @param    pname Name of the program to look for.
  @return   pointer to statically allocated character string.
  @doc
 
  This is the C equivalent to the 'which' command in Unix. It parses
  out your PATH environment variable to find out where a command
  lives. The returned character string is statically allocated within
  this function, i.e. there is no need to free it. Beware that the
  contents of this string will change from one call to the next,
  though (as all static variables in a function).
 
  The input character string must be the name of a command without
  prefixing path of any kind, i.e. only the command name. The returned
  string is the path in which a command matching the same name was
  found.
 
  Examples (assuming there is a prog named 'hello' in the cwd):
 
  \begin{itemize}
  \item gnuplot_get_program_path("hello") returns "."
  \item gnuplot_get_program_path("ls") returns "/bin"
  \item gnuplot_get_program_path("csh") returns "/usr/bin"
  \item gnuplot_get_program_path("/bin/ls") returns NULL
  \end{itemize}
 
 */
/*-------------------------------------------------------------------------*/

char * gnuplot_get_program_path(char * pname);

/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_init
  @memo     Opens up a gnuplot session, ready to receive commands.
  @return   Newly allocated gnuplot control structure.
  @doc
 
  This opens up a new gnuplot session, ready for input. The struct
  controlling a gnuplot session should remain opaque and only be
  accessed through the provided functions.
 */
/*--------------------------------------------------------------------------*/
 
gnuplot_ctrl * gnuplot_init(void);


/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_close
  @memo     Closes a gnuplot session previously opened by gnuplot_init()
  @param    handle Gnuplot session control handle.
  @return   void
  @doc
 
  Kills the child PID and deletes all opened temporary files.
  It is mandatory to call this function to close the handle, otherwise
  temporary files are not cleaned and child process might survive.
 
 */
/*--------------------------------------------------------------------------*/
 
void gnuplot_close(gnuplot_ctrl * handle);


/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_cmd
  @memo     Sends a command to an active gnuplot session.
  @param    handle Gnuplot session control handle
  @param    cmd    Command to send, same as a printf statement.
  @return   void
  @doc
 
  This sends a string to an active gnuplot session, to be executed.
  There is strictly no way to know if the command has been
  successfully executed or not.
  The command syntax is the same as printf.
 
  Examples:
 
  \begin{itemize}
  \item gnuplot_cmd(g, "plot %d*x", 23.0);
  \item gnuplot_cmd(g, "plot %g * cos(%g * x)", 32.0, -3.0);
  \end{itemize}
 
 */
/*--------------------------------------------------------------------------*/
 
void gnuplot_cmd(gnuplot_ctrl *  handle, char *  cmd, ...);


/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_setstyle
  @memo     Change the plotting style of a gnuplot session.
  @param    h Gnuplot session control handle
  @param    plot_style Plotting-style to use (character string)
  @return   void
  @doc
 
  The provided plotting style is a character string. It must be one of
  the following:
 
  \begin{itemize}
  \item {\it lines}
  \item {\it points}
  \item {\it linespoints}
  \item {\it impulses}
  \item {\it dots}
  \item {\it steps}
  \item {\it errorbars}
  \item {\it boxes}
  \item {\it boxeserrorbars}
  \end{itemize}
 */
/*--------------------------------------------------------------------------*/
 
void gnuplot_setstyle(gnuplot_ctrl * h, char * plot_style);


/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_resetplot
  @memo     Resets a gnuplot session (next plot will erase previous ones).
  @param    h Gnuplot session control handle.
  @return   void
  @doc
 
  Resets a gnuplot session, i.e. the next plot will erase all previous
  ones.
 */
/*--------------------------------------------------------------------------*/
 
void gnuplot_resetplot(gnuplot_ctrl * h);

/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_plot1d_var1
  @memo     Plots a 2d graph from a list of doubles.
  @param    handle  Gnuplot session control handle.
  @param    d       Pointer to a list of doubles.
  @param    n_point Number of doubles in the list.
  @param    title   Title of the plot.
  @return   void
  @doc
 
  Plots out a 2d graph from a list of doubles. The x-coordinate is the
  index of the double in the list, the y coordinate is the double in
  the list.
 
  Example:
 
  \begin{verbatim}
    gnuplot_ctrl    *h ;
    double          d[50] ;
    int             i ;
 
    h = gnuplot_init() ;
    for (i=0 ; i<50 ; i++) {
        d[i] = (double)(i*i) ;
    }
    gnuplot_plot1d_var1(h, d, 50, "parabola") ;
    sleep(2) ;
    gnuplot_close(h) ;
  \end{verbatim}
 
 */
/*--------------------------------------------------------------------------*/
 
void gnuplot_plot1d_var1(
    gnuplot_ctrl    *   handle,
    double          *   d,
    int                 n_point,
    char            *   title
) ;


/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_plot1d_var2
  @memo     Plot a 2d graph from a list of dpoint.
  @param    handle      Gnuplot session control handle.
  @param    d           Pointer to a list of doubles.
  @param    n_points    Number of doubles in the list.
  @param    title       Title of the plot.
  @return   void
  @doc
 
  Plots out a 2d graph from a list of dpoints. A dpoint is a struct
  containing two fields x and y (doubles) which are plotted as they
  are on the gnuplot session.
 
  \begin{verbatim}
    gnuplot_ctrl    *h ;
    dpoint          d[50] ;
    int             i ;
 
    h = gnuplot_init() ;
    for (i=0 ; i<50 ; i++) {
        d[i].x = (double)(i)/10.0 ;
        d[i].y = d[i].x * d[i].x ;
    }
    gnuplot_plot1d_var2(h, d, 50, "parabola") ;
    sleep(2) ;
    gnuplot_close(h) ;
  \end{verbatim}
 */
/*--------------------------------------------------------------------------*/
 
void gnuplot_plot1d_var2(
    gnuplot_ctrl    *   handle,
    dpoint          *   d,
    int                 n_points,
    char            *   title
) ;
/*-------------------------------------------------------------------------*/
/**
  @name		gnuplot_plot1d_var2v
  @memo		Plot a 2d graph from a list of pairs of points.
  @param	handle		Gnuplot session control handle.
  @param	x			list of x values
  @param    y           list of y values
  @param	n_points	Number of doubles in the list.
  @param	title		Title of the plot.
  @return	void
  @doc

  Plots out a 2d graph from a list of pairs of points. 

  \begin{verbatim}
    gnuplot_ctrl    *h ;
    double          x[50];
    double          y[50];
    int             j ;

    h = gnuplot_init() ;
    for (j=0 ; j<50 ; j++) {
        x[0+j*2] = (double)(i)/10.0 ;
        y[1+j*2] = x[0j] * x[j] ;
    }
    gnuplot_plot1d_var2v(h, x, y, 50, "parabola") ;
    sleep(2) ;
    gnuplot_close(h) ;
  \end{verbatim}
 */
/*-------------------------------------------------------------------------*/

void gnuplot_plot1d_var2v (
    gnuplot_ctrl    *   handle,
    double          *   x,
    double          *   y,
    int                 n_points,
    char            *   title
);

/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_plot_slope
  @memo     Plot a slope on a gnuplot session.
  @param    handle      Gnuplot session control handle.
  @param    a           Slope.
  @param    b           Intercept.
  @param    title       Title of the plot.
  @return   void
  @doc
 
  Plot a slope on a gnuplot session. The provided slope has an
  equation of the form:
 
  \begin{verbatim}
  y = ax+b
  \end{verbatim}
 
  Example:
 
  \begin{verbatim}
    gnuplot_ctrl    *   h ;
    double              a, b ;
 
    h = gnuplot_init() ;
    gnuplot_plot_slope(h, 1.0, 0.0, "unity slope") ;
    sleep(2) ;
    gnuplot_close(h) ;
  \end{verbatim}
 
 */
/*--------------------------------------------------------------------------*/
 
 
void gnuplot_plot_slope(
    gnuplot_ctrl    *   handle,
    double              a,
    double              b,
    char            *   title
) ;


/*-------------------------------------------------------------------------*/
/**
  @name     gnuplot_plot_equation
  @memo     Plot a curve of given equation y=f(x).
  @param    h           Gnuplot session control handle.
  @param    equation    Equation to plot.
  @param    title       Title of the plot.
  @return   void
  @doc
 
  Plots out a curve of given equation. The general form of the
  equation is y=f(x), you only provide the f(x) side of the equation.
 
  Example:
 
  \begin{verbatim}
        gnuplot_ctrl    *h ;
        char            eq[80] ;
 
        h = gnuplot_init() ;
        strcpy(eq, "sin(x) * cos(2*x)") ;
        gnuplot_plot_equation(h, eq, "sine wave", normal) ;
        gnuplot_close(h) ;
  \end{verbatim}
 
 */
/*--------------------------------------------------------------------------*/
 
void gnuplot_plot_equation(
    gnuplot_ctrl    *   h,
    char            *   equation,
    char            *   title
) ;


}

#endif
