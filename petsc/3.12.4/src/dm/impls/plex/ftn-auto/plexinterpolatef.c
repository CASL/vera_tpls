#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* plexinterpolate.c */
/* Fortran interface file */

/*
* This file was generated automatically by bfort from the C source
* file.  
 */

#ifdef PETSC_USE_POINTER_CONVERSION
#if defined(__cplusplus)
extern "C" { 
#endif 
extern void *PetscToPointer(void*);
extern int PetscFromPointer(void *);
extern void PetscRmPointer(void*);
#if defined(__cplusplus)
} 
#endif 

#else

#define PetscToPointer(a) (*(PetscFortranAddr *)(a))
#define PetscFromPointer(a) (PetscFortranAddr)(a)
#define PetscRmPointer(a)
#endif

#include "petscdmplex.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexinterpolatepointsf_ DMPLEXINTERPOLATEPOINTSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexinterpolatepointsf_ dmplexinterpolatepointsf
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexinterpolate_ DMPLEXINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexinterpolate_ dmplexinterpolate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexcopycoordinates_ DMPLEXCOPYCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexcopycoordinates_ dmplexcopycoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmplexuninterpolate_ DMPLEXUNINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmplexuninterpolate_ dmplexuninterpolate
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmplexinterpolatepointsf_(DM dm,PetscSF pointSF, int *__ierr){
*__ierr = DMPlexInterpolatePointSF(
	(DM)PetscToPointer((dm) ),
	(PetscSF)PetscToPointer((pointSF) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmplexinterpolate_(DM dm,DM *dmInt, int *__ierr){
*__ierr = DMPlexInterpolate(
	(DM)PetscToPointer((dm) ),dmInt);
}
PETSC_EXTERN void PETSC_STDCALL  dmplexcopycoordinates_(DM dmA,DM dmB, int *__ierr){
*__ierr = DMPlexCopyCoordinates(
	(DM)PetscToPointer((dmA) ),
	(DM)PetscToPointer((dmB) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmplexuninterpolate_(DM dm,DM *dmUnint, int *__ierr){
*__ierr = DMPlexUninterpolate(
	(DM)PetscToPointer((dm) ),dmUnint);
}
#if defined(__cplusplus)
}
#endif
