#include <stdio.h>

void f(int *p) {    //pointers are also passed by value, so "p" is a copy in this scope. It points to where *p points...
  int b = 2;
  p = &b;   //THIS IS A COPY of "p"... - but it pointed to the same as *p...
  printf("%d ", *p);
}

int main() {
  int a = 1;
  int *p = &a;
  f(p);
  printf("%d ", *p);
}


/*
The trick lies in knowing that a pointer being passed to a function is still being passed by value, 
and therefore the copy of the pointer inside the function now points to a different variable 
at a different memory address than that of the original pointer in the main function.
*/