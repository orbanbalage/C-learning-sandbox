#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year)
{
  if(year % 4 == 0)
  {
    if(year % 400 == 0) 
    {
      return true;
    } else if(year % 100 != 0)
    {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

int days_in_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31,30,31};

void add_days_to_date(int* mm, int* dd, int* yy, int days_to_add)
{
  int days_left_in_month;
  int days_left_to_add = days_to_add;

  while(days_left_to_add > 0)
  {
    days_left_in_month = days_in_month[*mm] - *dd;
    if(is_leap_year(*yy) && *mm == 2)
    {
      days_left_in_month += 1;
    }
    if(days_left_to_add <= days_left_in_month)
    {
      *dd += days_left_to_add;
      days_left_to_add = 0;
    } else {
      *dd = 1;
      if(*mm == 12)
      {
        *mm = 1;
        *yy += 1;
      } else {
        *mm += 1;
      }
      days_left_to_add -= days_left_in_month +1;
    }
  }
}

int main() {
  int year;
  int mm, dd, yy, days_to_add;
  printf("Enter a date between the years 1800 and 10000 in the format mm dd yy and provide the number of days to add to this date:");
  scanf("%d %d %d %d", &mm, &dd, &yy, &days_to_add);
  if(is_leap_year(yy))
  {
    printf("Leap Year");
  } else {
    printf("Not Leap Year");
  }
  add_days_to_date(&mm, &dd, &yy, days_to_add);
  printf("%d %d %d", mm, dd, yy);
}