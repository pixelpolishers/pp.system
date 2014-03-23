/**
 * This file is part of Pixel Polishers System library.
 *
 * @copyright Copyright (c) 2011-2014 Pixel Polishsers (http://pixelpolishers.com)
 */

#pragma once

#ifndef PP_SYSTEM_TMP
#error Please include PP/System/System.hpp instead.
#endif

#include <cassert>

/**
 * An assertion which breaks the debugger when it fails.
 *
 * @def PP_SYSTEM_ASSERT
 */
#define PP_SYSTEM_ASSERT(cond) assert(cond)

/**
 * An assertion which breaks the debugger when it fails. This assert will show the given message.
 *
 * @def PP_SYSTEM_ASSERT_MSG
 */
#define PP_SYSTEM_ASSERT_MSG(cond, msg) assert(cond) // TODO: Handle the message!
