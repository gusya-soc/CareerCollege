// while3.c
#include <stdio.h>

int main(void) {
  int c; // charではなくint
  while((c = getchar()) != EOF) {
    putchar(c);
  }
  // 最後に改行１つ。
  printf("\n");

  return 0;
}
