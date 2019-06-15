/*
 * 02.
 *
 * 键盘输入你喜欢之人的:
 * 名字、性别、身高、体重、爱好、性格等
 * 并把结果按整齐、漂亮的格式打印到屏幕上
 */

#include <stdio.h>

int main(void) {

  // name
  char name[64];
  printf("input name:\n");
  scanf("%s" , name);

  // gender
  int gender;
  char *real_gender;
  loop: printf("input gender(man 1 || woman 0):\n");
  scanf("%d" , &gender);
  if ((1 != gender) && (0 != gender)) {
    goto loop;
  } if (1 == gender) {
    real_gender = "man";
  } else if (0 == gender) {
    real_gender = "woman";
  }

  // height
  int height;
  printf("input height(unit cm):\n");
  scanf("%d" , &height);

  // weight
  int weight;
  printf("input weight(unit kg):\n");
  scanf("%d" , &weight);

  // hobby
  char hobby_1[64];
  char hobby_2[64];
  printf("input hobby\n");
  scanf("%s%s" ,
         hobby_1 , hobby_2);

  // character
  char character_1[64];
  char character_2[64];
  printf("input character:\n");
  scanf("%s%s" ,
         character_1 , character_2);

  // outputs result
  printf("The person you like:\n");
  printf("name: %s\n" , name);
  printf("gender: %s\n" , real_gender);
  printf("height: %d cm\n" , height);
  printf("weight: %d kg\n" , weight);
  printf("%s %s\n" , hobby_1 , hobby_2);
  printf("%s %s\n" , character_1 , character_2);

  return 0;
}
