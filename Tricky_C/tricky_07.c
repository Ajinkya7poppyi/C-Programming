// Tricky C Programs (Storage Classes)
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>
int main()
{
  extern int i;
  printf("%d ", i);
  {
       int i = 10;
       printf("%d ", i);
  }
}