#include <stdio.h>
#include <stdlib.h>

int * retPtr1 ()
{
    int *ptr1 = (int *) malloc (20);
    ptr1[0] = 10;
    ptr1[1] = 20;
    ptr1[2] = 30;
    ptr1[3] = 40;
    ptr1[4] = 50;
    return ptr1;
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
