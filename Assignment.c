#include <stdio.h>

int main() {
  
  int timesServerCrashed = 5;
  double losses = 500.95;
  losses /= 2;
  losses *= timesServerCrashed;


  printf("Total Losses: $%.2f\n", losses);
}