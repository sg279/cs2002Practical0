
#include "header.h"
#include <stdio.h>
int main(){
  //Declare first and second variables defined by the user
  extern int first;
  extern int second;
  //Define length as 0
  int length=0;
  while(1) {
    //Define counter as 0
    int counter=0;
    //Read the user input for starting values as two comma seperated values
    printf("Starting values? ");
    int valid = scanf("%d,%d", &first, &second);
    //If two integers were not received print invalid input and exit
    if (valid!=2) {
      printf("Invalid input");
      return 0;
    }
    //If the two values are 0 exit the program
    if (first==0&&second==0) {
      return 0;
    }
    //Read the user input for the number of numbers to generate
    printf("Length? ");
    valid = scanf("%d", &length);
    //If a single integer is not received print invalid input and exit
    if (valid!=1) {
      printf("Invalid input");
      return 0;
    }
    //If the input is valid call the pellcalc function for the length the user specified
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
