#include "randfuncs.h"
#include <cstdlib>
#include <ctime>

int flipCoin() { return rand() % 2; }
int rollD6()   { return (rand() % 6) + 1; }
int rollD20()  { return (rand() % 20) + 1; }
