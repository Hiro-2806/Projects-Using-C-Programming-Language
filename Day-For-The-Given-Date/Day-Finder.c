/*
This program calculates the day of the week for the given date (month,day and year).
You can enter any date in the past or future, and it will tell you which day of the week that date falls on.

License - This project is licensed under MIT License see the License file for details.

authour : HIRESHKUMARAN G (https://github.com/Hiro-2806)

 */

#include <stdio.h>

int main()
{
    int m, d, y, l, nd, td;
    /*
    m = month
    d = date
    y = year
    nd = number of days from previous year
    td = total days
    */
    int monthDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};  // Days in each month
    printf("\nWelcome to the day of week calculator\n");
    printf("Please enter the month, date, and year:\n");
    scanf("%d %d %d", &m, &d, &y);
    /*
    To check whether the given inputs are logically correct
    */
    if (m==0 || d ==0 || y ==0 || m>12 || d>31)
    {
        printf("Enter A Valid Input..!\n\n");
        printf("\nWelcome to the day of week calculator\n");
        printf("Please enter the month, date, and year: ");
        scanf("%d %d %d", &m, &d, &y);
    }
    
    while (m != 0 && d != 0 && y != 0 && m<=12 && d<=31)
    {
        printf("%2d/%2d/%2d => ", m, d, y);

        // Calculate days from previous years
        nd = (y - 1) * 365 + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;

        // Check for leap year and adjust February days
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            monthDays[2] = 29;
        else
            monthDays[2] = 28;

        // Add days for months before the given month
        for (int i = 1; i < m; i++)
            nd += monthDays[i];

        // Add the current day
        td = nd + d;

        // Determine the day of the week
        switch (td % 7)
        {
            case 0: printf("Sunday\n"); break;
            case 1: printf("Monday\n"); break;
            case 2: printf("Tuesday\n"); break;
            case 3: printf("Wednesday\n"); break;
            case 4: printf("Thursday\n"); break;
            case 5: printf("Friday\n"); break;
            case 6: printf("Saturday\n"); break;
        }

        // Prompt for new input
        printf("\nWelcome to the day of week calculator\n");
        printf("Please enter the month, date, and year: ");
        scanf("%d %d %d", &m, &d, &y);
    }
    
    return 0;
}
