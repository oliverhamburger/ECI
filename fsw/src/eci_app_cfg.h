/*
 * File:  eci_app_cfg.h
 * Description:  Contains all of the configurable options (defined as macros) which 
 * change how the ECI interacts with the cFS and external code.  
 */
 
#ifndef ECI_APP_CFG_H
#define ECI_APP_CFG_H

#include "cfe.h"

/**
 * Table File Path Settings
 * ========================
 */
/** Path to FSW parameter tables */
#define PARAM_TBL_PATH_PREFIX "/cf/tables/"
/** Path to FSW state tables */
#define STATE_TBL_PATH_PREFIX "/cf/tables/"

/**
 * App start-up configuration settings
 * ===================================
 */
/** Time Out (Secs) for syncing ECI apps with cFS */
#define ECI_STARTUP_SYNC_TIMEOUT       65535

/**
 * Command configuration settings
 * ==============================
 */

/** Length of a no data parameter command message */
#define ECI_NO_DATA_CMD_MSG_LENGTH     CFE_SB_CMD_HDR_SIZE
/** Start of valid function code values */
#define ECI_FUNC_CODE_START            100
/** End of valid function code values */
#define ECI_FUNC_CODE_END              110
/** Command Message Max Queue Size */
#define ECI_CMD_MSG_QUEUE_SIZE         25
/** Maximum sequence number (14 bits) */
#define ECI_MAX_CMD_SEQUENCE_NUMBER    16383

#endif  /* ECI_APP_CFG_H */

