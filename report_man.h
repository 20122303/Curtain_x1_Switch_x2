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
 * Last Changed By:  Author: TrungTQ
 * Revision:         Revision: 2.3
 * Last Changed:     
 *                   Date: 2016-06-21 15:45:00 (Tue, 21 Jun 2016)
 *
 ******************************************************************************/
#ifndef _REPORT_MAN_H_
#define _REPORT_MAN_H_

/******************************************************************************/
/*                              INCLUDE FILES                                 */
/******************************************************************************/
#include <ZW_typedefs.h>

/******************************************************************************/
/*                     EXPORTED TYPES and DEFINITIONS                         */
/******************************************************************************/

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

/**
 * @func   StartGetStateEP      
 * @brief  None
 * @param  None
 * @retval None
 */
void
StartGetStateEP();

/**
 * @func   InitReportManager   
 * @brief  None
 * @param  None
 * @retval None
 */
void
InitReportManager(
    VOID_CALLBACKFUNC(callback_func)(BYTE, BYTE)
);

/**
 * @func   ReportState   
 * @brief  None
 * @param  None
 * @retval None
 */
BOOL
ReportState();


#endif /* _REPORT_MAN_H_ */