#include <stdio.h>
#include <string.h>

int main() {
  char data[100];
  fgets(data, 100, stdin);
  int length = strlen(data);
  printf("The length of the input is: %d\n", length);
  return 0;
}
