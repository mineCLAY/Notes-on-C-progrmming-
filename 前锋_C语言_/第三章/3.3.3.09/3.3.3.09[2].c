//float数据的不精确

#include <stdio.h>

int main(void){
  float a = 9.87654321;
  float b = 9.87654322;
  if (a > b){
    printf("a > b\n");
  } else if(a == b) {
    printf("a == b\n");
  } else {
    printf("a < b\n");
  }
  return 0;
}
