#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 || year % 400 == 0));
}

int main() {
  int year;
  printf("Enter a year between 1800 and 10000:");
  scanf("%d", &year);
  if(is_leap_year(year))
  {
    printf("Leap Year");
  } else {
    printf("Not Leap Year");
  }
}