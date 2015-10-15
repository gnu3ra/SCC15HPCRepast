!****p* Program/H5test_kind_SIZEOF
!
! NAME
!  Executable: H5test_kind
!
! FILE
!  fortran/src/H5test_kind_SIZEOF.f90
!
! PURPOSE
!  This stand alone program is used at build time to generate the program
!  H5fortran_detect.f90. It cycles through all the available KIND parameters for
!  integers and reals. The appropriate program and subroutines are then generated
!  depending on which of the KIND values are found.
!
! NOTES
!  This program is used in place of H5test_kind.f90 when the Fortran intrinsic
!  function SIZEOF is available. It generates code that makes use of SIZEOF in
!  H5fortran_detect.f90 which is a portable solution but is not standard
!  compliant. The program H5test_kind_C_SIZEOF uses F2008 standard intrinsic
!  function instead, which is the preferred method. 
!
!  The availability of SIZEOF is checked at configure time and the TRUE/FALSE
!  condition is set in the configure variable "FORTRAN_HAVE_SIZEOF".
!
! COPYRIGHT
!  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
!  Copyright by The HDF Group.                                               *
!  Copyright by the Board of Trustees of the University of Illinois.         *
!  All rights reserved.                                                      *
!  *
!  This file is part of HDF5.  The full HDF5 copyright notice, including     *
!  terms governing use, modification, and redistribution, is contained in    *
!  the files COPYING and Copyright.html.  COPYING can be found at the root   *
!  of the source code distribution tree; Copyright.html can be found at the  *
!  root level of an installed copy of the electronic HDF5 document set and   *
!  is linked from the top-level documents page.  It can also be found at     *
!  http://hdfgroup.org/HDF5/doc/Copyright.html.  If you do not have          *
!  access to either file, you may request a copy from help@hdfgroup.org.     *
!  * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
!
! AUTHOR
!  M. Scot Breitenfeld
!
!*****

PROGRAM test_kind
  IMPLICIT NONE
  INTEGER :: i, j, ii, ir, last, ikind_numbers(10), rkind_numbers(10)
  INTEGER :: ji, jr, jd
  last = -1
  ii = 0

  ikind_numbers = 0
  rkind_numbers = 0

  DO i = 1,100
     j = SELECTED_INT_KIND(i)
     IF(j .NE. last) THEN
        IF(last .NE. -1) THEN
           ii = ii + 1
           ikind_numbers(ii) = last
        ENDIF
        last = j
        IF(j .EQ. -1) EXIT
     ENDIF
  ENDDO

  last = -1
  ir = 0
  DO i = 1,100
     j = SELECTED_REAL_KIND(i)
     IF(j .NE. last) THEN
        IF(last .NE. -1) THEN
           ir = ir + 1
           rkind_numbers(ir) = last
        ENDIF
        last = j
        IF(j .EQ. -1) EXIT
     ENDIF
  ENDDO

!  Generate program information:

WRITE(*,'(40(A,/))') &
'!****h* ROBODoc/H5fortran_detect.f90',&
'!',&
'! NAME',&
'!  H5fortran_detect',&
'! ',&
'! PURPOSE',&
'!  This stand alone program is used at build time to generate the header file',&
'!  H5fort_type_defines.h. The source code itself was automatically generated by',&
'!  the program H5test_kind_SIZEOF.f90',&
'!',&
'! NOTES',&
'!  This source code makes use of the Fortran intrinsic function SIZEOF because',&
'!  the availability of the intrinsic function was determined to be available at',&
'!  configure time',&
'!',&
'! COPYRIGHT',&
'! * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *',&
'!   Copyright by The HDF Group.                                               *',&
'!   Copyright by the Board of Trustees of the University of Illinois.         *',&
'!   All rights reserved.                                                      *',&
'!                                                                             *',&
'!   This file is part of HDF5.  The full HDF5 copyright notice, including     *',&
'!   terms governing use, modification, and redistribution, is contained in    *',&
'!   the files COPYING and Copyright.html.  COPYING can be found at the root   *',&
'!   of the source code distribution tree; Copyright.html can be found at the  *',&
'!   root level of an installed copy of the electronic HDF5 document set and   *',&
'!   is linked from the top-level documents page.  It can also be found at     *',&
'!   http://hdfgroup.org/HDF5/doc/Copyright.html.  If you do not have          *',&
'!   access to either file, you may request a copy from help@hdfgroup.org.     *',&
'! * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *',&
'!',&
'! AUTHOR',&
'!  H5test_kind_SIZEOF.f90',&
'!',&
'!*****'

