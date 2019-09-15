/*
 * 链表头插法
 */

#include <stdio.h>
#include <stdlib.h>

// 定义结构体 Book
struct Book {

  // 定义属性 (变量)
  char title[128];
  char author[48];

  /*
   * 定义指向下一个
   * 结点的指针变量
   */
  struct Book *next;

};

// 声明函数 ReleaseLibrary
void ReleaseLibrary(struct Book *library);

// 声明函数 PrintLibrary
void PrintLibrary(struct Book *library);

// 声明函数 GetInput
void GetInput(struct Bool *);

// 声明函数 AddBook
void AddBook(struct Book **);

// 程序入口
int main(int argc, char const *argv[]) {

  // 定义结构体指针变量
  struct Book *library = NULL;
  // 定义变量
  char character;

  // 开始循环
  while (1 == 1 / 1) {

    /*
     * 叫用户输入
     * 是否要录入书籍
     */
    printf("Do you need to enter book information? (Y / N): ");

    // 嵌套循环
    do {

      // 将用户输入的一个字符赋给变量
      character = getchar();

    } while (('Y' != character) && ('N' != character));

    // 判断 character 是否为 Y
    if ('Y' == character) {

      // 调用函数 AddBook
      AddBook(&library);

    } else {

      // 退出循环
      break;

    }

  }

  // 叫用户输入是否需要输出书籍
  printf("Do you want to output books? (Y / N): ");
  // 开始循环
  do {

      // 将用户输入的一个字符赋给变量
      character = getchar();

    } while (('Y' != character) && ('N' != character));

    // 判断 character 是否为 Y
    if ('Y' == character) {

      // 调用函数 PrintLibrary
      PrintLibrary(library);

    }

  /*
   * 调用函数 ReleaseLibrary
   * 释放指针
   */
  ReleaseLibrary(library);

  /*
   * 让程序停一下
   * 不会一闪而过
   */
  getchar();
  getchar();

  return 0;
}

/*
 * 定义函数 GetInput
 * 实现填充数据
 */
void GetInput(struct Book *book) {

  // 叫用户输入书名
  printf("Enter the name of book: ");
  /*
   * 将用户输入的书名
   * 赋值给结构体变量
   * 的成员 title
   */
  scanf("%s" , (*book).title);

  // 叫用户输入作者
  printf("Enter the author: ");
  /*
   * 将用户输入的书名
   * 赋值给结构体变量
   * 成员 author
   */
  scanf("%s" , (*book).author);

  // 函数结束]
  return;
}

// 定义函数 AddBook
void AddBook(struct Book **library) {

  // 定义结构体指针变量
  struct Book *book;
  // 定义中间结构体变量
  struct Book *temp;

  // 动态分配内存
  book = (struct Book *)malloc(sizeof(struct Book));
  // 判断内存是否分配失败
  if (NULL == book) {

    // 输出错误信息
    printf("Failed to allocate memory\n");

    // 退出程序
    exit(EXIT_FAILURE);

  }

  // 调用函数 GetInput
  GetInput(book);

  /*
   * 判断 library
   * 是否是空链表
   */
  if (NULL != *library) {

    /*
     * 让 library
     * 指向第一个结点
     */
    temp = *library;
    *library = book;
    (*book).next = temp;

  } else {

    /*
     * 如果已经在
     * 最后一个结点
     * 则让 library
     * 指向最后一个结点
     */
    *library = book;
    /*
     * 让最后一个结点
     * 指向 NULL
     */
    (*book).next = NULL;

  }

  // 函数结束
  return;
}

/*
 * 定义函数 PrintLibrary
 * 实现打印链表
 */
void PrintLibrary(struct Book *library) {

  // 定义结构体指针变量
  struct Book *book;
  // 定义书的号数
  int count = 1;

  // 将当前链表赋给 book
  book = library;
  // 开始循环
  while (NULL != book) {

    // 输出 library 链表
    printf("Book number: %d\n" , count);
    printf("Book name: %s\n" , (*book).title);
    printf("Book author: %s\n" , (*book).author);

    // 输出换行
    putchar('\n');

    // 让 book 指向下一个结点
    book = (*book).next;

    // 号数自加
    count++;

  }

  // 函数结束
  return;
}

// 定义函数 ReleaseLibrary
void ReleaseLibrary(struct Book *library) {

  /*
   * 如果 library
   * 不指向 NULL
   * 就开始循环
   */
  while (NULL != library) {

    // 让 library 指向下一个结点
    library = (*library).next;

  }

  // 释放指针 library
  free(library);

  // 函数结束
  return;
}
