/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*  
 *  (C) 2001 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 * This file is automatically generated by buildiface 
 * DO NOT EDIT
 */
#include "mpi_fortimpl.h"


/* Begin MPI profiling block */
#if defined(USE_WEAK_SYMBOLS) && !defined(USE_ONLY_MPI_NAMES) 
#if defined(HAVE_MULTIPLE_PRAGMA_WEAK)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_SIZE( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_size__( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_size( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_size_( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_FILE_GET_SIZE = PMPI_FILE_GET_SIZE
#pragma weak mpi_file_get_size__ = PMPI_FILE_GET_SIZE
#pragma weak mpi_file_get_size_ = PMPI_FILE_GET_SIZE
#pragma weak mpi_file_get_size = PMPI_FILE_GET_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_GET_SIZE = pmpi_file_get_size__
#pragma weak mpi_file_get_size__ = pmpi_file_get_size__
#pragma weak mpi_file_get_size_ = pmpi_file_get_size__
#pragma weak mpi_file_get_size = pmpi_file_get_size__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_GET_SIZE = pmpi_file_get_size_
#pragma weak mpi_file_get_size__ = pmpi_file_get_size_
#pragma weak mpi_file_get_size_ = pmpi_file_get_size_
#pragma weak mpi_file_get_size = pmpi_file_get_size_
#else
#pragma weak MPI_FILE_GET_SIZE = pmpi_file_get_size
#pragma weak mpi_file_get_size__ = pmpi_file_get_size
#pragma weak mpi_file_get_size_ = pmpi_file_get_size
#pragma weak mpi_file_get_size = pmpi_file_get_size
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_SIZE( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#pragma weak MPI_FILE_GET_SIZE = PMPI_FILE_GET_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_size__( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#pragma weak mpi_file_get_size__ = pmpi_file_get_size__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_size( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#pragma weak mpi_file_get_size = pmpi_file_get_size
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_size_( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#pragma weak mpi_file_get_size_ = pmpi_file_get_size_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_FILE_GET_SIZE  MPI_FILE_GET_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_get_size__  mpi_file_get_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_file_get_size  mpi_file_get_size
#else
#pragma _HP_SECONDARY_DEF pmpi_file_get_size_  mpi_file_get_size_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_FILE_GET_SIZE as PMPI_FILE_GET_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_file_get_size__ as pmpi_file_get_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_file_get_size as pmpi_file_get_size
#else
#pragma _CRI duplicate mpi_file_get_size_ as pmpi_file_get_size_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_FILE_GET_SIZE( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_size__( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_size( MPI_Fint *, MPI_Offset*, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_file_get_size_( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_file_get_size__ = MPI_FILE_GET_SIZE
#pragma weak mpi_file_get_size_ = MPI_FILE_GET_SIZE
#pragma weak mpi_file_get_size = MPI_FILE_GET_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_FILE_GET_SIZE = mpi_file_get_size__
#pragma weak mpi_file_get_size_ = mpi_file_get_size__
#pragma weak mpi_file_get_size = mpi_file_get_size__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_FILE_GET_SIZE = mpi_file_get_size_
#pragma weak mpi_file_get_size__ = mpi_file_get_size_
#pragma weak mpi_file_get_size = mpi_file_get_size_
#else
#pragma weak MPI_FILE_GET_SIZE = mpi_file_get_size
#pragma weak mpi_file_get_size__ = mpi_file_get_size
#pragma weak mpi_file_get_size_ = mpi_file_get_size
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_FILE_GET_SIZE( MPI_Fint *, MPI_Offset*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_size__( MPI_Fint *, MPI_Offset*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_size_( MPI_Fint *, MPI_Offset*, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_file_get_size( MPI_Fint *, MPI_Offset*, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_file_get_size__ = PMPI_FILE_GET_SIZE
#pragma weak pmpi_file_get_size_ = PMPI_FILE_GET_SIZE
#pragma weak pmpi_file_get_size = PMPI_FILE_GET_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_FILE_GET_SIZE = pmpi_file_get_size__
#pragma weak pmpi_file_get_size_ = pmpi_file_get_size__
#pragma weak pmpi_file_get_size = pmpi_file_get_size__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_FILE_GET_SIZE = pmpi_file_get_size_
#pragma weak pmpi_file_get_size__ = pmpi_file_get_size_
#pragma weak pmpi_file_get_size = pmpi_file_get_size_
#else
#pragma weak PMPI_FILE_GET_SIZE = pmpi_file_get_size
#pragma weak pmpi_file_get_size__ = pmpi_file_get_size
#pragma weak pmpi_file_get_size_ = pmpi_file_get_size
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_file_get_size_ PMPI_FILE_GET_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_get_size_ pmpi_file_get_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_get_size_ pmpi_file_get_size
#else
#define mpi_file_get_size_ pmpi_file_get_size_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings,
   such as those put in place by the globus device when it is building on
   top of a vendor MPI. */
#undef MPI_File_get_size
#define MPI_File_get_size PMPI_File_get_size 

#else

#ifdef F77_NAME_UPPER
#define mpi_file_get_size_ MPI_FILE_GET_SIZE
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_file_get_size_ mpi_file_get_size__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_file_get_size_ mpi_file_get_size
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_file_get_size_ ( MPI_Fint *v1, MPI_Offset*v2, MPI_Fint *ierr ){
#ifdef MPI_MODE_RDONLY
    *ierr = MPI_File_get_size( MPI_File_f2c(*v1), v2 );
#else
*ierr = MPI_ERR_INTERN;
#endif
}
