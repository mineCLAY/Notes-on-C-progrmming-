//break 语句

#include <stdio.h>
#include <conio.h>

int main(voi){
	int i = 0;
	char c;
	printf("Input Esc or Enter:\n");
	while (1){ //设置循环
		c = '\0'; //变量赋初值
		while ((c != 13) && (c != 27)){ //键盘接受字符直到按回车或者 Esc 键
			c = getch();
			printf("%c\n" , c);
		}
		if (c ==27){
			break; //判断若按照 Esc 键则退出循环
		}
		i++;
	    printf("The No. is %d\n" , i);
	}
	printf("The end");
	return 0;
}
