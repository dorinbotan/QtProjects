#include "log.h"
#include <iostream>
#include <stdarg.h>

using std::cerr;
using std::cout;
using std::endl;

#define LOG_BUFFER_SIZE (1024)

namespace logger
{
    void error( const char *fmt, ...)
    {
//        va_list args;
//        char * logBuffer = (char *)malloc( LOG_BUFFER_SIZE );
//        va_start( args, fmt );

//        if ( logBuffer != NULL )
//        {
//            vsnprintf( logBuffer, LOG_BUFFER_SIZE, fmt, args );
//            cerr << logBuffer;
//            free( logBuffer );
//        }
//        else
//        {
//            cerr << "malloc error in logger" << endl;
//        }
//        va_end( args );
    }

    void debug( const char *fmt, ...)
    {
//        va_list args;
//        char * logBuffer = (char *)malloc( LOG_BUFFER_SIZE );
//        va_start( args, fmt );

//        if ( logBuffer != NULL )
//        {
//            vsnprintf( logBuffer, LOG_BUFFER_SIZE, fmt, args );
//            cout << logBuffer;
//            free( logBuffer );
//        }
//        else
//        {
//            cerr << "malloc error in logger" << endl;
//        }
//        va_end( args );
    }
}




