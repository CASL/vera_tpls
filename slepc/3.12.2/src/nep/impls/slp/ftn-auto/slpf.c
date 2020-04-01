#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* slp.c */
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

#include "slepcnep.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepslpseteps_ NEPSLPSETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepslpseteps_ nepslpseteps
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepslpgeteps_ NEPSLPGETEPS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepslpgeteps_ nepslpgeteps
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepslpsetksp_ NEPSLPSETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepslpsetksp_ nepslpsetksp
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define nepslpgetksp_ NEPSLPGETKSP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define nepslpgetksp_ nepslpgetksp
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
SLEPC_EXTERN void PETSC_STDCALL  nepslpseteps_(NEP nep,EPS eps, int *__ierr){
*__ierr = NEPSLPSetEPS(
	(NEP)PetscToPointer((nep) ),
	(EPS)PetscToPointer((eps) ));
}
SLEPC_EXTERN void PETSC_STDCALL  nepslpgeteps_(NEP nep,EPS *eps, int *__ierr){
*__ierr = NEPSLPGetEPS(
	(NEP)PetscToPointer((nep) ),eps);
}
SLEPC_EXTERN void PETSC_STDCALL  nepslpsetksp_(NEP nep,KSP ksp, int *__ierr){
*__ierr = NEPSLPSetKSP(
	(NEP)PetscToPointer((nep) ),
	(KSP)PetscToPointer((ksp) ));
}
SLEPC_EXTERN void PETSC_STDCALL  nepslpgetksp_(NEP nep,KSP *ksp, int *__ierr){
*__ierr = NEPSLPGetKSP(
	(NEP)PetscToPointer((nep) ),ksp);
}
#if defined(__cplusplus)
}
#endif
