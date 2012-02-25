/* Test the `vsubhnu32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vsubhnu32 (void)
{
  uint16x4_t out_uint16x4_t;
  uint32x4_t arg0_uint32x4_t;
  uint32x4_t arg1_uint32x4_t;

  out_uint16x4_t = vsubhn_u32 (arg0_uint32x4_t, arg1_uint32x4_t);
}

/* { dg-final { scan-assembler "vsubhn\.i32\[ 	\]+\[dD\]\[0-9\]+, \[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
