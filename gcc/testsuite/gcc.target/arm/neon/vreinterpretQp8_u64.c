/* Test the `vreinterpretQp8_u64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterpretQp8_u64 (void)
{
  poly8x16_t out_poly8x16_t;
  uint64x2_t arg0_uint64x2_t;

  out_poly8x16_t = vreinterpretq_p8_u64 (arg0_uint64x2_t);
}

/* { dg-final { cleanup-saved-temps } } */
