/*
 * 编程实现
 * 抽烟问题把每年节约下来的钱存银行定期
 * 每年利滚利 50 年一共省多少钱
 * 提示:
 * 需要上网查考银行当前利率
 */

#include <stdio.h>

#define rate 0.3 // 某家银行定期 五年 年利率

int main(void) {
    int unit_price; // 定义 单价 , 年利率
    printf("input price(单位 元):\n");
    scanf("%d" , &unit_price);
    int total = unit_price * 50 * 365;
    printf("你 50 年戒烟省下: %d 元\n"); // 输出 50 年戒烟省下的钱

    int years , total_price; // 定义存期 50 年 , 和总省钱
    for (years = 1; 50 <= years; years++) {
        unit_price = total + total * rate;
        total_price = unit_price;
    }

    printf("戒烟 50 年利滚利一共省: %d 元" , total_price); // 输出戒烟 50 年每年利滚利省的钱
    getchar();
    return 0;
}

// 其实我是降低了难度 先戒烟 50 年 再存入银行利滚利 50 年 [嘿嘿嘿]
