#include <iostream>
#include <cmath>
using namespace std;

bool tub_sonmi(int x){
	if (x < 2) return false;
	int ildiz=sqrt(x)+1;
	for (int i=2; i<=ildiz;i++){
		if (x%i==0) return false;
	}
	return true;
}