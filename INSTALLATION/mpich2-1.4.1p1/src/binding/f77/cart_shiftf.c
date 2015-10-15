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
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_SHIFT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_shift__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_shift( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_shift_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak MPI_CART_SHIFT = PMPI_CART_SHIFT
#pragma weak mpi_cart_shift__ = PMPI_CART_SHIFT
#pragma weak mpi_cart_shift_ = PMPI_CART_SHIFT
#pragma weak mpi_cart_shift = PMPI_CART_SHIFT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_CART_SHIFT = pmpi_cart_shift__
#pragma weak mpi_cart_shift__ = pmpi_cart_shift__
#pragma weak mpi_cart_shift_ = pmpi_cart_shift__
#pragma weak mpi_cart_shift = pmpi_cart_shift__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_CART_SHIFT = pmpi_cart_shift_
#pragma weak mpi_cart_shift__ = pmpi_cart_shift_
#pragma weak mpi_cart_shift_ = pmpi_cart_shift_
#pragma weak mpi_cart_shift = pmpi_cart_shift_
#else
#pragma weak MPI_CART_SHIFT = pmpi_cart_shift
#pragma weak mpi_cart_shift__ = pmpi_cart_shift
#pragma weak mpi_cart_shift_ = pmpi_cart_shift
#pragma weak mpi_cart_shift = pmpi_cart_shift
#endif



#elif defined(HAVE_PRAGMA_WEAK)

#if defined(F77_NAME_UPPER)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_SHIFT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak MPI_CART_SHIFT = PMPI_CART_SHIFT
#elif defined(F77_NAME_LOWER_2USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_shift__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_cart_shift__ = pmpi_cart_shift__
#elif !defined(F77_NAME_LOWER_USCORE)
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_shift( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_cart_shift = pmpi_cart_shift
#else
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_shift_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#pragma weak mpi_cart_shift_ = pmpi_cart_shift_
#endif

#elif defined(HAVE_PRAGMA_HP_SEC_DEF)
#if defined(F77_NAME_UPPER)
#pragma _HP_SECONDARY_DEF PMPI_CART_SHIFT  MPI_CART_SHIFT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _HP_SECONDARY_DEF pmpi_cart_shift__  mpi_cart_shift__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _HP_SECONDARY_DEF pmpi_cart_shift  mpi_cart_shift
#else
#pragma _HP_SECONDARY_DEF pmpi_cart_shift_  mpi_cart_shift_
#endif

#elif defined(HAVE_PRAGMA_CRI_DUP)
#if defined(F77_NAME_UPPER)
#pragma _CRI duplicate MPI_CART_SHIFT as PMPI_CART_SHIFT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma _CRI duplicate mpi_cart_shift__ as pmpi_cart_shift__
#elif !defined(F77_NAME_LOWER_USCORE)
#pragma _CRI duplicate mpi_cart_shift as pmpi_cart_shift
#else
#pragma _CRI duplicate mpi_cart_shift_ as pmpi_cart_shift_
#endif
#endif /* HAVE_PRAGMA_WEAK */
#endif /* USE_WEAK_SYMBOLS */
/* End MPI profiling block */


/* These definitions are used only for generating the Fortran wrappers */
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK) && \
    defined(USE_ONLY_MPI_NAMES)
extern FORT_DLL_SPEC void FORT_CALL MPI_CART_SHIFT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_shift__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_shift( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
extern FORT_DLL_SPEC void FORT_CALL mpi_cart_shift_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#if defined(F77_NAME_UPPER)
#pragma weak mpi_cart_shift__ = MPI_CART_SHIFT
#pragma weak mpi_cart_shift_ = MPI_CART_SHIFT
#pragma weak mpi_cart_shift = MPI_CART_SHIFT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak MPI_CART_SHIFT = mpi_cart_shift__
#pragma weak mpi_cart_shift_ = mpi_cart_shift__
#pragma weak mpi_cart_shift = mpi_cart_shift__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak MPI_CART_SHIFT = mpi_cart_shift_
#pragma weak mpi_cart_shift__ = mpi_cart_shift_
#pragma weak mpi_cart_shift = mpi_cart_shift_
#else
#pragma weak MPI_CART_SHIFT = mpi_cart_shift
#pragma weak mpi_cart_shift__ = mpi_cart_shift
#pragma weak mpi_cart_shift_ = mpi_cart_shift
#endif

#endif

/* Map the name to the correct form */
#ifndef MPICH_MPI_FROM_PMPI
#if defined(USE_WEAK_SYMBOLS) && defined(HAVE_MULTIPLE_PRAGMA_WEAK)
/* Define the weak versions of the PMPI routine*/
#ifndef F77_NAME_UPPER
extern FORT_DLL_SPEC void FORT_CALL PMPI_CART_SHIFT( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_2USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_shift__( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER_USCORE
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_shift_( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );
#endif
#ifndef F77_NAME_LOWER
extern FORT_DLL_SPEC void FORT_CALL pmpi_cart_shift( MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint *, MPI_Fint * );

#endif

#if defined(F77_NAME_UPPER)
#pragma weak pmpi_cart_shift__ = PMPI_CART_SHIFT
#pragma weak pmpi_cart_shift_ = PMPI_CART_SHIFT
#pragma weak pmpi_cart_shift = PMPI_CART_SHIFT
#elif defined(F77_NAME_LOWER_2USCORE)
#pragma weak PMPI_CART_SHIFT = pmpi_cart_shift__
#pragma weak pmpi_cart_shift_ = pmpi_cart_shift__
#pragma weak pmpi_cart_shift = pmpi_cart_shift__
#elif defined(F77_NAME_LOWER_USCORE)
#pragma weak PMPI_CART_SHIFT = pmpi_cart_shift_
#pragma weak pmpi_cart_shift__ = pmpi_cart_shift_
#pragma weak pmpi_cart_shift = pmpi_cart_shift_
#else
#pragma weak PMPI_CART_SHIFT = pmpi_cart_shift
#pragma weak pmpi_cart_shift__ = pmpi_cart_shift
#pragma weak pmpi_cart_shift_ = pmpi_cart_shift
#endif /* Test on name mapping */
#endif /* Use multiple pragma weak */

#ifdef F77_NAME_UPPER
#define mpi_cart_shift_ PMPI_CART_SHIFT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_cart_shift_ pmpi_cart_shift__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_cart_shift_ pmpi_cart_shift
#else
#define mpi_cart_shift_ pmpi_cart_shift_
#endif /* Test on name mapping */

/* This defines the routine that we call, which must be the PMPI version
   since we're renaming the Fortran entry as the pmpi version.  The MPI name
   must be undefined first to prevent any conflicts with previous renamings,
   such as those put in place by the globus device when it is building on
   top of a vendor MPI. */
#undef MPI_Cart_shift
#define MPI_Cart_shift PMPI_Cart_shift 

#else

#ifdef F77_NAME_UPPER
#define mpi_cart_shift_ MPI_CART_SHIFT
#elif defined(F77_NAME_LOWER_2USCORE)
#define mpi_cart_shift_ mpi_cart_shift__
#elif !defined(F77_NAME_LOWER_USCORE)
#define mpi_cart_shift_ mpi_cart_shift
/* Else leave name alone */
#endif


#endif /* MPICH_MPI_FROM_PMPI */

/* Prototypes for the Fortran interfaces */
#include "fproto.h"
FORT_DLL_SPEC void FORT_CALL mpi_cart_shift_ ( MPI_Fint *v1, MPI_Fint *v2, MPI_Fint *v3, MPI_Fint *v4, MPI_Fint *v5, MPI_Fint *ierr ){
    *ierr = MPI_Cart_shift( (MPI_Comm)(*v1), *v2, *v3, v4, v5 );
}
