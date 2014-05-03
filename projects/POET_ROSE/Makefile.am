include $(top_srcdir)/config/Makefile.for.ROSE.includes.and.libs

bin_PROGRAMS = rose_pcg
rose_pcg_SOURCES=  main.cpp eval_ext_rose.cpp

check:
	./rose_pcg -L$(srcdir) -L$(srcdir)/../ManyCoreRuntime -L$(top_srcdir)/src/3rdPartyLibraries/POET/lib -pin=tmp.C -pout="out.C" $(srcdir)/stencil-gen.pt 
	diff out.C $(srcdir)/tmp-save.C
	./rose_pcg -L$(srcdir) -L$(srcdir)/../ManyCoreRuntime -L$(top_srcdir)/src/3rdPartyLibraries/POET/lib -pin="$(srcdir)/testPermutations.C" -pout="out.C" $(srcdir)/stencil-gen.pt 
	diff out.C $(srcdir)/testPermutations-save.C

EXTRA_DIST=stencil_lib.pi stencil_ROSE.incl stencil_lib.pt stencil-gen.pt stencil-output.code Cpp_ROSE.incl tmp.C tmp-save.C testPermutations.C testPermutations-save.C


AM_YFLAGS=-d -v

INCLUDES = $(ROSE_INCLUDES) -I$(top_srcdir)/src/util/support -I$(top_srcdir)/src/midend/astUtil/astInterface  -I$(top_srcdir)/src/midend/astUtil/astSupport -I$(top_srcdir)/src/midend/astUtil/symbolicVal  -I$(top_srcdir)/src/3rdPartyLibraries/POET

LDADD = $(LIBS_WITH_RPATH) $(ROSE_SEPARATE_LIBS) 


