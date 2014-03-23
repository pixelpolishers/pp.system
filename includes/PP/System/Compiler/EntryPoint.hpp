/**
 * This file is part of Pixel Polishers System library.
 *
 * @copyright Copyright (c) 2011-2014 Pixel Polishsers (http://pixelpolishers.com)
 */

#pragma once

#ifndef PP_SYSTEM_TMP
#error Please include PP/System/System.hpp instead.
#endif

#ifdef PP_SYSTEM_WINDOWS
    /**
     * A wrapper to define the entry point for console applications.
     *
     * @def PP_SYSTEM_CONSOLE_APPLICATION_ENTRY
     */
    #define PP_SYSTEM_CONSOLE_APPLICATION_ENTRY \
        int _tmain(int argc, _TCHAR* argv[])

    /**
     * A wrapper to define the entry point for applications.
     *
     * @def PP_SYSTEM_APPLICATION_ENTRY
     */
    #define PP_SYSTEM_APPLICATION_ENTRY \
        int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
#else
    /**
     * A wrapper to define the entry point for console applications.
     *
     * @def PP_SYSTEM_CONSOLE_APPLICATION_ENTRY
     */
    #define PP_SYSTEM_CONSOLE_APPLICATION_ENTRY \
        int _tmain(int argc, _TCHAR* argv[])

    /**
     * A wrapper to define the entry point for applications.
     *
     * @def PP_SYSTEM_APPLICATION_ENTRY
     */
    #define PP_SYSTEM_APPLICATION_ENTRY \
        int _tmain(int argc, _TCHAR* argv[])
#endif
