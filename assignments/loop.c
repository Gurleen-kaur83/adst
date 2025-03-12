#include <stdio.h>

int main () {
  /*
    Write a C program to print numbers from 0 to 10 and 10 to 0
    using two while loops.
   */
  for (int i = 0; i<= 10; i= i+=2){
    printf("The value of i is %d\n",i);
  }

  return 0;
}