! GENERATE A PROGRAM
!
! (a) Generate the module

  WRITE(*,*) "MODULE H5test_kind_SIZEOF_mod"
  WRITE(*,*) "USE ISO_C_BINDING"
  WRITE(*,*) "IMPLICIT NONE"
  WRITE(*,*) "CONTAINS"
  j = 0
  ji = KIND(1)
  WRITE(*, "("" SUBROUTINE i"", i2.2,""()"")") j
  WRITE(*,*)"   IMPLICIT NONE"
  WRITE(*,*)"   INTEGER :: a"
  WRITE(*,*)"   INTEGER(C_SIZE_T) :: a_size"
  WRITE(*,*)"   CHARACTER(LEN=2) :: ichr2, jchr2"
  WRITE(*,*)"   a_size = SIZEOF(a)"
  WRITE(*,*)"   WRITE(ichr2,'(I2)') a_size"
  WRITE(*,'(A,I0)')"    WRITE(jchr2,'(I2)') ",ji
  WRITE(*,'(A)')'    WRITE(*,*) "#define H5_FORTRAN_HAS_NATIVE_"'//  &
       "//TRIM(ADJUSTL(ichr2))//"//'"_KIND "'//"//ADJUSTL(jchr2)"
  WRITE(*,*)"   RETURN"
  WRITE(*,*)"END SUBROUTINE"
  jr = 0
  j = KIND(1.0)
  WRITE(*, "("" SUBROUTINE r"", i2.2,""()"")") jr
  WRITE(*,*)"   IMPLICIT NONE"
  WRITE(*,*)"   REAL :: a"
  WRITE(*,*)"   INTEGER(C_SIZE_T) :: a_size"
  WRITE(*,*)"   CHARACTER(LEN=2) :: ichr2, jchr2"
  WRITE(*,*)"   a_size = SIZEOF(a)"
  WRITE(*,*)"   WRITE(ichr2,'(I2)') a_size"
  WRITE(*,'(A,I0)')"    WRITE(jchr2,'(I2)') ",j
  WRITE(*,'(A)')'    WRITE(*,*) "#define H5_FORTRAN_HAS_REAL_NATIVE_"'//  &
       "//TRIM(ADJUSTL(ichr2))//"//'"_KIND "'//"//ADJUSTL(jchr2)"
  WRITE(*,*)"   RETURN"
  WRITE(*,*)"END SUBROUTINE"
  jd = 0
  j = KIND(1.d0)
  WRITE(*, "("" SUBROUTINE d"", i2.2,""()"")") jd
  WRITE(*,*)"   IMPLICIT NONE"
  WRITE(*,*)"   DOUBLE PRECISION :: a"
  WRITE(*,*)"   INTEGER(C_SIZE_T) :: a_size"
  WRITE(*,*)"   CHARACTER(LEN=2) :: ichr2, jchr2"
  WRITE(*,*)"   a_size = SIZEOF(a)"
  WRITE(*,*)"   WRITE(ichr2,'(I2)') a_size"
  WRITE(*,'(A,I0)')"    WRITE(jchr2,'(I2)') ",j
  WRITE(*,'(A)')'    WRITE(*,*) "#define H5_FORTRAN_HAS_DOUBLE_NATIVE_"'//  &
       "//TRIM(ADJUSTL(ichr2))//"//'"_KIND "'//"//ADJUSTL(jchr2)"
  WRITE(*,*)"   RETURN"
  WRITE(*,*)"END SUBROUTINE"
  DO i = 1, ii
     j = ikind_numbers(i)
     WRITE(*, "("" SUBROUTINE i"", i2.2,""()"")") j
     WRITE(*,*)"   IMPLICIT NONE"
     WRITE(*,'(A,I0,A)')"   INTEGER(KIND=",j,") :: a"
     WRITE(*,*)"   INTEGER(C_SIZE_T) :: a_size"
     WRITE(*,*)"   CHARACTER(LEN=2) :: ichr2, jchr2"
     WRITE(*,*)"   a_size = SIZEOF(a)"
     WRITE(*,*)"   WRITE(ichr2,'(I2)') a_size"
     WRITE(*,'(A,I0)')"    WRITE(jchr2,'(I2)') ",j
     WRITE(*,'(A)')'    WRITE(*,*) "#define H5_FORTRAN_HAS_INTEGER_"'//  &
          "//TRIM(ADJUSTL(ichr2))//"//'"_KIND "'//"//ADJUSTL(jchr2)"
     WRITE(*,*)"   RETURN"
     WRITE(*,*)"END SUBROUTINE"
  ENDDO
  DO i = 1, ir
     j = rkind_numbers(i)
     WRITE(*, "("" SUBROUTINE r"", i2.2,""()"")") j
     WRITE(*,*)"   IMPLICIT NONE"
     WRITE(*,'(A,I0,A)')"    REAL(KIND= ",j,") :: a"
     WRITE(*,*)"   INTEGER(C_SIZE_T) :: a_size"
     WRITE(*,*)"   CHARACTER(LEN=2) :: ichr2, jchr2"
     WRITE(*,*)"   a_size = SIZEOF(a)"
     WRITE(*,*)"   WRITE(ichr2,'(I2)') a_size"
     WRITE(*,'(A,I0)')"    WRITE(jchr2,'(I2)') ", j
     WRITE(*,'(A)')'    WRITE(*,*) "#define H5_FORTRAN_HAS_REAL_"'//  &
          "//TRIM(ADJUSTL(ichr2))//"//'"_KIND "'//"//ADJUSTL(jchr2)"
     WRITE(*,*)"   RETURN"
     WRITE(*,*)"END SUBROUTINE"
  ENDDO
  WRITE(*,*) "END MODULE H5test_kind_SIZEOF_mod"
  WRITE(*,*) ""

  ! (b) generate the main program

  WRITE(*,*) "PROGRAM H5test_kind_SIZEOF"
  WRITE(*,*) "USE H5test_kind_SIZEOF_mod"
  WRITE(*,*) "WRITE(*,*) "" /*generating header file*/ """
  ji = 0
  WRITE(*, "("" CALL i"", i2.2,""()"")") ji
  jr = 0
  WRITE(*, "("" CALL r"", i2.2,""()"")") jr
  jd = 0
  WRITE(*, "("" CALL d"", i2.2,""()"")") jd
  DO i = 1, ii
     j = ikind_numbers(i)
     WRITE(*, "("" CALL i"", i2.2,""()"")") j
  ENDDO
  DO i = 1, ir
     j = rkind_numbers(i)
     WRITE(*, "("" CALL r"", i2.2,""()"")") j
  ENDDO
  WRITE(*,*) "END PROGRAM H5test_kind_SIZEOF"

END PROGRAM test_kind



