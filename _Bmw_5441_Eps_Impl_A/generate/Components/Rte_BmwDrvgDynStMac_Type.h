/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_BmwDrvgDynStMac_Type.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Application types header file for SW-C <BmwDrvgDynStMac>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_BMWDRVGDYNSTMAC_TYPE_H
# define _RTE_BMWDRVGDYNSTMAC_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * Range, Invalidation, Enumeration and Bit Field Definitions
 *********************************************************************************************************************/

#  ifndef BMWOVRLCMDQLFR_IMPLSP
#   define BMWOVRLCMDQLFR_IMPLSP (2U)
#  endif

#  ifndef BMWOVRLCMDQLFR_SPNOTAVL
#   define BMWOVRLCMDQLFR_SPNOTAVL (7U)
#  endif

#  ifndef BMWOVRLCMDQLFR_STBDONOTCNVSP
#   define BMWOVRLCMDQLFR_STBDONOTCNVSP (14U)
#  endif

#  ifndef BMWOVRLCMDQLFR_INVLDSIG
#   define BMWOVRLCMDQLFR_INVLDSIG (15U)
#  endif

#  ifndef BMWTRFCJAMASSIDAMPGSTREQ_DONOTCNVSPADDLDAMPG
#   define BMWTRFCJAMASSIDAMPGSTREQ_DONOTCNVSPADDLDAMPG (1U)
#  endif

#  ifndef BMWTRFCJAMASSIDAMPGSTREQ_CNVSPADDLDAMPG
#   define BMWTRFCJAMASSIDAMPGSTREQ_CNVSPADDLDAMPG (2U)
#  endif

#  ifndef BMWTRFCJAMASSIDAMPGSTREQ_INVLDSIG
#   define BMWTRFCJAMASSIDAMPGSTREQ_INVLDSIG (15U)
#  endif

#  ifndef BMWVEHCDN_PRKGNBNOK
#   define BMWVEHCDN_PRKGNBNOK (1U)
#  endif

#  ifndef BMWVEHCDN_PRKGBNOK
#   define BMWVEHCDN_PRKGBNOK (2U)
#  endif

#  ifndef BMWVEHCDN_FCTCUSTNOTINFZG
#   define BMWVEHCDN_FCTCUSTNOTINFZG (3U)
#  endif

#  ifndef BMWVEHCDN_LVNG
#   define BMWVEHCDN_LVNG (5U)
#  endif

#  ifndef BMWVEHCDN_CHKDIAGCANLS
#   define BMWVEHCDN_CHKDIAGCANLS (7U)
#  endif

#  ifndef BMWVEHCDN_DRVRPREPGFOROPER
#   define BMWVEHCDN_DRVRPREPGFOROPER (8U)
#  endif

#  ifndef BMWVEHCDN_DRVG
#   define BMWVEHCDN_DRVG (10U)
#  endif

#  ifndef BMWVEHCDN_DRVRPREPGFOREXITOPER
#   define BMWVEHCDN_DRVRPREPGFOREXITOPER (12U)
#  endif

#  ifndef BMWVEHCDN_INVLD
#   define BMWVEHCDN_INVLD (15U)
#  endif

#  ifndef DRVGDYNIFST_IFAVLRDYFOROPERWOADDLDAMPG
#   define DRVGDYNIFST_IFAVLRDYFOROPERWOADDLDAMPG (32U)
#  endif

#  ifndef DRVGDYNIFST_IFACTVADDLDAMPGNOTAVL
#   define DRVGDYNIFST_IFACTVADDLDAMPGNOTAVL (33U)
#  endif

#  ifndef DRVGDYNIFST_IFAVLRDYFOROPERADDLDAMPG
#   define DRVGDYNIFST_IFAVLRDYFOROPERADDLDAMPG (34U)
#  endif

#  ifndef DRVGDYNIFST_IFACTVADDLDAMPGAVL
#   define DRVGDYNIFST_IFACTVADDLDAMPGAVL (35U)
#  endif

#  ifndef DRVGDYNIFST_SRVNOTAVLERR
#   define DRVGDYNIFST_SRVNOTAVLERR (96U)
#  endif

#  ifndef DRVGDYNIFST_IFINID
#   define DRVGDYNIFST_IFINID (128U)
#  endif

#  ifndef DRVGDYNIFST_SRVNOTAVLSTBPMA
#   define DRVGDYNIFST_SRVNOTAVLSTBPMA (224U)
#  endif

#  ifndef DRVGDYNIFST_SRVNOTAVLSTBEPSSTS
#   define DRVGDYNIFST_SRVNOTAVLSTBEPSSTS (225U)
#  endif

#  ifndef DRVGDYNIFST_INVLDSIG
#   define DRVGDYNIFST_INVLDSIG (255U)
#  endif

#  ifndef STSSTEERASSI_OFF
#   define STSSTEERASSI_OFF (0U)
#  endif

#  ifndef STSSTEERASSI_ON
#   define STSSTEERASSI_ON (1U)
#  endif

# endif /* RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_BMWDRVGDYNSTMAC_TYPE_H */
