#include<stdio.h>
#include<math.h>
#include<conio.h>

int fm(int d, int m, int y) 
{
int fm, leap;
if ((y % 100 == 0) && (y % 400 != 0))
leap = 0;
 else if (y % 4 == 0)
 leap = 1;
else
 leap = 0;
 fm = 3 + (2 - leap) * ((m + 2) / (2 * m))+ (5 * m + m / 9) / 2;
fm = fm % 7;
 return fm;
}
int day_of_week(int d, int m, int y) 
{
 int DayofWeek;
 int YY = y % 100;
 int century = y / 100;
 printf("\nDate: %d/%d/%d \n", d, m, y);
 DayofWeek = 1.25 * YY + fm(d, m, y) + d - 2 * (century % 4);
 DayofWeek = DayofWeek % 7;
 switch (DayofWeek) 
 {
 case 0:
 printf("Saturday");
 break;
 case 1:
 printf("Sunday");
 break;
 case 2:
 printf("Monday");
 break;
 case 3:
 printf("Tuesday");
 break;
 case 4:
 printf("Wednesday");
 break;
 case 5:
 printf("Thursday");
 break;
 case 6:
 printf("Friday");
 break;
 default:
 printf("Incorrect data");
 }
 return 0;
}
int main() 
{
 int d, m, y;
 printf("Enter Date: ");
 scanf("%d", &d);
 printf("Enter Month:");
 scanf("%d", &m);
 printf("Enter Year:");
 scanf("%d", &y);
 day_of_week(d, m, y);
 return 0;
}

