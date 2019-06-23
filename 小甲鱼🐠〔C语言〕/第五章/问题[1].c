/*********************************
************循环的嵌套**************
*********************************/

/*
问题: 输出以下图形
*
**
***
****
*****
******
*/

#include <stdio.h>

int main(void){
	int j;
    for (j = 1; j < 7; j++){
      switch (j){
    	case 1:{
    	  printf("*\n");
          break;
    	  }
    	case 2:{
          printf("**\n");	
    	  break;
    	  }
    	case 3:{
    	  printf("***\n");
    	  break;
    	  }
    	case 4:{
    	  printf("****\n");
    	  break;
          }
        case 5:{
    	  printf("*****\n");
    	  break;
          }
    	case 6:{
    	  printf("******\n");
          break;
    	  }
    	printf("\n");
    	}    
    }
	return 0;
}

//分析 VS 提示: 一共六行 , 每行的 '*' 数目与行号相同

/* 小甲鱼解法
#include <stdio.h>
int main(void){
  int i , j;
  for (i = 1; i < 7 ; i++){
    for (j = 1; j <= i; j++){
      putchar('*');
    }
    printf("\n");
  }
  return 0;;
}
*/
