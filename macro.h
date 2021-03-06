/*******************************************************************************
 *
 * Copyright (c) 2016
 * Lumi, JSC.
 * All Rights Reserved
 *
 *
 * Description: Include file for application
 *
 * Author: TrungTQ
 *
 * Last Changed By:  $Author: trungtq $
 * Revision:         $Revision: 2.1 $
 * Last Changed:     $Date: 2016-06-21 17:25:00 (Tue, 21 Jun 2016) $
 *
 ******************************************************************************/
#ifndef _MACRO_H_
#define _MACRO_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/

/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/
#define st(x)               do { x } while(__LINE__ == -1)

#ifndef BV
#define BV(n)               (1 << (n))
#endif /* BV */

#ifndef ST
#define ST(x)               do { x } while (0)
#endif /* ST */

#ifndef MIN
#define MIN(n,m)            (((n) < (m)) ? (n) : (m))
#endif

#ifndef MAX
#define MAX(n,m)            (((n) < (m)) ? (m) : (n))
#endif

#ifndef ABS
#define ABS(n)              (((n) < 0) ? -(n) : (n))
#endif

#define HI_UINT16(a)        (((a) >> 8) & 0xFF)
#define LO_UINT16(a)        ((a) & 0xFF)

/******************************************************************************/
/*                              PRIVATE DATA                                  */
/******************************************************************************/

/******************************************************************************/
/*                              EXPORTED DATA                                 */
/******************************************************************************/

/******************************************************************************/
/*                            PRIVATE FUNCTIONS                               */
/******************************************************************************/

/******************************************************************************/
/*                            EXPORTED FUNCTIONS                              */
/******************************************************************************/

#endif /* _MACRO_H_ */
