#include "staticlib.h"


StaticLib::StaticLib(int a, int b)
{
    this->a = a;
    this->b = b;
}

int StaticLib::Add()
{
    return a + b;
}

int StaticLib::Sub()
{
    return a - b;
}
