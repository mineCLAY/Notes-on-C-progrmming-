/*
 * 计算一周有多少分钟
 * 以 day_per_week(每周数)、hours_per_day(每天小时数) 和 minutes_per_hour(每小时分钟数)
 * 为名分别创造变量(或者也可以用自己去的变量名)
 * 然后将它们相乘
 */

#include <stdio.h> // 引用头文件 stdio.h 标准输出输入

int main(void) { // 定义 main 主函数 并开始
    int day_per_week = 7; // 定义每周数
    int hours_per_day = 24; // 定义每天小时数
    int minutes_per_hour = 60; // 定义每小时分钟数

    int total_minutes = day_per_week * hours_per_day * minutes_per_hour; // 计算出一种总分钟 , 并赋值给 total_minutes
 整型变量
    printf("一周有: %d 分钟" , total_minutes); // 输出计算结果
    
    getchar(); // 让可执行文件 停一下(不会一闪而过)
    return 0; // main 主函数返回值 0
} // main 主函数结束
