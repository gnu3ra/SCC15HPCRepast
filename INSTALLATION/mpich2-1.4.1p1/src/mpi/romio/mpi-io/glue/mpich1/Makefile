CC          = gcc
AR          = ar cr
LIBNAME     = /home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/lib/libmpich.a
RANLIB      = ranlib
srcdir      = /home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpi/romio/mpi-io/glue/mpich1
CC_SHL      = gcc -fPIC
SHLIBNAME   = /home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/lib/libmpich

INCLUDE_DIR = -I. -I../../../include -I${srcdir}/../../../mpi-io -I${srcdir}/../../../adio/include -I../../../adio/include -I${srcdir}/../../../../../../src/include  -I../../../../../../src/include 
CFLAGS      = -DHAVE_MPI_INFO_SRC  -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpl/include -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpl/include -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/openpa/src -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/openpa/src -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/ch3/include -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/ch3/include -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/common/datatype -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/common/datatype -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/common/locks -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/common/locks -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/ch3/channels/nemesis/include -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/ch3/channels/nemesis/include -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/ch3/channels/nemesis/nemesis/include -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/ch3/channels/nemesis/nemesis/include -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/ch3/channels/nemesis/nemesis/utils/monitor -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/mpid/ch3/channels/nemesis/nemesis/utils/monitor -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/util/wrappers -I/home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1/src/util/wrappers    -O2  -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DHAVE_ROMIOCONF_H -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 $(MPIOPROFILE) $(INCLUDE_DIR)

top_builddir  = /home/aballmer/new/SCC15HPCRepast/INSTALLATION/mpich2-1.4.1p1
LIBTOOL       = 
C_COMPILE_SHL = $(CC_SHL)

VPATH=.:${srcdir}

MPIO_OBJECTS = mpio_file.o mpio_err.o

all: $(LIBNAME)
	@if [ "gcc" != "none" ] ; then \
	    $(MAKE) $(SHLIBNAME).la ;\
	fi

.SUFFIXES: $(SUFFIXES) .p .lo

.c.o:
	$(CC) $(CFLAGS) -c $<
.c.lo:
	$(C_COMPILE_SHL) $(CFLAGS) -c $< -o _s$*.o
	@mv -f _s$*.o $*.lo

.c.p:
	@cp $(srcdir)/$*.c _$*.c
	$(CC) $(CFLAGS) -c _$*.c
	@rm -f _$*.c

profile: 
	sleep 1

$(LIBNAME): $(MPIO_OBJECTS)
	$(AR) $(LIBNAME) $(MPIO_OBJECTS)
	$(RANLIB) $(LIBNAME)  

MPIO_LOOBJECTS = $(MPIO_OBJECTS:.o=.lo)
$(SHLIBNAME).la: $(MPIO_LOOBJECTS)
	$(AR) $(SHLIBNAME).la $(MPIO_LOOBJECTS)

clean:
	@rm -f *.o *.lo *.gcno *.gcda *.bb *.bbg
	@rm -f ${srcdir}/*.gcno ${srcdir}/*.gcda 
	@rm -f ${srcdir}/*.bb ${srcdir}/*.bbg
