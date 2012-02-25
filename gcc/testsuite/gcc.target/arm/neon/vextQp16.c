/* Test the `vextQp16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vextQp16 (void)
{
  poly16x8_t out_poly16x8_t;
  poly16x8_t arg0_poly16x8_t;
  poly16x8_t arg1_poly16x8_t;

  out_poly16x8_t = vextq_p16 (arg0_poly16x8_t, arg1_poly16x8_t, 0);
}

/* { dg-final { scan-assembler "vext\.16\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
