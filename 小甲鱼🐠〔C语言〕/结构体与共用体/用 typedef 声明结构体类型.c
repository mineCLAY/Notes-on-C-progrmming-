/*
 * 声明结构体类型
 *
 * typedef struct {
 *
 *   int year;
 *   int moeth;
 *   int day;
 *
 * }
 * DATE;
 */

#include <stdio.h>

// 用 typedef 定义结构体类型
typedef struct {

  int year;
  int month;
  int day;

}
// 将此类型用 DATE 代替
DATE;

int main(void) {

  DATE date_one;
  date_one.year = 2019;
  date_one.month = 11;
  date_one.day = 10;

  // 输出结果
  printf("%d - %d - %d\n" ,
          date_one.year , date_one.month , date_one.day);

  return 0;
}
