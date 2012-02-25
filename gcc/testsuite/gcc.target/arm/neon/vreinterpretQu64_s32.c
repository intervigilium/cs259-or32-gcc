/* Test the `vreinterpretQu64_s32' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterpretQu64_s32 (void)
{
  uint64x2_t out_uint64x2_t;
  int32x4_t arg0_int32x4_t;

  out_uint64x2_t = vreinterpretq_u64_s32 (arg0_int32x4_t);
}

/* { dg-final { cleanup-saved-temps } } */
