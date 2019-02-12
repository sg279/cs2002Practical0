
#include "header.h"
#include <stdio.h>
/*

*/
int main(){
  //Declare length and counter variables
  int length=0;
  int counter=0;
  //Read and validate user input for length
  printf("Length? ");
  int valid = scanf("%d", &length);
  if (valid!=1) {
    printf("Invalid input");
  }
  //If the input is valid call the pellcalc function for the length the user specified
  else{
    printf("[");
    if (length!=0) {
      printf("%d", pellcalc(counter) );
      counter += 1;
      while (counter<length) {
        printf(", %d", pellcalc(counter) );
        counter += 1;
      }
    }
    printf("]\n");
  }
  return 0;
}
