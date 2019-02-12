#include "header.h"
/*
Calculate the first n pell numbers recursively
*/
int pellcalc(int n){
  //Return n for base cases of 0 and 1
  if (n==0||n==1) {
    return n;
  }
  //Otherwise take the recursive step and return the nth pell
  //number calculated from the n-1 and n-2 pell numbers
  else{
    return 2*pellcalc(n-1)+pellcalc(n-2);
  }
}
