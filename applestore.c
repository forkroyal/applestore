#include <stdio.h>

int main() {
  
 int appleQuantity;
 double applePrice = 1.49;

 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';

 int dayOfWeek = 0;

 const int appleRevierwers = 9;

 const int totalAppleReviewers = 10;

 appleQuantity = 23;

 appleReview = 823.0 / appleRevierwers; //calculating score
 appleReviewDisplay = appleReview; //setting scrore to display

 dayOfWeek += 3; //addring 3 days passed
 
 appleReview = (appleReview * appleRevierwers + 52) / totalAppleReviewers; //updating new Reviewscrore
 appleReviewDisplay = appleReview; //setting updated scrore to display


 if(dayOfWeek % 7 == 3 || appleQuantity < 10) //if 3rd day of week or less then 10 apples start sale
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }

 
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}