/**
 * \file
 *
 * \brief       Version Check for Coding Adapter
 *
 * \project     BMW Platform Software
 *
 * \copyright   BMW AG 2016 - 2017
 *
 * \version     5.2.1
 *
 */

/*------------------------------------------------------------------------------
*
*  THIS FILE WAS GENERATED. DO NOT MODIFY!
*
*  GENERATOR       : BMW PAGe 1.1.0
*
*  GENERATION TIME : 2018-07-30 19:57:39.412029
*
------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
                      MISRA-Deviations
------------------------------------------------------------------------------*/
/*
 * Violation of MISRA-C:2004 Rule 19.7:
 * Reason: this macro is only used in preprocessor directive,
 * no function possible. See PRQA 3453
 */


#ifndef CODINGCLASSIC_VERSION_H
#define CODINGCLASSIC_VERSION_H

/*------------------------------------------------------------------------------
                      Include Section
-------------------------------------------------------------------------------*/

#include "Coding_Version.h"          /* Include Coding version */


/*------------------------------------------------------------------------------
                      Macros
------------------------------------------------------------------------------*/

/**
 * \brief Coding Adapter header major version
 */
#define CodingClassic_MAJOR_VERSION        (5u)

/**
 * \brief Coding Adapter header minor version
 */
#define CodingClassic_MINOR_VERSION        (2u)

/**
 * \brief Coding Adapter header patch version
 */
#define CodingClassic_PATCH_VERSION        (1u)

/* Version check macro for adapter part */
/* PRQA S 3453 2 */
#define CodingClassic_CHECK_VERSION(major,minor,patch) \
 (((major) == CodingClassic_MAJOR_VERSION) && ((minor) == CodingClassic_MINOR_VERSION) && ((patch) == CodingClassic_PATCH_VERSION))

/* Version check macro for generic part */
#define CodingGeneric_CHECK_VERSION(major,minor) \
 (((major) == Coding_MAJOR_VERSION) && ((minor) == Coding_MINOR_VERSION))

/* check version of the generic part */
#if (!CodingGeneric_CHECK_VERSION(5,2))
   #error "Version of Classic adapter is incompatible to the generic module version!"
#endif

#endif /* CODINGCLASSIC_VERSION_H */
