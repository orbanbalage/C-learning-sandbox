#include <stdio.h>

void swap_int(int firstVariable, int secondVariable)
{
  // create a temporary variable to hold one of the values to perform the swap
  int tempVariable;

  tempVariable = firstVariable;  /* temporarily save the value of the first variable */
  firstVariable = secondVariable;  /* swap the vale of the first variable with the value of the second variable */
  secondVariable = tempVariable;  /* put the value of the first variable into the second variable */

  return;
}


void swap_int_pointer(int *pFirstVariable, int *pSecondVariable)
{
  int temp;

// using dereferenced pointers means the function is working with the values at the addresses that are passed in
  temp = *pFirstVariable;
  *pFirstVariable = *pSecondVariable;
  *pSecondVariable = temp;

  int a = 42;
  int b = 78;

  //mert maga a POINTER az LOCAL, egy másolata az eredetinek. csak ahová mutat - *p - az ugyanaz...
  pFirstVariable = &a;
  pSecondVariable = &b;

  return;
}

int main(void)
{
  int a = 100;
  int b = 200;

  int* ap = &a;
  int* bp = &b;

  printf("before swap: value of a: %d \n", a);
  printf("before swap: value of b: %d \n", b);

  // call the function to swap values, using the 'address of' operator to pass in the address of each variable
  swap_int(a, b);

  // check values outside the function after swap function is run
  printf("after swap_int: value of a: %d \n", a);
  printf("after swap_int: value of b: %d \n", b);

// call the function to swap values, using the 'address of' operator to pass in the address of each variable
  //swap_int_pointer(&a, &b);
  swap_int_pointer(ap, bp); //ugyanúgy felcseréli

  // check values outside the function after swap function is run
  printf("after swap_int_pointer: value of a: %d \n", a);
  printf("after swap_int_pointer: value of b: %d \n", b);


  return 0;

}
