/*
 * 说出
 * getchar
 * gutter
 * getche
 * getch
 * getc
 * 之间的区别、联系、使用
 */

/*
 * 全部摘抄于网络(有些自己也懂)
 */

首先，这两个函数不是C标准库中的函数，

int getch(void)　　　　//从标准输入读入一个字符，当你用键盘输入的时候，屏幕不显示你所输入的字符。也就是，不带回显。
int getche(void) 　　　//从标准输入读入一个字符，键盘输入的时候，屏幕显示所输入的字符。带回显。

这两个函数包含在头文件conio.h中，需要记住的是conio.h不是C标准库中的头文件。Micorsoft 和 Borland的 C编译器提供了conio.h，用来创建控制台文本用户界面。一般在Windows系统下安装了VS、VC等，就可以包含conio.h头文件。但是一般在Unix、Linux系统中，/usr/include/中都没有这个头文件。

getch和getche在等待用户从键盘输入的时候，用户按下一个键后，不需要按回车，程序自动往下执行。在Linux中，终端输入在缺省情况下是被“一锅端”的，也就是说整行输入是被一起处理的。通常，这是一种人们所希望的方便的办法，但它也意味着在读入数据时必须按一下回车键表示输入行结束后才能得到输入的数据。在游戏中，很多都提供了“老板键”，它的实现，就是利用了这两个函数。

 

其次，除了getch和getche，其他的都是C标准库中的头文件，包含在头文件stdio.h中。

int fgetc ( FILE * stream ); //从流stream中读一个字符。可以将标准输入stdin作为它的实参，这时候从标准输入读取一个字符。

int getc(FILE * stream);     //和fgetc等效，由fgetc通过宏实现。

int getchar ( void );　　　　 //从标准输入stdin读入一个字符，程序等待你输入的时候，你可以输入多个字符，回车后程序继续执行。

                                 //但getchar只读入一个字符
说明:getc、getchar都是通过宏定义借助fgetc实现。如getchar的实现为，#define getchar() fgetc(stdin)

第一个，getchar函数，是C语言标准库中的函数，在头文件stdio中，可以接受用户输入的一个字符，回车结束，明文显示

getchar、getch、getche三者的区别getchar、getch、getche三者的区别

第二个，getch函数，也是接收键盘输入的一个字符，但不用回车确认！使用时要包含conio的头文件

getchar、getch、getche三者的区别

注意，用户输入一个字符是不显示的！此函数可以配合打印*号来实现密码输入的效果

第三个，getche函数，同样接收一个字符，也在conio头文件中声明，也不需要回车确认！但输入时明文显示（回显）
