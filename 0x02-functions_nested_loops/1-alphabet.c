#include <stdio.h>

void print_alphabet(void)
{
  int i;
  for(i=97; i <= 122; i++)
  {
    putchar(i);
  }
putchar('\n');
}

int main(void)
{

  print_alphabet();
  return (0);
}
