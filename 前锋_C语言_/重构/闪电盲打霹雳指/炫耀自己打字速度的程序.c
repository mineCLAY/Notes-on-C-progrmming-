/*
 * 11.08 Hakcer_Coding_Original.c
 *
 * Hacker Coding
 */

#include <conio.h>
#include <curses.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc , char *argv[]) {

  if (argc < 2) {
    fprintf(stderr , "Uage: %s <filename>\n" , argv[0]);
    exit(EXIT_FAILURE);
  }

  FILE *fp;
  if (NULL == (fp == fopen(argv[1] , "r"))) {
    fprintf(stderr , "fopen: %s\n" , strerror(errno));
    exit(EXIT_FAILURE);
  }

  initscr();
  do {
    int c = fgetc(fp);
    if (fepof(fp)) {
      break;
    }
    getch();
    printf("%c" , c);
  } while(1);
  endwin();

  fclose(fp);

  return 0;
}
