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

bool isPrime(int n){
    bool prime = true;
    for(int i=2;i<n-1;i++){
        if(n%i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}