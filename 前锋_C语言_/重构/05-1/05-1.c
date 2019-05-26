#include <stdio.h> 
 
//01. Original Code 原版代码 
//   a. 写到函数内部的宏不会被其它函数使用 
//      作用域太小了 
//   b. 所以 , 要声明为全局 
/* 
 * #define NORTH 0 
 * #define SOURTH 1 
 * #define EAST 2 
 * #define WEST 3 
*/ 
 
//02. Analysis ant Thinking 分析与思考  
//    使用 enum , 可以把上面这 4 行代码缩减为 1 行 
//    并且调试器更容易知道 EAST 的含义 
 
//03. Reactoring Code 重构代码 
enum directions {EAST , SOUTH , WEST , NORTH};

//04. Concludsion 结论
//    a. 但是 , 现在全局空间中有了 5 个新符号:
//       directions , EAST , SOUTH , WEST , NORTH
//    b. 为了让枚举发挥作用 , 它一般必须是全局的

int main(void){
    int i = 0;
    for (i = EAST; i <= NORTH; ++i){
        switch(i){
            case EAST:{
                printf("东山再起\n");
                break;
            }
            case SOUTH:{
                printf("南柯一梦\n");
                break;
            }
                        case WEST:{
                printf("西窗剪烛\n");
                break;
            }
            case NORTH:{
                printf("北辕适楚\n");
                break;
            }
            default:{
                printf("出错了!\n");
                break;
            }
        }
    }
    return 0;
}
