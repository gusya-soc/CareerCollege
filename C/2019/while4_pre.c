// while4_pre.c
#include <stdio.h>
#include <ctype.h>

int main(void) {
  //
  int c;
  c = getchar();
  //
  if (isupper(c)) {
    printf("入力された文字(%c)は大文字です\n", c);
  } else if (islower(c)) {
    printf("入力された文字(%c)は小文字です\n", c);
  } else {
    printf("入力された文字(%c)は大文字でも小文字でもありません\n", c);
  }

  return 0;
}
