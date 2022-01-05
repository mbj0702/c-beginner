#include <stdio.h>

int main() {
  
  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;\
  //targetChar = (char)sourceInt;
  targetChar = sourceDouble;

  // Cast here


  // No need to change below here
  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

}