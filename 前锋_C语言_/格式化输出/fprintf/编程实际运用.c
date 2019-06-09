/*
 * 4.09. IPP_fprintf.c
 *
 * fprintf 打印到一个磁盘文件里
 *
 * 打印海贼王路飞的属性
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(void) {

    FILE *stream;
    stream = fopen("fprintf.out", "w");

    if (NULL == stream) {
        // 打印出错的原因 , 才好知道错误在哪里
        fprintf(stderr, "fopen: %s\n", strerror(errno));
        // 如果不能打开就退出
        exit(EXIT_FAILURE);
    }

    char *name = "蒙奇 .D. 路飞";
    char ch = '\n';
    fprintf(stream, "name: %s%s", name, ch);

    char sex = 'M';
    fprintf(stream, "性别: %s\n", sex);

    int age = 19;
    fprintf(stream, "年龄: %d\n", age);

    int height = 174;
    fprintf(stream, "身高: %d 厘米\n", height);

    int weight = 50;
    fprintf(stream, "体重: %d 千克\n", weight);

    char *apple = "橡胶果实";
    fprintf(stream, "恶魔果实: %s\n", apple);

    char *won = "五亿贝利";
    fprintf(stream, "悬赏金额: %s\n", won);

    return 0;
}

// 一点也不懂这代码啊
