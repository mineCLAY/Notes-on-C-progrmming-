//for 循环的嵌套

int main(void){
  int i = 0 , j = 0 , k = 0;
  printf("i j k\n");
  for (; i < 2 ; j++){ //最后执行这步循环
    for (; j < 2 ; j++){ //再执行这步循环
      for (; k < 2 ; k++){ //按照 自里向外 先执行这步循
        printf("i = %d\nj = %d\nk = %d\n" , i , j , k);
      }
    }
  }
  return 0;
}
