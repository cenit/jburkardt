//******************************************************************************

bool stla_check ( char *input_file_name )

//******************************************************************************
//
//  Purpose:
//
//    STLA_CHECK checks an ASCII StereoLithography file.
//
//  Example:
//
//    solid MYSOLID
//      facet normal 0.4 0.4 0.2
//        outerloop
//          vertex  1.0 2.1 3.2
//          vertex  2.1 3.7 4.5
//          vertex  3.1 4.5 6.7
//        end loop
//      end facet
//      ...
//      facet normal 0.2 0.2 0.4
//        outerloop
//          vertex  2.0 2.3 3.4
//          vertex  3.1 3.2 6.5
//          vertex  4.1 5.5 9.0
//        end loop
//      end facet
//    end solid MYSOLID
//
//  Modified:
//
//    22 September 2005
//
//  Author:
//
//    John Burkardt
//
//  Reference:
//
//    3D Systems, Inc,
//    Stereolithography Interface Specification,
//    October 1989.
//
//  Parameters:
//
//    Input, char *INPUT_FILE_NAME, the name of the input file.
//
//    Output, bool STLA_CHECK, is TRUE if the file is legal.
//
{
  bool check;
  bool done;
  double dval;
  bool error;
  int i;
  int ierror;
  ifstream input_unit;
  int lchar;
  int state;
  char text[256];
  int text_num;
  int vertex;
  char *word1;
  char *word2;

  state = 0;
  text_num = 0;
//
//  Open the file.
//
  input_unit.open ( input_file_name );

  if ( !input_unit )
  {
    cout << "\n";
    cout << "STLA_CHECK - Fatal error!\n";
    cout << "  Could not open the file \"" << input_file_name << "\".\n";
    check = false;
    return check;
  }
//
//  Read the next line of text.
//
  for ( ; ; )
  {
    input_unit.get_line ( text, sizeof ( text ) );

    if ( input_unit.eof ( ) )
    {
      if ( state != 0 && state != 1 )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  End-of-file, but model not finished.\n";
        check = false;
        return check;
      }
      break;
    }

    text_num = text_num + 1;

    done = true;
//
//  Read the first word in the line.
//
    word1 = word_next_read ( text, &done );

    if ( done )
    {
      cout << "\n";
      cout << "STLA_CHECK - Fatal error!\n";
      cout << "  File line number = " << text_num << "\n";
      cout << "  No information on line.\n";
      check = false;
      return check;
    }
//
//  "Doctor" the text, changing a beginning occurrence of:
//
//      END FACET to ENDFACET
//      END LOOP to ENDLOOP
//      END SOLID to ENDSOLID
//      FACET NORMAL to FACETNORMAL
//      OUTER LOOP to OUTERLOOP
//
    if ( s_eqi ( word1, "END" ) )
    {
      word2 = word_next_read ( text, &done );

      if ( !s_eqi ( word2, "FACET" ) &&
           !s_eqi ( word2, "LOOP" ) &&
           !s_eqi ( word2, "SOLID" ) )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  The tag END was followed by an illegal word:\n";
        cout << "  \"' // trim ( word2 ) // '", when expecting'
        cout << "  \"FACET\", \"LOOP\", or \"SOLID\".\n";
        check = false;
        return check;
      }

      strcat ( word1, word2 );
    }
    else if ( s_eqi ( word1, "FACET" ) )
    {
      word2 = word_next_read ( text, &done );

      if ( !s_eqi ( word2, "NORMAL" ) )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  The tag FACET was followed by an illegal word:\n";
        cout << "  "' // trim ( word2 ) // '\"\n";
        cout << "  when expecting \"NORMAL\".\n";
        check = false;
        return check;
      }
      strcat ( word1, word2 );
    }
    else if ( s_eqi ( word1, "OUTER" ) )
    {
      word2 = word_next_read ( text, &done );

      if ( !s_eqi ( word2, "LOOP" ) )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  The tag OUTER was followed by an illegal word:\n";
        cout << "  \"" << word2 << "\", when expecting \"LOOP\".\n";
        check = false;
        return check;
      }
      strcat ( word1, word2 );
    }
