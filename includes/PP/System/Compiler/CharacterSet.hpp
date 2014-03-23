/**
 * This file is part of Pixel Polishers System library.
 *
 * @copyright Copyright (c) 2011-2014 Pixel Polishsers (http://pixelpolishers.com)
 */

#pragma once

#ifndef PP_SYSTEM_TMP
#error Please include PP/System/System.hpp instead.
#endif

#if defined(UNICODE) || defined(_UNICODE)
    /**
     * A define that indicates whether or not the project is build with unicode.
     *
     * @def PP_SYSTEM_UNICODE
     */
    #define PP_SYSTEM_UNICODE 1
#else
    /**
     * A define that indicates whether or not the project is build with unicode.
     *
     * @def PP_SYSTEM_UNICODE
     */
    #define PP_SYSTEM_UNICODE 0
#endif
