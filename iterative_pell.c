#include "header.h"
/*
Calculates and returns the nth pell number iteratively
*/
int pellcalc(int n){
  //Return 0 and 1 for pell numbers 0 and 1
  if (n==0||n==1) {
    return n;
  }
  //Counter starts at 2
  int counter=2;
  //First two pell numbers set to 0 and 1
  int nMinus2=0;
  int nMinus1=1;
  //nth pell number set to 0
  int nPell=0;
  //While the counter is less than or equal to n, calculate the nth pell number
  //and update the values for the n-2 and n-1 number, and incremement the counter
  while (counter<=n) {
    nPell=2*nMinus1+nMinus2;
    nMinus2=nMinus1;
    nMinus1=nPell;
    counter+=1;
  }
  return nPell;
}
