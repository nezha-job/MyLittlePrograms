#include <iostream>
#include <cmath>
using namespace std;

int uzunlik(int y){
    int k = 0;
    while (y > 0){
        k += y % 10;
        y /= 10;
    }
    return k;
}