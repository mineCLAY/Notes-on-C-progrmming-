/*
 * 5.08 IPP_sscanf.c
 *
 * 日期处理
 */

#include <stdio.h>
#include <string.h>

int main(void) {

  int day , year;
  char weekday[32] , month[32] , dtm[128];

  strcpy(dtm , "Saturday March 25 1979");
  sscanf(dtm , "%s %s %d %d" ,
         weekday , month , &day , &year);

  printf("%s %d , %d = %s\n" ,
          month , day , year , weekday);

  return 0;
}
