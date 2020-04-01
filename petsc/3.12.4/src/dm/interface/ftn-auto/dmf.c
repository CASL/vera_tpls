#include "petscsys.h"
#include "petscfix.h"
#include "petsc/private/fortranimpl.h"
/* dm.c */
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

#include "petscdm.h"
#include "petscdmlabel.h"
#include "petscds.h"
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreate_ DMCREATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreate_ dmcreate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmclone_ DMCLONE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmclone_ dmclone
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecgetdm_ VECGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecgetdm_ vecgetdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define vecsetdm_ VECSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define vecsetdm_ vecsetdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matgetdm_ MATGETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matgetdm_ matgetdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matsetdm_ MATSETDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matsetdm_ matsetdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmdestroy_ DMDESTROY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmdestroy_ dmdestroy
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetup_ DMSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetup_ dmsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetfromoptions_ DMSETFROMOPTIONS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetfromoptions_ dmsetfromoptions
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreateglobalvector_ DMCREATEGLOBALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreateglobalvector_ dmcreateglobalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreatelocalvector_ DMCREATELOCALVECTOR
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreatelocalvector_ dmcreatelocalvector
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetlocaltoglobalmapping_ DMGETLOCALTOGLOBALMAPPING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetlocaltoglobalmapping_ dmgetlocaltoglobalmapping
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetblocksize_ DMGETBLOCKSIZE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetblocksize_ dmgetblocksize
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreateinterpolation_ DMCREATEINTERPOLATION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreateinterpolation_ dmcreateinterpolation
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreaterestriction_ DMCREATERESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreaterestriction_ dmcreaterestriction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreateinjection_ DMCREATEINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreateinjection_ dmcreateinjection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreatemassmatrix_ DMCREATEMASSMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreatemassmatrix_ dmcreatemassmatrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreatecoloring_ DMCREATECOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreatecoloring_ dmcreatecoloring
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreatematrix_ DMCREATEMATRIX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreatematrix_ dmcreatematrix
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetmatrixpreallocateonly_ DMSETMATRIXPREALLOCATEONLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetmatrixpreallocateonly_ dmsetmatrixpreallocateonly
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetmatrixstructureonly_ DMSETMATRIXSTRUCTUREONLY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetmatrixstructureonly_ dmsetmatrixstructureonly
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreatesubdm_ DMCREATESUBDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreatesubdm_ dmcreatesubdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmrefine_ DMREFINE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmrefine_ dmrefine
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dminterpolate_ DMINTERPOLATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dminterpolate_ dminterpolate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetrefinelevel_ DMGETREFINELEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetrefinelevel_ dmgetrefinelevel
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetrefinelevel_ DMSETREFINELEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetrefinelevel_ dmsetrefinelevel
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmhasbasistransform_ DMHASBASISTRANSFORM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmhasbasistransform_ dmhasbasistransform
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmglobaltolocal_ DMGLOBALTOLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmglobaltolocal_ dmglobaltolocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmglobaltolocalbegin_ DMGLOBALTOLOCALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmglobaltolocalbegin_ dmglobaltolocalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmglobaltolocalend_ DMGLOBALTOLOCALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmglobaltolocalend_ dmglobaltolocalend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmlocaltoglobal_ DMLOCALTOGLOBAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmlocaltoglobal_ dmlocaltoglobal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmlocaltoglobalbegin_ DMLOCALTOGLOBALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmlocaltoglobalbegin_ dmlocaltoglobalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmlocaltoglobalend_ DMLOCALTOGLOBALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmlocaltoglobalend_ dmlocaltoglobalend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmlocaltolocalbegin_ DMLOCALTOLOCALBEGIN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmlocaltolocalbegin_ dmlocaltolocalbegin
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmlocaltolocalend_ DMLOCALTOLOCALEND
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmlocaltolocalend_ dmlocaltolocalend
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcoarsen_ DMCOARSEN
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcoarsen_ dmcoarsen
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmrestrict_ DMRESTRICT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmrestrict_ dmrestrict
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsubdomainrestrict_ DMSUBDOMAINRESTRICT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsubdomainrestrict_ dmsubdomainrestrict
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoarsenlevel_ DMGETCOARSENLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoarsenlevel_ dmgetcoarsenlevel
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetcoarsenlevel_ DMSETCOARSENLEVEL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetcoarsenlevel_ dmsetcoarsenlevel
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetapplicationcontext_ DMSETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetapplicationcontext_ dmsetapplicationcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetapplicationcontext_ DMGETAPPLICATIONCONTEXT
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetapplicationcontext_ dmgetapplicationcontext
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmhasvariablebounds_ DMHASVARIABLEBOUNDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmhasvariablebounds_ dmhasvariablebounds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmhascoloring_ DMHASCOLORING
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmhascoloring_ dmhascoloring
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmhascreaterestriction_ DMHASCREATERESTRICTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmhascreaterestriction_ dmhascreaterestriction
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmhascreateinjection_ DMHASCREATEINJECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmhascreateinjection_ dmhascreateinjection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetlocalboundingbox_ DMGETLOCALBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetlocalboundingbox_ dmgetlocalboundingbox
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetboundingbox_ DMGETBOUNDINGBOX
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetboundingbox_ dmgetboundingbox
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetsection_ DMGETSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetsection_ dmgetsection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetlocalsection_ DMGETLOCALSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetlocalsection_ dmgetlocalsection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetsection_ DMSETSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetsection_ dmsetsection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetlocalsection_ DMSETLOCALSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetlocalsection_ dmsetlocalsection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetdefaultconstraints_ DMGETDEFAULTCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetdefaultconstraints_ dmgetdefaultconstraints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetdefaultconstraints_ DMSETDEFAULTCONSTRAINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetdefaultconstraints_ dmsetdefaultconstraints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetglobalsection_ DMGETGLOBALSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetglobalsection_ dmgetglobalsection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetglobalsection_ DMSETGLOBALSECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetglobalsection_ dmsetglobalsection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetsectionsf_ DMGETSECTIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetsectionsf_ dmgetsectionsf
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetsectionsf_ DMSETSECTIONSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetsectionsf_ dmsetsectionsf
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetpointsf_ DMGETPOINTSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetpointsf_ dmgetpointsf
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetpointsf_ DMSETPOINTSF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetpointsf_ dmsetpointsf
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmclearfields_ DMCLEARFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmclearfields_ dmclearfields
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetnumfields_ DMGETNUMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetnumfields_ dmgetnumfields
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetnumfields_ DMSETNUMFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetnumfields_ dmsetnumfields
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetfield_ DMGETFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetfield_ dmgetfield
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetfield_ DMSETFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetfield_ dmsetfield
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmaddfield_ DMADDFIELD
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmaddfield_ dmaddfield
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcopyfields_ DMCOPYFIELDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcopyfields_ dmcopyfields
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetadjacency_ DMGETADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetadjacency_ dmgetadjacency
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetadjacency_ DMSETADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetadjacency_ dmsetadjacency
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetbasicadjacency_ DMGETBASICADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetbasicadjacency_ dmgetbasicadjacency
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetbasicadjacency_ DMSETBASICADJACENCY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetbasicadjacency_ dmsetbasicadjacency
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetnumds_ DMGETNUMDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetnumds_ dmgetnumds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcleards_ DMCLEARDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcleards_ dmcleards
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetds_ DMGETDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetds_ dmgetds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcellds_ DMGETCELLDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcellds_ dmgetcellds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetregionds_ DMGETREGIONDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetregionds_ dmgetregionds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetregionnumds_ DMGETREGIONNUMDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetregionnumds_ dmgetregionnumds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetregionds_ DMSETREGIONDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetregionds_ dmsetregionds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcreateds_ DMCREATEDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcreateds_ dmcreateds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcopyds_ DMCOPYDS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcopyds_ dmcopyds
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcopydisc_ DMCOPYDISC
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcopydisc_ dmcopydisc
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetdimension_ DMGETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetdimension_ dmgetdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetdimension_ DMSETDIMENSION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetdimension_ dmsetdimension
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetdimpoints_ DMGETDIMPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetdimpoints_ dmgetdimpoints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetcoordinates_ DMSETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetcoordinates_ dmsetcoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetcoordinateslocal_ DMSETCOORDINATESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetcoordinateslocal_ dmsetcoordinateslocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinates_ DMGETCOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinates_ dmgetcoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinateslocalsetup_ DMGETCOORDINATESLOCALSETUP
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinateslocalsetup_ dmgetcoordinateslocalsetup
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinateslocal_ DMGETCOORDINATESLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinateslocal_ dmgetcoordinateslocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinateslocalnoncollective_ DMGETCOORDINATESLOCALNONCOLLECTIVE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinateslocalnoncollective_ dmgetcoordinateslocalnoncollective
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinateslocaltuple_ DMGETCOORDINATESLOCALTUPLE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinateslocaltuple_ dmgetcoordinateslocaltuple
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinatedm_ DMGETCOORDINATEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinatedm_ dmgetcoordinatedm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetcoordinatedm_ DMSETCOORDINATEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetcoordinatedm_ dmsetcoordinatedm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinatedim_ DMGETCOORDINATEDIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinatedim_ dmgetcoordinatedim
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetcoordinatedim_ DMSETCOORDINATEDIM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetcoordinatedim_ dmsetcoordinatedim
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinatesection_ DMGETCOORDINATESECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinatesection_ dmgetcoordinatesection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetcoordinatesection_ DMSETCOORDINATESECTION
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetcoordinatesection_ dmsetcoordinatesection
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmlocalizecoordinate_ DMLOCALIZECOORDINATE
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmlocalizecoordinate_ dmlocalizecoordinate
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinateslocalizedlocal_ DMGETCOORDINATESLOCALIZEDLOCAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinateslocalizedlocal_ dmgetcoordinateslocalizedlocal
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoordinateslocalized_ DMGETCOORDINATESLOCALIZED
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoordinateslocalized_ dmgetcoordinateslocalized
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmlocalizecoordinates_ DMLOCALIZECOORDINATES
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmlocalizecoordinates_ dmlocalizecoordinates
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmlocatepoints_ DMLOCATEPOINTS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmlocatepoints_ dmlocatepoints
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetoutputdm_ DMGETOUTPUTDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetoutputdm_ dmgetoutputdm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetoutputsequencenumber_ DMGETOUTPUTSEQUENCENUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetoutputsequencenumber_ dmgetoutputsequencenumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetoutputsequencenumber_ DMSETOUTPUTSEQUENCENUMBER
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetoutputsequencenumber_ dmsetoutputsequencenumber
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetusenatural_ DMGETUSENATURAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetusenatural_ dmgetusenatural
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetusenatural_ DMSETUSENATURAL
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetusenatural_ dmsetusenatural
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetnumlabels_ DMGETNUMLABELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetnumlabels_ dmgetnumlabels
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmremovelabelbyself_ DMREMOVELABELBYSELF
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmremovelabelbyself_ dmremovelabelbyself
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmcopylabels_ DMCOPYLABELS
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmcopylabels_ dmcopylabels
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcoarsedm_ DMGETCOARSEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcoarsedm_ dmgetcoarsedm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetcoarsedm_ DMSETCOARSEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetcoarsedm_ dmsetcoarsedm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetfinedm_ DMGETFINEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetfinedm_ dmgetfinedm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmsetfinedm_ DMSETFINEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmsetfinedm_ dmsetfinedm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetnumboundary_ DMGETNUMBOUNDARY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetnumboundary_ dmgetnumboundary
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define matfdcoloringusedm_ MATFDCOLORINGUSEDM
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define matfdcoloringusedm_ matfdcoloringusedm
#endif
#ifdef PETSC_HAVE_FORTRAN_CAPS
#define dmgetcompatibility_ DMGETCOMPATIBILITY
#elif !defined(PETSC_HAVE_FORTRAN_UNDERSCORE) && !defined(FORTRANDOUBLEUNDERSCORE)
#define dmgetcompatibility_ dmgetcompatibility
#endif


