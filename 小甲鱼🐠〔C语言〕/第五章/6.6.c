/*
(1) while
#include <stdio.h>
int main(void){
  int sum = 0 , i;
  printf("input a number:\n");
  scanf("%d" , &i);
  while (i <= 10){
    sum = sum + i;
    i++;
  }
  printf("sum = %d\n" , sum);
  return 0;
}
*/

/*
(2) do while
#include <stdio.h>
int main(void){
  int sum = 0 , i;
  printf("input a number:\n");
  scanf("%d" , &i);
  do{
    sum = sum + i;
    i++;
  } while (i <= 10);
  printf("sum = %d\n" , sum);
  return 0;
}
*/
