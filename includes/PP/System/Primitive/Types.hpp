/**
 * This file is part of Pixel Polishers System library.
 *
 * @copyright Copyright (c) 2011-2014 Pixel Polishsers (http://pixelpolishers.com)
 */

#pragma once

#ifndef PP_SYSTEM_TMP
#error Please include PP/System/System.hpp instead.
#endif

namespace PP
{
    namespace System
    {
        /**
         * The representation of a byte.
         *
         * @typedef
         */
        typedef unsigned char byte;
        
        /**
         * The representation of a boolean.
         *
         * @typedef
         */
        typedef bool boolean;

        /**
         * The representation of a signed 8-bit integer.
         *
         * @typedef
         */
        typedef signed char int8;
        
        /**
         * The representation of a signed 16-bit integer.
         *
         * @typedef
         */
        typedef signed short int16;
        
        /**
         * The representation of a signed 32-bit integer.
         *
         * @typedef
         */
        typedef signed int int32;
        
        /**
         * The representation of a signed 64-bit integer.
         *
         * @typedef
         */
        typedef signed long int64;
        
        /**
         * The representation of an unsigned 8-bit integer.
         *
         * @typedef
         */
        typedef unsigned char uint8;
        
        /**
         * The representation of an unsigned 16-bit integer.
         *
         * @typedef
         */
        typedef unsigned short uint16;
        
        /**
         * The representation of an unsigned 32-bit integer.
         *
         * @typedef
         */
        typedef unsigned int uint32;
        
        /**
         * The representation of an unsigned 64-bit integer.
         *
         * @typedef
         */
        typedef unsigned long uint64;
        
        /**
         * The representation of a 32-bit floating point number.
         *
         * @typedef
         */
        typedef float float32;
        
        /**
         * The representation of a 64-bit floating point number.
         *
         * @typedef
         */
        typedef double float64;
        
        /**
         * The representation of an ANSI character.
         *
         * @typedef
         */
        typedef char chara;
        
        /**
         * The representation of a wide character.
         *
         * @typedef
         */
        typedef wchar_t charw;

#if PP_SYSTEM_UNICODE == 1
        typedef charw chart;
#else
        typedef chara chart;
#endif
    }
}