/* Definitions of Fortran Wrapper routines */
#if defined(__cplusplus)
extern "C" {
#endif
PETSC_EXTERN void PETSC_STDCALL  dmcreate_(MPI_Fint * comm,DM *dm, int *__ierr){
*__ierr = DMCreate(
	MPI_Comm_f2c(*(comm)),dm);
}
PETSC_EXTERN void PETSC_STDCALL  dmclone_(DM dm,DM *newdm, int *__ierr){
*__ierr = DMClone(
	(DM)PetscToPointer((dm) ),newdm);
}
PETSC_EXTERN void PETSC_STDCALL  vecgetdm_(Vec v,DM *dm, int *__ierr){
*__ierr = VecGetDM(
	(Vec)PetscToPointer((v) ),dm);
}
PETSC_EXTERN void PETSC_STDCALL  vecsetdm_(Vec v,DM dm, int *__ierr){
*__ierr = VecSetDM(
	(Vec)PetscToPointer((v) ),
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  matgetdm_(Mat A,DM *dm, int *__ierr){
*__ierr = MatGetDM(
	(Mat)PetscToPointer((A) ),dm);
}
PETSC_EXTERN void PETSC_STDCALL  matsetdm_(Mat A,DM dm, int *__ierr){
*__ierr = MatSetDM(
	(Mat)PetscToPointer((A) ),
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmdestroy_(DM *dm, int *__ierr){
*__ierr = DMDestroy(dm);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetup_(DM dm, int *__ierr){
*__ierr = DMSetUp(
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmsetfromoptions_(DM dm, int *__ierr){
*__ierr = DMSetFromOptions(
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmcreateglobalvector_(DM dm,Vec *vec, int *__ierr){
*__ierr = DMCreateGlobalVector(
	(DM)PetscToPointer((dm) ),vec);
}
PETSC_EXTERN void PETSC_STDCALL  dmcreatelocalvector_(DM dm,Vec *vec, int *__ierr){
*__ierr = DMCreateLocalVector(
	(DM)PetscToPointer((dm) ),vec);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetlocaltoglobalmapping_(DM dm,ISLocalToGlobalMapping *ltog, int *__ierr){
*__ierr = DMGetLocalToGlobalMapping(
	(DM)PetscToPointer((dm) ),ltog);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetblocksize_(DM dm,PetscInt *bs, int *__ierr){
*__ierr = DMGetBlockSize(
	(DM)PetscToPointer((dm) ),bs);
}
PETSC_EXTERN void PETSC_STDCALL  dmcreateinterpolation_(DM dm1,DM dm2,Mat *mat,Vec *vec, int *__ierr){
*__ierr = DMCreateInterpolation(
	(DM)PetscToPointer((dm1) ),
	(DM)PetscToPointer((dm2) ),mat,vec);
}
PETSC_EXTERN void PETSC_STDCALL  dmcreaterestriction_(DM dm1,DM dm2,Mat *mat, int *__ierr){
*__ierr = DMCreateRestriction(
	(DM)PetscToPointer((dm1) ),
	(DM)PetscToPointer((dm2) ),mat);
}
PETSC_EXTERN void PETSC_STDCALL  dmcreateinjection_(DM dm1,DM dm2,Mat *mat, int *__ierr){
*__ierr = DMCreateInjection(
	(DM)PetscToPointer((dm1) ),
	(DM)PetscToPointer((dm2) ),mat);
}
PETSC_EXTERN void PETSC_STDCALL  dmcreatemassmatrix_(DM dm1,DM dm2,Mat *mat, int *__ierr){
*__ierr = DMCreateMassMatrix(
	(DM)PetscToPointer((dm1) ),
	(DM)PetscToPointer((dm2) ),mat);
}
PETSC_EXTERN void PETSC_STDCALL  dmcreatecoloring_(DM dm,ISColoringType *ctype,ISColoring *coloring, int *__ierr){
*__ierr = DMCreateColoring(
	(DM)PetscToPointer((dm) ),*ctype,coloring);
}
PETSC_EXTERN void PETSC_STDCALL  dmcreatematrix_(DM dm,Mat *mat, int *__ierr){
*__ierr = DMCreateMatrix(
	(DM)PetscToPointer((dm) ),mat);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetmatrixpreallocateonly_(DM dm,PetscBool *only, int *__ierr){
*__ierr = DMSetMatrixPreallocateOnly(
	(DM)PetscToPointer((dm) ),*only);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetmatrixstructureonly_(DM dm,PetscBool *only, int *__ierr){
*__ierr = DMSetMatrixStructureOnly(
	(DM)PetscToPointer((dm) ),*only);
}
PETSC_EXTERN void PETSC_STDCALL  dmcreatesubdm_(DM dm,PetscInt *numFields, PetscInt fields[],IS *is,DM *subdm, int *__ierr){
*__ierr = DMCreateSubDM(
	(DM)PetscToPointer((dm) ),*numFields,fields,is,subdm);
}
PETSC_EXTERN void PETSC_STDCALL  dmrefine_(DM dm,MPI_Fint * comm,DM *dmf, int *__ierr){
*__ierr = DMRefine(
	(DM)PetscToPointer((dm) ),
	MPI_Comm_f2c(*(comm)),dmf);
}
PETSC_EXTERN void PETSC_STDCALL  dminterpolate_(DM coarse,Mat interp,DM fine, int *__ierr){
*__ierr = DMInterpolate(
	(DM)PetscToPointer((coarse) ),
	(Mat)PetscToPointer((interp) ),
	(DM)PetscToPointer((fine) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetrefinelevel_(DM dm,PetscInt *level, int *__ierr){
*__ierr = DMGetRefineLevel(
	(DM)PetscToPointer((dm) ),level);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetrefinelevel_(DM dm,PetscInt *level, int *__ierr){
*__ierr = DMSetRefineLevel(
	(DM)PetscToPointer((dm) ),*level);
}
PETSC_EXTERN void PETSC_STDCALL  dmhasbasistransform_(DM dm,PetscBool *flg, int *__ierr){
*__ierr = DMHasBasisTransform(
	(DM)PetscToPointer((dm) ),flg);
}
PETSC_EXTERN void PETSC_STDCALL  dmglobaltolocal_(DM dm,Vec g,InsertMode *mode,Vec l, int *__ierr){
*__ierr = DMGlobalToLocal(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmglobaltolocalbegin_(DM dm,Vec g,InsertMode *mode,Vec l, int *__ierr){
*__ierr = DMGlobalToLocalBegin(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmglobaltolocalend_(DM dm,Vec g,InsertMode *mode,Vec l, int *__ierr){
*__ierr = DMGlobalToLocalEnd(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmlocaltoglobal_(DM dm,Vec l,InsertMode *mode,Vec g, int *__ierr){
*__ierr = DMLocalToGlobal(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((l) ),*mode,
	(Vec)PetscToPointer((g) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmlocaltoglobalbegin_(DM dm,Vec l,InsertMode *mode,Vec g, int *__ierr){
*__ierr = DMLocalToGlobalBegin(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((l) ),*mode,
	(Vec)PetscToPointer((g) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmlocaltoglobalend_(DM dm,Vec l,InsertMode *mode,Vec g, int *__ierr){
*__ierr = DMLocalToGlobalEnd(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((l) ),*mode,
	(Vec)PetscToPointer((g) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmlocaltolocalbegin_(DM dm,Vec g,InsertMode *mode,Vec l, int *__ierr){
*__ierr = DMLocalToLocalBegin(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmlocaltolocalend_(DM dm,Vec g,InsertMode *mode,Vec l, int *__ierr){
*__ierr = DMLocalToLocalEnd(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((g) ),*mode,
	(Vec)PetscToPointer((l) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmcoarsen_(DM dm,MPI_Fint * comm,DM *dmc, int *__ierr){
*__ierr = DMCoarsen(
	(DM)PetscToPointer((dm) ),
	MPI_Comm_f2c(*(comm)),dmc);
}
PETSC_EXTERN void PETSC_STDCALL  dmrestrict_(DM fine,Mat restrct,Vec rscale,Mat inject,DM coarse, int *__ierr){
*__ierr = DMRestrict(
	(DM)PetscToPointer((fine) ),
	(Mat)PetscToPointer((restrct) ),
	(Vec)PetscToPointer((rscale) ),
	(Mat)PetscToPointer((inject) ),
	(DM)PetscToPointer((coarse) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmsubdomainrestrict_(DM global,VecScatter oscatter,VecScatter gscatter,DM subdm, int *__ierr){
*__ierr = DMSubDomainRestrict(
	(DM)PetscToPointer((global) ),
	(VecScatter)PetscToPointer((oscatter) ),
	(VecScatter)PetscToPointer((gscatter) ),
	(DM)PetscToPointer((subdm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoarsenlevel_(DM dm,PetscInt *level, int *__ierr){
*__ierr = DMGetCoarsenLevel(
	(DM)PetscToPointer((dm) ),level);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetcoarsenlevel_(DM dm,PetscInt *level, int *__ierr){
*__ierr = DMSetCoarsenLevel(
	(DM)PetscToPointer((dm) ),*level);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetapplicationcontext_(DM dm,void*ctx, int *__ierr){
*__ierr = DMSetApplicationContext(
	(DM)PetscToPointer((dm) ),ctx);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetapplicationcontext_(DM dm,void*ctx, int *__ierr){
*__ierr = DMGetApplicationContext(
	(DM)PetscToPointer((dm) ),ctx);
}
PETSC_EXTERN void PETSC_STDCALL  dmhasvariablebounds_(DM dm,PetscBool *flg, int *__ierr){
*__ierr = DMHasVariableBounds(
	(DM)PetscToPointer((dm) ),flg);
}
PETSC_EXTERN void PETSC_STDCALL  dmhascoloring_(DM dm,PetscBool *flg, int *__ierr){
*__ierr = DMHasColoring(
	(DM)PetscToPointer((dm) ),flg);
}
PETSC_EXTERN void PETSC_STDCALL  dmhascreaterestriction_(DM dm,PetscBool *flg, int *__ierr){
*__ierr = DMHasCreateRestriction(
	(DM)PetscToPointer((dm) ),flg);
}
PETSC_EXTERN void PETSC_STDCALL  dmhascreateinjection_(DM dm,PetscBool *flg, int *__ierr){
*__ierr = DMHasCreateInjection(
	(DM)PetscToPointer((dm) ),flg);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetlocalboundingbox_(DM dm,PetscReal lmin[],PetscReal lmax[], int *__ierr){
*__ierr = DMGetLocalBoundingBox(
	(DM)PetscToPointer((dm) ),lmin,lmax);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetboundingbox_(DM dm,PetscReal gmin[],PetscReal gmax[], int *__ierr){
*__ierr = DMGetBoundingBox(
	(DM)PetscToPointer((dm) ),gmin,gmax);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetsection_(DM dm,PetscSection *section, int *__ierr){
*__ierr = DMGetSection(
	(DM)PetscToPointer((dm) ),section);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetlocalsection_(DM dm,PetscSection *section, int *__ierr){
*__ierr = DMGetLocalSection(
	(DM)PetscToPointer((dm) ),section);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetsection_(DM dm,PetscSection section, int *__ierr){
*__ierr = DMSetSection(
	(DM)PetscToPointer((dm) ),
	(PetscSection)PetscToPointer((section) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmsetlocalsection_(DM dm,PetscSection section, int *__ierr){
*__ierr = DMSetLocalSection(
	(DM)PetscToPointer((dm) ),
	(PetscSection)PetscToPointer((section) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetdefaultconstraints_(DM dm,PetscSection *section,Mat *mat, int *__ierr){
*__ierr = DMGetDefaultConstraints(
	(DM)PetscToPointer((dm) ),section,mat);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetdefaultconstraints_(DM dm,PetscSection section,Mat mat, int *__ierr){
*__ierr = DMSetDefaultConstraints(
	(DM)PetscToPointer((dm) ),
	(PetscSection)PetscToPointer((section) ),
	(Mat)PetscToPointer((mat) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetglobalsection_(DM dm,PetscSection *section, int *__ierr){
*__ierr = DMGetGlobalSection(
	(DM)PetscToPointer((dm) ),section);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetglobalsection_(DM dm,PetscSection section, int *__ierr){
*__ierr = DMSetGlobalSection(
	(DM)PetscToPointer((dm) ),
	(PetscSection)PetscToPointer((section) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetsectionsf_(DM dm,PetscSF *sf, int *__ierr){
*__ierr = DMGetSectionSF(
	(DM)PetscToPointer((dm) ),sf);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetsectionsf_(DM dm,PetscSF sf, int *__ierr){
*__ierr = DMSetSectionSF(
	(DM)PetscToPointer((dm) ),
	(PetscSF)PetscToPointer((sf) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetpointsf_(DM dm,PetscSF *sf, int *__ierr){
*__ierr = DMGetPointSF(
	(DM)PetscToPointer((dm) ),sf);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetpointsf_(DM dm,PetscSF sf, int *__ierr){
*__ierr = DMSetPointSF(
	(DM)PetscToPointer((dm) ),
	(PetscSF)PetscToPointer((sf) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmclearfields_(DM dm, int *__ierr){
*__ierr = DMClearFields(
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetnumfields_(DM dm,PetscInt *numFields, int *__ierr){
*__ierr = DMGetNumFields(
	(DM)PetscToPointer((dm) ),numFields);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetnumfields_(DM dm,PetscInt *numFields, int *__ierr){
*__ierr = DMSetNumFields(
	(DM)PetscToPointer((dm) ),*numFields);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetfield_(DM dm,PetscInt *f,DMLabel *label,PetscObject *field, int *__ierr){
*__ierr = DMGetField(
	(DM)PetscToPointer((dm) ),*f,label,field);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetfield_(DM dm,PetscInt *f,DMLabel label,PetscObject field, int *__ierr){
*__ierr = DMSetField(
	(DM)PetscToPointer((dm) ),*f,
	(DMLabel)PetscToPointer((label) ),
	(PetscObject)PetscToPointer((field) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmaddfield_(DM dm,DMLabel label,PetscObject field, int *__ierr){
*__ierr = DMAddField(
	(DM)PetscToPointer((dm) ),
	(DMLabel)PetscToPointer((label) ),
	(PetscObject)PetscToPointer((field) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmcopyfields_(DM dm,DM newdm, int *__ierr){
*__ierr = DMCopyFields(
	(DM)PetscToPointer((dm) ),
	(DM)PetscToPointer((newdm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetadjacency_(DM dm,PetscInt *f,PetscBool *useCone,PetscBool *useClosure, int *__ierr){
*__ierr = DMGetAdjacency(
	(DM)PetscToPointer((dm) ),*f,useCone,useClosure);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetadjacency_(DM dm,PetscInt *f,PetscBool *useCone,PetscBool *useClosure, int *__ierr){
*__ierr = DMSetAdjacency(
	(DM)PetscToPointer((dm) ),*f,*useCone,*useClosure);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetbasicadjacency_(DM dm,PetscBool *useCone,PetscBool *useClosure, int *__ierr){
*__ierr = DMGetBasicAdjacency(
	(DM)PetscToPointer((dm) ),useCone,useClosure);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetbasicadjacency_(DM dm,PetscBool *useCone,PetscBool *useClosure, int *__ierr){
*__ierr = DMSetBasicAdjacency(
	(DM)PetscToPointer((dm) ),*useCone,*useClosure);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetnumds_(DM dm,PetscInt *Nds, int *__ierr){
*__ierr = DMGetNumDS(
	(DM)PetscToPointer((dm) ),Nds);
}
PETSC_EXTERN void PETSC_STDCALL  dmcleards_(DM dm, int *__ierr){
*__ierr = DMClearDS(
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetds_(DM dm,PetscDS *prob, int *__ierr){
*__ierr = DMGetDS(
	(DM)PetscToPointer((dm) ),prob);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcellds_(DM dm,PetscInt *point,PetscDS *prob, int *__ierr){
*__ierr = DMGetCellDS(
	(DM)PetscToPointer((dm) ),*point,prob);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetregionds_(DM dm,DMLabel label,IS *fields,PetscDS *ds, int *__ierr){
*__ierr = DMGetRegionDS(
	(DM)PetscToPointer((dm) ),
	(DMLabel)PetscToPointer((label) ),fields,ds);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetregionnumds_(DM dm,PetscInt *num,DMLabel *label,IS *fields,PetscDS *ds, int *__ierr){
*__ierr = DMGetRegionNumDS(
	(DM)PetscToPointer((dm) ),*num,label,fields,ds);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetregionds_(DM dm,DMLabel label,IS fields,PetscDS ds, int *__ierr){
*__ierr = DMSetRegionDS(
	(DM)PetscToPointer((dm) ),
	(DMLabel)PetscToPointer((label) ),
	(IS)PetscToPointer((fields) ),
	(PetscDS)PetscToPointer((ds) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmcreateds_(DM dm, int *__ierr){
*__ierr = DMCreateDS(
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmcopyds_(DM dm,DM newdm, int *__ierr){
*__ierr = DMCopyDS(
	(DM)PetscToPointer((dm) ),
	(DM)PetscToPointer((newdm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmcopydisc_(DM dm,DM newdm, int *__ierr){
*__ierr = DMCopyDisc(
	(DM)PetscToPointer((dm) ),
	(DM)PetscToPointer((newdm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetdimension_(DM dm,PetscInt *dim, int *__ierr){
*__ierr = DMGetDimension(
	(DM)PetscToPointer((dm) ),dim);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetdimension_(DM dm,PetscInt *dim, int *__ierr){
*__ierr = DMSetDimension(
	(DM)PetscToPointer((dm) ),*dim);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetdimpoints_(DM dm,PetscInt *dim,PetscInt *pStart,PetscInt *pEnd, int *__ierr){
*__ierr = DMGetDimPoints(
	(DM)PetscToPointer((dm) ),*dim,pStart,pEnd);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetcoordinates_(DM dm,Vec c, int *__ierr){
*__ierr = DMSetCoordinates(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((c) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmsetcoordinateslocal_(DM dm,Vec c, int *__ierr){
*__ierr = DMSetCoordinatesLocal(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((c) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinates_(DM dm,Vec *c, int *__ierr){
*__ierr = DMGetCoordinates(
	(DM)PetscToPointer((dm) ),c);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinateslocalsetup_(DM dm, int *__ierr){
*__ierr = DMGetCoordinatesLocalSetUp(
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinateslocal_(DM dm,Vec *c, int *__ierr){
*__ierr = DMGetCoordinatesLocal(
	(DM)PetscToPointer((dm) ),c);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinateslocalnoncollective_(DM dm,Vec *c, int *__ierr){
*__ierr = DMGetCoordinatesLocalNoncollective(
	(DM)PetscToPointer((dm) ),c);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinateslocaltuple_(DM dm,IS p,PetscSection *pCoordSection,Vec *pCoord, int *__ierr){
*__ierr = DMGetCoordinatesLocalTuple(
	(DM)PetscToPointer((dm) ),
	(IS)PetscToPointer((p) ),pCoordSection,pCoord);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinatedm_(DM dm,DM *cdm, int *__ierr){
*__ierr = DMGetCoordinateDM(
	(DM)PetscToPointer((dm) ),cdm);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetcoordinatedm_(DM dm,DM cdm, int *__ierr){
*__ierr = DMSetCoordinateDM(
	(DM)PetscToPointer((dm) ),
	(DM)PetscToPointer((cdm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinatedim_(DM dm,PetscInt *dim, int *__ierr){
*__ierr = DMGetCoordinateDim(
	(DM)PetscToPointer((dm) ),dim);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetcoordinatedim_(DM dm,PetscInt *dim, int *__ierr){
*__ierr = DMSetCoordinateDim(
	(DM)PetscToPointer((dm) ),*dim);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinatesection_(DM dm,PetscSection *section, int *__ierr){
*__ierr = DMGetCoordinateSection(
	(DM)PetscToPointer((dm) ),section);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetcoordinatesection_(DM dm,PetscInt *dim,PetscSection section, int *__ierr){
*__ierr = DMSetCoordinateSection(
	(DM)PetscToPointer((dm) ),*dim,
	(PetscSection)PetscToPointer((section) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmlocalizecoordinate_(DM dm, PetscScalar in[],PetscBool *endpoint,PetscScalar out[], int *__ierr){
*__ierr = DMLocalizeCoordinate(
	(DM)PetscToPointer((dm) ),in,*endpoint,out);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinateslocalizedlocal_(DM dm,PetscBool *areLocalized, int *__ierr){
*__ierr = DMGetCoordinatesLocalizedLocal(
	(DM)PetscToPointer((dm) ),areLocalized);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoordinateslocalized_(DM dm,PetscBool *areLocalized, int *__ierr){
*__ierr = DMGetCoordinatesLocalized(
	(DM)PetscToPointer((dm) ),areLocalized);
}
PETSC_EXTERN void PETSC_STDCALL  dmlocalizecoordinates_(DM dm, int *__ierr){
*__ierr = DMLocalizeCoordinates(
	(DM)PetscToPointer((dm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmlocatepoints_(DM dm,Vec v,DMPointLocationType *ltype,PetscSF *cellSF, int *__ierr){
*__ierr = DMLocatePoints(
	(DM)PetscToPointer((dm) ),
	(Vec)PetscToPointer((v) ),*ltype,cellSF);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetoutputdm_(DM dm,DM *odm, int *__ierr){
*__ierr = DMGetOutputDM(
	(DM)PetscToPointer((dm) ),odm);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetoutputsequencenumber_(DM dm,PetscInt *num,PetscReal *val, int *__ierr){
*__ierr = DMGetOutputSequenceNumber(
	(DM)PetscToPointer((dm) ),num,val);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetoutputsequencenumber_(DM dm,PetscInt *num,PetscReal *val, int *__ierr){
*__ierr = DMSetOutputSequenceNumber(
	(DM)PetscToPointer((dm) ),*num,*val);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetusenatural_(DM dm,PetscBool *useNatural, int *__ierr){
*__ierr = DMGetUseNatural(
	(DM)PetscToPointer((dm) ),useNatural);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetusenatural_(DM dm,PetscBool *useNatural, int *__ierr){
*__ierr = DMSetUseNatural(
	(DM)PetscToPointer((dm) ),*useNatural);
}
PETSC_EXTERN void PETSC_STDCALL  dmgetnumlabels_(DM dm,PetscInt *numLabels, int *__ierr){
*__ierr = DMGetNumLabels(
	(DM)PetscToPointer((dm) ),numLabels);
}
PETSC_EXTERN void PETSC_STDCALL  dmremovelabelbyself_(DM dm,DMLabel *label,PetscBool *failNotFound, int *__ierr){
*__ierr = DMRemoveLabelBySelf(
	(DM)PetscToPointer((dm) ),label,*failNotFound);
}
PETSC_EXTERN void PETSC_STDCALL  dmcopylabels_(DM dmA,DM dmB, int *__ierr){
*__ierr = DMCopyLabels(
	(DM)PetscToPointer((dmA) ),
	(DM)PetscToPointer((dmB) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetcoarsedm_(DM dm,DM *cdm, int *__ierr){
*__ierr = DMGetCoarseDM(
	(DM)PetscToPointer((dm) ),cdm);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetcoarsedm_(DM dm,DM cdm, int *__ierr){
*__ierr = DMSetCoarseDM(
	(DM)PetscToPointer((dm) ),
	(DM)PetscToPointer((cdm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetfinedm_(DM dm,DM *fdm, int *__ierr){
*__ierr = DMGetFineDM(
	(DM)PetscToPointer((dm) ),fdm);
}
PETSC_EXTERN void PETSC_STDCALL  dmsetfinedm_(DM dm,DM fdm, int *__ierr){
*__ierr = DMSetFineDM(
	(DM)PetscToPointer((dm) ),
	(DM)PetscToPointer((fdm) ));
}
PETSC_EXTERN void PETSC_STDCALL  dmgetnumboundary_(DM dm,PetscInt *numBd, int *__ierr){
*__ierr = DMGetNumBoundary(
	(DM)PetscToPointer((dm) ),numBd);
}
PETSC_EXTERN void PETSC_STDCALL  matfdcoloringusedm_(Mat coloring,MatFDColoring fdcoloring, int *__ierr){
*__ierr = MatFDColoringUseDM(
	(Mat)PetscToPointer((coloring) ),
	(MatFDColoring)PetscToPointer((fdcoloring) ));
}

PETSC_EXTERN void PETSC_STDCALL  dmgetcompatibility_(DM dm,DM dm2,PetscBool *compatible,PetscBool *set, int *__ierr){
*__ierr = DMGetCompatibility(
	(DM)PetscToPointer((dm) ),
	(DM)PetscToPointer((dm2) ),compatible,set);
}
#if defined(__cplusplus)
}
#endif
