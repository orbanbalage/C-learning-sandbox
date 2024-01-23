#include <stdio.h>
#include <stdlib.h>

int * retPtr1 ()
{
  int arr[5] =  {10,20,30,40,50};
  int *ptr1 = arr;
  return ptr1; //once the function scope is over, only the pointer remains... the array is undefined/garbage...
}

void main()
{
  int cnt, *ptr1=NULL;
  ptr1 = retPtr1();
  
  for (cnt=0;cnt<5;cnt++)
    {
        printf("Array element %d  => %d\n", cnt+1, ptr1[cnt]);
    }
}
