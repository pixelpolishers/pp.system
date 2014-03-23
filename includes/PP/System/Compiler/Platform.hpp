/**
 * This file is part of Pixel Polishers System library.
 *
 * @copyright Copyright (c) 2011-2014 Pixel Polishsers (http://pixelpolishers.com)
 */

#pragma once

#ifndef PP_SYSTEM_TMP
#error Please include PP/System/System.hpp instead.
#endif

#if defined(WIN32) || defined(_WIN32)
    /**
     * A define to indicate whether or not this is a Windows 32-bit build.
     *
     * @def PP_SYSTEM_WIN32
     */
    #define PP_SYSTEM_WIN32 1
#else
    /**
     * A define to indicate whether or not this is a Windows 32-bit build.
     *
     * @def PP_SYSTEM_WIN32
     */
    #define PP_SYSTEM_WIN32 0
#endif

#if defined(WIN64) || defined(_WIN64)
    /**
     * A define to indicate whether or not this is a Windows 64-bit build.
     *
     * @def PP_SYSTEM_WIN64
     */
    #define PP_SYSTEM_WIN64 1
#else
    /**
     * A define to indicate whether or not this is a Windows 64-bit build.
     *
     * @def PP_SYSTEM_WIN64
     */
    #define PP_SYSTEM_WIN64 0
#endif

#if defined(PP_SYSTEM_WIN32) || defined(PP_SYSTEM_WIN64)
    /**
     * A define to indicate whether or not this is a Windows build.
     *
     * @def PP_SYSTEM_WINDOWS
     */
    #define PP_SYSTEM_WINDOWS 1
#else
    /**
     * A define to indicate whether or not this is a Windows build.
     *
     * @def PP_SYSTEM_WINDOWS
     */
    #define PP_SYSTEM_WINDOWS 0
#endif

#if PP_SYSTEM_WINDOWS == 1
    #if PP_SYSTEM_WIN64 == 1
        /**
         * A define to indicate whether or not this is a 64-bit build.
         *
         * @def PP_SYSTEM_64BIT
         */
        #define PP_SYSTEM_64BIT 1
    #else
        /**
         * A define to indicate whether or not this is a 64-bit build.
         *
         * @def PP_SYSTEM_64BIT
         */
        #define PP_SYSTEM_64BIT 0
    #endif
#else
    /**
     * A define to indicate whether or not this is a 64-bit build.
     *
     * @def PP_SYSTEM_64BIT
     */
    #define PP_SYSTEM_64BIT 0
#endif
