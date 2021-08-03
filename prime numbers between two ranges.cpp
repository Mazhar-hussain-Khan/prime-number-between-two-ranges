/*Name: Mazhar Hussain    Reg No:20MDELE098
Email:20MDELE098@uetmardan.edu.pk*/
#include<stdio.h>
#include<time.h>
int main() {
   int range1, range2, number, count;
   printf("Enter two numbers (ranges):\n ");
   scanf("%d %d", &range1, &range2);
   printf("Prime numbers between %d and %d are: \n", range1, range2);
   // increment until range1 is not equal to range2
   while (range1 < range2) {
      count= 0;
      // ignore numbers less than 2
      if (range1 <= 1) {
         ++range1;
         }
      // if range1 is a non-prime number, count will be 1
      for (number = 2; number <= range1 / 2; ++number) {
         if (range1 % number== 0) {
            count = 1;
            break; }}
      if (count == 0)
         printf("%d \t", range1);
      // to check prime for the next number
      // increase range1 by 1
      ++range1;}
      
    time_t t;   // not a primitive datatype
    time(&t);

    printf("\n\nThe prime numbers is saved at (date and time): %s\n", ctime(&t));

   return 0;
}
