#include "header.h"
/*
Calculates the first n pell numbers iteratively for user defined first and second pell numbers
*/
int pellcalc(int n){
  //Declare the first two pell numbers
  extern int first;
  extern int second;
  //Return the first and second pell numbers for n=0 and 1
  if(n==0){
    return first;
  }
  if (n==1) {
    return second;
  }
  //Counter starts at 2
  int counter=2;
  //First two pell numbers set to the first and second numbers
  int nMinus2=first;
  int nMinus1=second;
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
