/*(Find the Largest Number) The process of finding the largest number (i.e.,
the maximum of a group of numbers) is used frequently in computer applications.
For example, a program that determines the winner of a sales contest would input
the number of units sold by each salesperson. The salesperson who sells the most
units wins the contest.

Write a pseudocode program and then a program that inputs a series of 10
non-negative numbers and determines and prints the largest of the numbers.

[Hint: Your program should use three variables as shown below.]

counter: A counter to count to 10 (i.e., to keep track of how many numbers have
been input and to determine when all 10 numbers have been processed)

number: The current number input to the program

largest: The largest number found so far

Note that the names of the variables you use don't have the match the above of
course.
*/
#include <stdio.h>
int counter = 1;
int current_num = 0;
int largest_num;
int main(void)
{
while (counter <= 10)
{
printf("Enter a non-negative integer number: ");
scanf("%d", &current_num);

if(current_num > largest_num)
{
largest_num = current_num;
}
counter++;
}
printf("The largest number entered was: %d", largest_num);

}