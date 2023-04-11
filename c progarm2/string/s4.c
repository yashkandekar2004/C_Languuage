#include <stdio.h>

int main() {
  char days[] = "Sunday Monday Tuesday Thrusday Friday Saturday";
  int i;
  
  for (i = 0; i < 46; ++i) {
    printf("%c", days[i]);
  }

  return 0;
}