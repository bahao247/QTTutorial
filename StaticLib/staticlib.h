#ifndef STATICLIB_H
#define STATICLIB_H

#include "staticlib_global.h"

class STATICLIBSHARED_EXPORT StaticLib
{

public:
    StaticLib(int a, int b);
    int Add();
    int Sub();


private:
    int a, b;
};

#endif // STATICLIB_H
