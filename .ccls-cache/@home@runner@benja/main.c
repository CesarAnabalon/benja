#include <stdio.h>

void funcion ()
{

  for(int i = 0; i < 1000; i++)
    {
      printf("%i",i);
    }
}

int main(void) {
  printf("Hello World\n");
  funcion();
  return 0;
}