//
//  This first word tells us what to do.
//
//  SOLID - begin a new solid.
//    Valid in state 0, moves to state 1.
//  ENDSOLID - end current solid.
//    Valid in state 1, moves to state 0.
//
//  FACETNORMAL - begin a new facet.
//    Valid in state 0 or 1, moves to state 2.
//  ENDFACET - end current facet.
//    Valid in state 2, moves to state 1.
//
//  OUTERLOOP - begin a list of vertices.
//    Valid in state 2, moves to state 3.
//  ENDLOOP - end vertex list.
//    Valid in state 3, moves to state 2.
//
//  VERTEX - give coordinates of next vertex.
//    Valid in state 3 if current vertex count is 0, 1 or 2.
//
//  End of file -
//    Valid in state 0 or 1.
//
    if ( s_eqi ( word1, "SOLID" ) )
    {
      if ( state != 0 )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  A new SOLID statement was encountered, but we\n";
        cout << "  have not finished processing the current solid.\n";
        check = false;
        return check;
      }
      state = 1;
    }
    else if ( s_eqi ( word1, "ENDSOLID" ) )
    {
      if ( state != 1 )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  An END SOLID statement was encountered, but\n";
        cout << "  either we have not begun a solid at all, or we\n";
        cout << "  are not at an appropriate point to finish the\n";
        cout << "  current solid.\n";
        check = false;
        return check;
      }

      state = 0
    }
    else if ( s_eqi ( word1, "FACETNORMAL" ) )
    {
      if ( state != 0 && state != 1 )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  Model not in right state for FACET.\n";
        check = false;
        return check;
      }

      state = 2;

      for ( i = 1; i <= 3; i++ )
      {
        word2 = word_next_read ( text, &word2 );

        if ( done )
        {
          cout << "\n";
          cout << "STLA_CHECK - Fatal error!\n";
          cout << "  File line number = " << text_num << "\n";
          cout << "  End of information while reading a component\n";
          cout << "  of the normal vector.\n";
          check = false;
          return check;
        }

        dval = s_to_d ( word2, &lchar, &error )

        if ( error )
        {
          cout << "\n";
          cout << "STLA_CHECK - Fatal error!\n";
          cout << "  File line number = " << text_num << "\n";
          cout << "  Error while reading a component of the normal vector.\n";
          check = false;
          return check;
        }
      }
    }
    else if ( s_eqi ( word1, "ENDFACET" ) )
    {
      if ( state != 2 )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  Model not in right state for ENDFACET.\n";
        check = false;
        return check;
      }
      state = 1;
    }
    else if ( s_eqi ( word1, "OUTERLOOP" ) )
    {
      if ( state != 2 )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  Model not in right state for OUTERLOOP.\n";
        check = false;
        return check;
      }

      state = 3;
      vertex = 0;
    }
    else if ( s_eqi ( word1, "ENDLOOP" ) )
    {
      if ( state != 3 )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  Model not in right state for ENDLOOP.\n";
        check = false;
        return check;
      }

      state = 2;
    }
    else if ( s_eqi ( word1, "VERTEX" ) )
    {
      if ( state != 3 )
      {
        cout << "\n";
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  Model not in right state for VERTEX.\n";
        check = false;
        return check;
      }

      if ( 3 <= vertex )
      {
        cout << " '
        cout << "STLA_CHECK - Fatal error!\n";
        cout << "  File line number = " << text_num << "\n";
        cout << "  More than 3 vertices specified for a face.\n";
        check = false;
        return check;
      }

      for ( i = 1; i <= 3; i++ )
      {
        word2 = word_next_read ( text, &done );

        if ( done )
        {
          cout << "\n";
          cout << "STLA_CHECK - Fatal error!\n";
          cout << "  File line number = " << text_num << "\n";
          cout << "  The value of a vertex coordinate is missing.\n";
          check = false;
          return check;
        }

        call s_to_d ( word2, dval, ierror, lchar )

        if ( ierror != 0 )
        {
          cout << "\n";
          cout << "STLA_CHECK - Fatal error!\n";
          cout << "  File line number = " << text_num << "\n";
          cout << "  The value of a vertex coordinate makes no sense.\n";
          check = false;
          return check;
        }
      }
      vertex = vertex + 1;
    }
    else
    {
      cout << "\n";
      cout << "STLA_CHECK - Fatal error!\n";
      cout << "  File line number = " << text_num << "\n";
      cout << "  Unrecognized line in file.\n";
      check = false;
      return check;
    }

  }
//
//  Close the file.
//
  input_unit.close ( );

  check = true;

  return check;
}
