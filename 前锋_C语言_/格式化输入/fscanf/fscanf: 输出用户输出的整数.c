/*
 * 5.03 Example_fscanf.c
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  printf("input an integer:\n");
  int i;
  if (fscanf(stdin , "%d" , &i)) {
    printf("The integer read was: %d\n" , i);
  } else {
    fprintf(stderr , "Error reading an integer from stin");
    exit(EXIT_FAILURE);
  }

  return 0;
}
