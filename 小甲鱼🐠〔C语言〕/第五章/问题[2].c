//显示输入的字符 , 如果按的是 Esc 键 , 则退出循环; 如果没有按的是 Enter 键 , 则不做任何处理 , 集训输入下一个字符

#include <stdio.h> //输出输入需要

int main(void){
  char Esc = 1;
  printf("input a char:\n"); //让用户输入
  while (Esc){ //判断 Esc 是否为 1 如果是则开始循环
    scanf("%c" , &Esc);
    if (Esc == 13){ //Enter 键的 ACSLL 码为 27
      printf("%c" , Esc);
      continue; /*按的是 Enter: 键 , 跳过字符输出语句*/
    }
    if (Esc == 27){ //Esc 键的 ACSLL 码为 27
      break; /*退出循环*/
    } else {
      putchar(Esc); //显示输入字符
      continue; /*按的是其它键就重新输出*/
    }
  }
  getchar(); /*让程序停一下 , 拍任意键继续*/
  return 0;
}

/*小甲鱼解法

#inlcude <stdio.h>
#include <conio.h>

int main(void){
  char ch;
  for (; ;){
    ch = getch;
    if (ch == 27)
       break;
    if (ch == 13)
       continue;
    putch(ch);
  }
  return 0;
}
*/
