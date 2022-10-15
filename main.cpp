#include "mbed.h"
#define TEST_BENCH

#ifdef INFANTRY
    #include "../TR-mbed6/Infantry/mainThreadless.cpp"
#endif
#ifdef HERO
    #include "../TR-mbed6/Hero/mainThreadless.cpp"
#endif
#ifdef SENTRY
    #include "../TR-mbed6/Sentry/sentryStrafeThreadless.cpp"
#endif
#ifdef ENGINEER
    #include "../TR-mbed6/Engineer/mainThreadless.cpp"
#endif
#ifdef TEST_BENCH
    #include "../TR-mbed6/Test Bench/main.cpp"
#endif