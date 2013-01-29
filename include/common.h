/*
 * Copyright (C) 2012 Swift Navigation Inc.
 * Contact: Henry Hallam <henry@swift-nav.com>
 *          Fergus Noble <fergus@swift-nav.com>
 *
 * This source is subject to the license found in the file 'LICENSE' which must
 * be be distributed together with this source. All other rights reserved.
 *
 * THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
 * EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef LIBSWIFTNAV_COMMON_H
#define LIBSWIFTNAV_COMMON_H

/** \defgroup common Common definitions
 * Common definitions used throughout the library.
 * \{ */

#ifndef LIBOPENCM3_CM3_COMMON_H
  #include <stdint.h>
  #include <stdbool.h>

  /** \defgroup common_inttypes Integer types
   * Specified-width integer type definitions for shorter and nicer code.
   *
   * These should be used in preference to unspecified width types such as
   * `int` which can lead to portability issues between different platforms.
   * \{ */

  /** Signed 8-bit integer. */
  typedef int8_t s8;
  /** Signed 16-bit integer. */
  typedef int16_t s16;
  /** Signed 32-bit integer. */
  typedef int32_t s32;
  /** Unsigned 8-bit integer. */
  typedef uint8_t u8;
  /** Unsigned 16-bit integer. */
  typedef uint16_t u16;
  /** Unsigned 32-bit integer. */
  typedef uint32_t u32;
  /** Unsigned 64-bit integer. */
  typedef uint64_t u64;

  /** \} */
#endif

/** \} */

#endif /* LIBSWIFTNAV_COMMON_H */

