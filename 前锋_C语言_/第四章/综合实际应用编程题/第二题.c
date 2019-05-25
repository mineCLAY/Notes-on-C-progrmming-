/*
 * 02. Setting a bit
 * 给一个整型变量 a , 写两个函数 , 第一个设置 a 的 bit3 , 第二个清除 a 的 bit3. 在以上两个操作中 , 要保持其它位不变
 */
 
#inlcude <stdio.h>
#define BIT3 (0x1 << 1)

int SET_BIT3(int){
  return i |= BIT3;
}
int CLEAR_BIT3(int i){
  return i &= ~BIT3;
}
int main(void){
  int i = 2;
  i = SET_BIT3(i);
  printf("After SET_BIT3 , i = %d\n" , i);
  i = CLEAR_BIT3(i);
  printf("After SET_BIT3 , i = %d\n" , i);
  return 0;
}
