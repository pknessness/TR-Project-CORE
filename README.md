# TR-Project-CORE

TR-Project-CORE is how we run our code when we're on linux

The main in project core is basically a program selector for the different robots, where the actual code (that is pointed to) is stored in TR-mbed6

This is the main:

```cpp
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
    #include "../TR-mbed6/Test_Bench/main.cpp"
#endif
```

The define at the top determines which main gets pulled and used.
Adding new mains is fairly simple, all it needs is a main in the TR-mbed6 folder and a entry here.

## Environment Installation Instructions

First, you need to clone both the TR-mbed6 repo and the TR-Project-CORE into your projects folder. 
`git clone https://github.com/Triton-Robotics/TR-mbed6`

`git clone https://github.com/pknessness/TR-Project-CORE`

Both need to be done from the same location, they need to be in the same directory.

Once this has been done, you need to go into the TR-Project-CORE folder and run `mbed-tools new .`
This will override the main, so you just have to copy and paste from the above excerpt and put it back into the main.cpp



Then, you should be done and able to run code.
