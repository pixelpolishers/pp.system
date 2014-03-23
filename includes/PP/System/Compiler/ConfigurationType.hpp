/**
 * This file is part of Pixel Polishers System library.
 *
 * @copyright Copyright (c) 2011-2014 Pixel Polishsers (http://pixelpolishers.com)
 */

#pragma once

#ifndef PP_SYSTEM_TMP
#error Please include PP/System/System.hpp instead.
#endif

#if defined(DEBUG) || defined(_DEBUG)
    /**
     * A define that indicates whether or not this is a debug project.
     *
     * @def PP_SYSTEM_DEBUG
     */
    #define PP_SYSTEM_DEBUG 1
#else
    /**
     * A define that indicates whether or not this is a debug project.
     *
     * @def PP_SYSTEM_DEBUG
     */
    #define PP_SYSTEM_DEBUG 0
#endif
