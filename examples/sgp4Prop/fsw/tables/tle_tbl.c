/*
 * File: paramTable1.c
 *
 * Code generated for Simulink model 'unitTestModel'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Sep 27 22:02:27 2018
 *
 * Target selection: cfs_ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "sgp4Wrapper.h"
#include "eci_tbl_if.h"

tle_lines_t tle_lines_tbl = {
  "",
  "",
} ;

/*
 ** The macro below identifies:
 **    1) the data structure type to use as the table image format
 **    2) the name of the table to be placed into the CFS Table File Header
 **    3) a brief description of the contents of the file image
 **    4) the desired name of the table image binary file that is CFS compatible
 */
ECI_TBL_FILEDEF(CFE_TBL_FileDef, tle_lines_tbl, "op.OP_TLE_Tbl",
                "OP app TLE table", "op_tle.tbl" )
/*
 * File trailer for generated code.
 *
 * [EOF]
 */