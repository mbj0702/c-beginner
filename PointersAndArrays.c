#include<stdio.h>
#include<string.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  // Code for Checkpoint 1 goes here.
  int arraySize = sizeof(arr) / sizeof(int);
  // printf("%d\n", arraySize - 1);
  int* ptr = &arr[9];

  // Code for Checkpoint 2 goes here.
  for (int i = 0; i < arraySize; i++) {
    printf("%i\n", *ptr);
    ptr--;
  }

  // Code for Checkpoint 3 goes here.
  char* ptr2 = &s[0];

  // Code for Checkpoint 4 goes here.
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    *ptr2 = '#';
    ptr2++;
  }
  
  printf("%s\n", s);  
}