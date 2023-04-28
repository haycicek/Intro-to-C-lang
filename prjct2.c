/*(Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles.
One driver has kept track of several tankfuls of gasoline by recording miles driven and
gallons used for each tankful. Develop a program that will input the miles driven and
gallons used for each tankful. The program should calculate and display the miles per
gallon obtained for each tankful. After processing all input information, the program
should calculate and print the combined miles per gallon obtained for all tankfuls.

Here is a sample input/output dialog:

Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles/gallon for this tank was 22.421875 miles.
Enter the gallons used (-1 to end): 10.3
Enter the miles driven: 200
The miles/gallon for this tank was 19.417475 miles.
Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles/gallon for this tank was 24.000000 miles.
Enter the gallons used (-1 to end): -1
The overall average miles/gallon was 21.601423 miles.

Note that both the gallons used and the miles driven may be decimal values.*/
#include <stdio.h>

int main(void)
{
    double curr_miles,
           curr_gallons = 0,
           total_miles = 0,
           total_gallons = 0;

    while (1)
    {
        printf("Enter gallons used (-1 to end): ");
        scanf("%lf", &curr_gallons);

        if (curr_gallons < 0)
            break;

        total_gallons += curr_gallons;

        printf("Enter miles driven: ");
        scanf("%lf", &curr_miles);

        total_miles += curr_miles;

        printf(
                "The miles/gallons for this tank was %lf miles.\n",
                curr_miles / curr_gallons
                );
    }

    printf(
            "The overall average miles/gallon was %lf miles\n",
            total_miles / total_gallons
          );

    return 0;
}