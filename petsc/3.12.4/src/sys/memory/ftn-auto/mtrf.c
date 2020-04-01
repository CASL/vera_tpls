#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* mtr.c */
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

#include "petscsys.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmallocgetcurrentusage_ PETSCMALLOCGETCURRENTUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmallocgetcurrentusage_ petscmallocgetcurrentusage
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmallocgetmaximumusage_ PETSCMALLOCGETMAXIMUMUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmallocgetmaximumusage_ petscmallocgetmaximumusage
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmallocpushmaximumusage_ PETSCMALLOCPUSHMAXIMUMUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmallocpushmaximumusage_ petscmallocpushmaximumusage
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmallocpopmaximumusage_ PETSCMALLOCPOPMAXIMUMUSAGE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmallocpopmaximumusage_ petscmallocpopmaximumusage
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmallocviewset_ PETSCMALLOCVIEWSET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmallocviewset_ petscmallocviewset
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmallocviewget_ PETSCMALLOCVIEWGET
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmallocviewget_ petscmallocviewget
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmallocsetdebug_ PETSCMALLOCSETDEBUG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmallocsetdebug_ petscmallocsetdebug
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define petscmallocgetdebug_ PETSCMALLOCGETDEBUG
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define petscmallocgetdebug_ petscmallocgetdebug
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  petscmallocgetcurrentusage_(PetscLogDouble *space, int *__ierr){
*__ierr = PetscMallocGetCurrentUsage(space);
}
PETSC_EXTERN void PETSC_STDCALL  petscmallocgetmaximumusage_(PetscLogDouble *space, int *__ierr){
*__ierr = PetscMallocGetMaximumUsage(space);
}
PETSC_EXTERN void PETSC_STDCALL  petscmallocpushmaximumusage_(int *event, int *__ierr){
*__ierr = PetscMallocPushMaximumUsage(*event);
}
PETSC_EXTERN void PETSC_STDCALL  petscmallocpopmaximumusage_(int *event,PetscLogDouble *mu, int *__ierr){
*__ierr = PetscMallocPopMaximumUsage(*event,mu);
}
PETSC_EXTERN void PETSC_STDCALL  petscmallocviewset_(PetscLogDouble *logmin, int *__ierr){
*__ierr = PetscMallocViewSet(*logmin);
}
PETSC_EXTERN void PETSC_STDCALL  petscmallocviewget_(PetscBool *logging, int *__ierr){
*__ierr = PetscMallocViewGet(logging);
}
PETSC_EXTERN void PETSC_STDCALL  petscmallocsetdebug_(PetscBool *eachcall,PetscBool *initializenan, int *__ierr){
*__ierr = PetscMallocSetDebug(*eachcall,*initializenan);
}
PETSC_EXTERN void PETSC_STDCALL  petscmallocgetdebug_(PetscBool *basic,PetscBool *eachcall,PetscBool *initializenan, int *__ierr){
*__ierr = PetscMallocGetDebug(basic,eachcall,initializenan);
}
#if defined(__cplusplus)
}
#endif
