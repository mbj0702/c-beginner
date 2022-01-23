#include <stdio.h>

int main() {

  int i = 99;

  // Write your loop here
  // while (i > -1) {
  //   printf("%d bottles of pop on the wall.\n", i);
  //   printf("Take one down and pass it around.\n");
  //   printf("%d bottles of pop on the wall.", i - 1);
  //   i--;
  // }

  for (i = 99; i > -1; i--) {
    printf("%d bottles of pop on the wall.\n", i);
    printf("Take one down and pass it around.\n");
    printf("%d bottles of pop on the wall.", i - 1);
  }


}