# This Makefile.in created by simplemake.  Do not edit

# Makefile.  Generated from Makefile.in by configure.

# --------------------------------------------------------------------------
all: all-redirect

SHELL           = /bin/sh
abs_builddir    = /home/aballmer/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/test/mpi
srcdir          = .
abs_srcdir      = /home/aballmer/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/test/mpi
MAKE            = make

VPATH = .

.SUFFIXES:
# Some make programs complain if no suffixes are set
.SUFFIXES: .c .o
apply: 
	$(ACTION) $(ACTION_INPUT)
	for dir in util attr basic datatype coll comm errhan group info init pt2pt rma spawn topo io  cxx threads errors manual perf - ; do \
		if [ "$$dir" = "-" ] ; then break ; fi ; \
		(cd $$dir && ${MAKE} apply ) ; done
clean:  clean-local
	-@rm -f *.o ${srcdir}/*.o 
	-@rm -f *.lo ${srcdir}/*.lo
	for dir in util attr basic datatype coll comm errhan group info init pt2pt rma spawn topo io  cxx threads errors manual perf - ; do \
		if [ "$$dir" = "-" ] ; then break ; fi ; \
		(cd $$dir && ${MAKE} clean ) ; done
distclean:  clean distclean-xxx remove-makefile
distclean-xxx:
	for dir in util attr basic datatype coll comm errhan group info init pt2pt rma spawn topo io  cxx threads errors manual perf - ; do \
		if [ "$$dir" = "-" ] ; then break ; fi ; \
		if [ ! -s $$dir/Makefile ] ; then continue ; fi ;\
		(cd $$dir && ${MAKE} distclean ) ; done
	-@rm -f maint/testmerge runtests Makefile basic/Makefile attr/Makefile util/Makefile coll/Makefile comm/Makefile datatype/Makefile errhan/Makefile group/fo/Makefile init/Makefile pt2pt/Makefile rma/Makefile spawn/Makefile topo/Makefile io/Makefile f77/Makefile f77/attr/Makefile f77/attr/attraints.h f77/pt2pt/attr1aints.h f77/ext/add1size.h f77/datatype/Makefile f77/datatype/typeaints.h f77/util/Makefile f77/coll/Makefile f77/comm/Makefile f77/topo/Makefile f77/init/Makefile f77/rma/addsize.h f77/pt2pt/Makefile f77/info/Makefile f77/spawn/Makefile f77/spawn/type1aint.h f77/rma/Makefile f77/ext/Makefile f77/ext/testlist f77/io/Makefile f77/io/iooffset.h f77/io/iodisp.h f77/io/ioaint.h f90/Makefile f90/attr/Makefile f90/datatype/Makefile f90/f90types/Makefile f90/util/Makefile f90/coll/Makefile f90/comm/Makefile f90/topo/Makefile f90/init/Makefile f90/pt2pt/Makefile f90/rma/Makefile f90/info/Makefile f90/spawn/Makefile f90/timer/Makefile f90/ext/Makefile f90/ext/testlist f90/io/Makefile f90/misc/Makefile cxx/Makefile cxx/util/Makefile cxx/attr/Makefile cxx/pt2pt/Makefile cxx/comm/Makefile cxx/coll/Makefile cxx/errhan/Makefile cxx/info/Makefile cxx/datatype/Makefile cxx/io/Makefile cxx/init/Makefile cxx/rma/Makefile cxx/spawn/Makefile threads/Makefile threads/pt2pt/Makefile threads/util/Makefile threads/comm/Makefile threads/init/Makefile threads/spawn/Makefile errors/Makefile errors/attr/Makefile errors/basic/Makefile errors/coll/Makefile errors/comm/Makefile errors/faults/Makefile errors/group/Makefile errors/pt2pt/Makefile errors/rma/Makefile errors/spawn/Makefile errors/topo/Makefile errors/io/Makefile errors/cxx/Makefile errors/cxx/errhan/Makefile errors/cxx/io/Makefile errors/f77/Makefile errors/f90/Makefile manual/Makefile manual/manyconnect perf/Makefile testlist cxx/testlist f77/testlist f90/testlist threads/testlist errors/testlist errors/cxx/testlist config.status config.log config.cache *conf.cache config.system
	-@rm -rf autom4te*.cache
	-@rm -f include/mpitestconf.h
	-@for dir in  f77 cxx f90 threads ; do \
	    if [ -s $$dir/Makefile ] ; then \
	      (cd $$dir && ${MAKE} distclean ;) ; fi ; \
	done
	-@rm -rf $(DEPS_DIR)
	-@rm -f TAGS
remove-makefile:
	rm -f Makefile
remove-genmakefiles:
	rm -f Makefile.in  Makefile
all-redirect:
	@(cd util && ${MAKE} all )
	@(cd attr && ${MAKE} all )
	@(cd basic && ${MAKE} all )
	@(cd datatype && ${MAKE} all )
	@(cd coll && ${MAKE} all )
	@(cd comm && ${MAKE} all )
	@(cd errhan && ${MAKE} all )
	@(cd group && ${MAKE} all )
	@(cd info && ${MAKE} all )
	@(cd init && ${MAKE} all )
	@(cd pt2pt && ${MAKE} all )
	@(cd rma && ${MAKE} all )
	@(cd spawn && ${MAKE} all )
	@(cd topo && ${MAKE} all )
	@(cd io && ${MAKE} all )
	@for dir in  cxx - ; do \
		if [ "$$dir" = "-" ] ; then break ; fi ; \
		if ( cd $$dir && ${MAKE} all ) ; then : ; else exit 1; fi \
	done
	@for dir in threads - ; do \
		if [ "$$dir" = "-" ] ; then break ; fi ; \
		if ( cd $$dir && ${MAKE} all ) ; then : ; else exit 1; fi \
	done
	@(cd errors && ${MAKE} all )
	@(cd manual && ${MAKE} all )
	@(cd perf && ${MAKE} all )

# --------------------------------------------------------------------------
# --------------------------------------------------------------------------
# --------------------------------------------------------------------------
HEADERFILES     = $(HEADERS)
SOURCEFILES     = $(SOURCES)
# --------------------------------------------------------------------------

testing:
	./runtests -srcdir=$(srcdir) -tests=testlist \
		   -mpiexec=/home/aballmer/SCC15HPCRepast/ext//MPICH/bin/mpiexec \
		   -xmlfile=summary.xml
clean-local:
	-rm -f summary.xml

dist:	
	if [ ! -d "/home/aballmer/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1" ] ; then \
	    echo "The dist target requires that the mpich2 source directory be provided" ; \
	    exit 1 ; \
	fi
	if [ ! -d .tmp ] ; then mkdir .tmp ; else rm -rf .tmp && mkdir .tmp ; fi
	cd .tmp && svn export https://svn.mcs.anl.gov/repos/mpi/mpich2/trunk/test/mpi mpi2test
	cd .tmp/mpi2test && \
	    svn export https://svn.mcs.anl.gov/repos/mpi/mpich2/trunk/confdb confdb
	cd .tmp/mpi2test && \
	    sed -e 's/AC_CONFIG_AUX_DIR.*/AC_CONFIG_AUX_DIR(confdb)/' \
	        configure.in > conftmp.in && mv conftmp.in configure.in
	cd .tmp/mpi2test && maint/updatefiles -mpich2dir=/home/aballmer/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1
	cd .tmp/mpi2test && /home/aballmer/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/maint/simplemake Makefile.sm
	cd .tmp && tar cf mpi2test.tar mpi2test && gzip -9 mpi2test.tar 
	if [ -s .tmp/mpi2test.tar.gz ] ; then \
	    mv .tmp/mpi2test.tar.gz . ; rm -rf .tmp ; \
	else echo "Could not create tarfile for test suite"; exit 1 ; fi


.POSIX:

FORCE_TARGET:

