#include <stdio.h>

int main() {
  char greetings[] = "Hello World!";
  greetings[0] = 'j';
  printf("%s", greetings);

  return 0;
}