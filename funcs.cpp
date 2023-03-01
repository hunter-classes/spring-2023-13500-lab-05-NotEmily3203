#include <iostream>
#include "funcs.h"

// add functions here
bool isDivisibleBy(int n, int d){
    bool divisible = false;
    if(n%d == 0){
        divisible = true;
    }
    return divisible;
}
