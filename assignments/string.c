#include <stdio.h>
#include <string.h>

int main() {
  char hello[] = "hello world";

  printf("%s\n", hello);

  hello[0] = 'j';

  printf("%s\n", hello);

  int length = sizeof(hello) / sizeof(hello[0]);

  for (int i = 0; i < length; i++) {
    printf("%c", hello[i]);
  }
  return  0;
}
