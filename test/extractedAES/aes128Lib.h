/* Header file for aes128Lib. Automatically generated by SBV. Do not edit! */

#ifndef __aes128Lib__HEADER_INCLUDED__
#define __aes128Lib__HEADER_INCLUDED__

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/* The boolean type */
typedef bool SBool;

/* The float type */
typedef float SFloat;

/* The double type */
typedef double SDouble;

/* Unsigned bit-vectors */
typedef uint8_t  SWord8 ;
typedef uint16_t SWord16;
typedef uint32_t SWord32;
typedef uint64_t SWord64;

/* Signed bit-vectors */
typedef int8_t  SInt8 ;
typedef int16_t SInt16;
typedef int32_t SInt32;
typedef int64_t SInt64;

/* Entry point prototypes: */
void aes128KeySchedule(const SWord32 *key, SWord32 *encKS);
void aes128BlockEncrypt(const SWord32 *pt, const SWord32 *xkey,
                        SWord32 *ct);
void aes128BlockDecrypt(const SWord32 *ct, const SWord32 *xkey,
                        SWord32 *pt);

#endif /* __aes128Lib__HEADER_INCLUDED__ */
