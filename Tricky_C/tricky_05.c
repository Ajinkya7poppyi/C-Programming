// Tricky C Programs (Storage Classes)
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

int fun(int n)
{
   static int num = 1;
   if (n >= 5)
      return n;
   n = n+num;
   num++;
   return fun(n);
}