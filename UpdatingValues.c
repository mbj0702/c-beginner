#include <stdio.h>

int main() {
  
  // These varaibles were created and had a starting value for you, no need to change
  char bookVersionReview = 'A';
  char movieVersionReview = 'C';
  double ticketPrice = 10.25;
  double bookPrice = 19.99;
  ticketPrice = bookPrice;

  // Update the movie review score here

  // Update the ticket price here


  // No need to change below here
  printf("The book version has a review score of %c and costs $%.2f\n", bookVersionReview, bookPrice);
  printf("The movie version has a review score of %c and costs $%.2f\n", movieVersionReview, ticketPrice);
}