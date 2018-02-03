#######
# Meaning of the compile options
#   -D_TSG_OMP_ENABLE: use on multi-core system to compute the surpluses and evaluate the interpolant using all available cores/threads
#   -D_TSG_FULL_TENSOR_ENABLE: enable the use of fullTensorGrid
#######

CC = g++
#COMPILE_OPTIONS =
COMPILE_OPTIONS = -fopenmp
OPTC = -O3 -ffast-math -mtune=native $(COMPILE_OPTIONS)
#OPTC = -O3 -mtune=native $(COMPILE_OPTIONS)
OPTL = $(OPTC)
IADD =
LADD =

LHEADERS = tsgIndexSet.hpp tsgHelperFunctions.hpp tsgEnumerate.hpp \
		tsgBase1DRule.hpp tsgRuleClenshawCurtis.hpp tsgRuleChebyshev.hpp tsgRuleGaussLegendre.hpp tsgRulePieceWiseLocal.hpp \
		tsgRuleChebyshevNestedTwoPoint.hpp tsgRuleGaussChebyshev1.hpp tsgRuleGaussChebyshev2.hpp tsgRuleFejer.hpp \
		tsgRuleGaussGegenbauer.hpp tsgRuleGaussJacobi.hpp tsgRuleGaussLaguerre.hpp tsgRuleGaussHermite.hpp \
		tsgBase1DHierarchicalRule.hpp tsgRulePieceWiseLocalZero.hpp \
		tsgBaseGrid.hpp tsgTensorRule.hpp tsgGlobalGrid.hpp tsgLocalPolynomialGrid.hpp tsgFullTensorGrid.hpp \
		tsgHardcodedConstants.hpp \
		TasmanianSparseGrid.hpp \
		tasgridTestFunctions.hpp tasgridExternalTester.hpp tasgridWrapper.hpp\
		tsgRuleWavelet.hpp tsgWaveletGrid.hpp tsgSparseMatrices.hpp

LIBOBJ = tsgIndexSet.o tsgHelperFunctions.o \
		tsgBase1DRule.o tsgRuleClenshawCurtis.o tsgRuleChebyshev.o tsgRuleGaussLegendre.o tsgRulePieceWiseLocal.o \
		tsgRuleChebyshevNestedTwoPoint.o tsgRuleGaussChebyshev1.o tsgRuleGaussChebyshev2.o tsgRuleFejer.o \
		tsgRuleGaussGegenbauer.o tsgRuleGaussJacobi.o tsgRuleGaussLaguerre.o tsgRuleGaussHermite.o \
		tsgBase1DHierarchicalRule.o tsgRulePieceWiseLocalZero.o \
		tsgBaseGrid.o tsgTensorRule.o tsgGlobalGrid.o tsgLocalPolynomialGrid.o tsgFullTensorGrid.o \
		TasmanianSparseGrid.o \
		tsgRuleWavelet.o tsgWaveletGrid.o tsgSparseMatrices.o
		
WROBJ = tasgrid_main.o tasgridTestFunctions.o tasgridExternalTester.o tasgridWrapper.o

%.o: %.cpp $(LHEADERS) $(TASGRIDHEADERS)
	$(CC) $(OPTC) -c $< -o $@ 

all: libtasmaniansparsegrid.a tasgrid

libtasmaniansparsegrid.a: $(LIBOBJ) 
	ar rcs libtasmaniansparsegrid.a $(LIBOBJ)

tasgrid:  libtasmaniansparsegrid.a $(WROBJ)
	$(CC) $(OPTL) $(LADD) -L. $(WROBJ) -o tasgrid -ltasmaniansparsegrid -lm


clean:
	rm -fr *.o
	rm -fr *.a
	rm -fr tasgrid
