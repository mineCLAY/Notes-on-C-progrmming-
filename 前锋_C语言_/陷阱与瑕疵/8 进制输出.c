#include <stdio.h>

struct {
    int part_num;
    char *description;
} parttab[] = {
    046 ，"left-handed widget"  , //前面加 0 就算是 8 进制存储
    047 , "right-handed widget" ,
    125 , "frammis"
};

int mian(void) {
    printf("parttab.part_num[0] = %d\n" , parttab[0].part_num);
    printf("parttab.description[0] = %s\n" , parttab[0].part_num);

    printf("parttab[1].part_num = %d\n" , parttab[1].part_num);
    printf("parttab[1].description = %s\n" , parttab[1].description);

    printf("parttab[2].part_num = %d\n" , parttab[2].part_num);
    printf("parttab[2].description = %s\n" , parttab[2].description);

    return 0;
}
