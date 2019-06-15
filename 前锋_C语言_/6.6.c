/*
 * 5.01 Conversion_Specification.c
 *
 * % [*] [size] convcode
 */

#includ <stdio.h>

int main(void) {

  int x , y;
  double pi;
	
#if 0

  // 01. %
  // 		格式中的每个转换规范
  //		都以字符 '%'开始
  printf("input x:\n");
  scanf("%d" , &x);
  printf("x = %d\n" , x);


  // 02. *
  //		 一个可选的星号星号
  //		 将使转换后的值
  printf("输入三个整数以空格来分隔:\n");
  scanf("%d,%*d,%d" , &x , &y);
  printf("x = %d , y = %d\n" ,
  	  x , y);
  // 03. width
  //     a. 可选的宽度 
  //	    以一个非负的整数给出
  //   	    它限制将被读取用于转换的输入字符个数
  //	 b. 如果给出宽度
  //	    函数就连续读入字符个数
  //	    知道遇见输入中的下一个空白字符
  printf("输入一个不超过五位的整数:\n");
  scanf("%5d" , &x);
  printf("x = %d\n" , x);
  printf("再输入一个六位的整数 , 各分给两个变量:\n");
  scanf("%3d%3d" , &x , &y);
  printf("x = %d , y = %d\n" , x , y);

  // 04. size
  //	 a. 是一个可选的限定符 , 限定目的是为了指定参数的长度
  //	 b. h , short , unsigned short
  //   	    l , long , unsigned long , double
  //	    L , long double
  //	 c. int 和 short 相同的机器上
  //	    h 可忽略 不同的 h 必须
  //     d. 如果所有类型的变量都使用适当的限定符
  //	    程序将具有更好的可移植姓
  printf("input pi:\n");
  scanf("%lf" , &pi);
  printf("pi = %lf\n" , pi);

#endif

  // 05. convcode
  //	 格式转换代码
  // 	 是一个单字符
  //	 用于指定输入字符是如何被解释

  // 5.01 %c
  // 	  读取和存储单个字符
  char ch;
  printf("input character:\n");
  scanf("%c" , &ch);
  printf("c = %c\n" , ch);

  // 5.02 %i , %d
  //	  d 把输入解释为十进制数
  //	  i 根据输入的第一个字符决定值的进制数
  printf("input x:\n");
  scanf("%i" , &x);
  printf("x = %d\n" , x);

  // 5.03 %u , %o , %x
  printf("输入一个十六进制整数:\n");
  scanf("%x" , &x);
  printf("x = %d\n" , x);

  // 5.04 %e , %f , %g
  printf("input pi(x.xe+x):\n");
  scanf("%le" , &pi);
  printf("pi = %lf\n" , pi);

  // 5.05 %s
  printf("输入一个字符串(str):\n");
  char *str[128];
  scanf("%s" , &str);
  printf("str = %s\n" , str);

  // 5.06 %p

  // 5.07 %n

  // 5.08 %%

  // 5.09 [xxx]
  //   	  正则表达式
  //	  Regular Expression
  //	  %[abc]
  //	  只输入 'a' 'b' 'c' 
  // 	  遇到 'a' 'b' 'c' 以外的就结束
  char str2[128];
  printf("输入字符串(str2):\n");
  scanf("%[abc]" , str2);
  printf("str2 = %s\n" , str2);

  //  %[^abc]
  //  除 'a' 'b' 'c' 以外都存储
  //  遇到 'a' 'b' 'c' 就结束
  char str3[128];
  printf("输入字符串(str3):\n");
  scanf("%[^abc]" , str3);
  printf("str3 = %s\n" , str3);

  //  %[a-z]
  char str4[128];
  printf("输入字符串(str4):\n");
  scanf("%[a-z]" , str4);
  printf("str4 = %s\n" , str4);

  return 0;
}
