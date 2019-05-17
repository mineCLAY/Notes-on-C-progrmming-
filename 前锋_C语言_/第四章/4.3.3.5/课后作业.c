//01. 下面代码段中 , 执行之后 i 和 j 的值是什么
      int i = 1;
      int j;
      j = i++
答:

  i = 2;
  j = 1;
  
//02. 下列程序片段输出的是什么
      int b = 1;
      int a; 
      if (a = b) //把 b 赋值给 a
        printf("%d\n" , ++a);
答:

   2
   
//03. printf("%d\n" , ++a = 10); //输入的是什么 ?

答:
#include <stdio.h> 
 
int main(void){ 
    int a; 
    printf("%d\n" , ++a == 10); 
    return 0; 
} 

结果:
  0

//04. i = i + 1; i += 1 ; i++; ++i

答:

自我以为是 i = i + 1 或者 ++i 因为这两个清晰易懂
