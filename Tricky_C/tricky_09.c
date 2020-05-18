// Tricky C Programs (Storage Classes)
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/

#include <stdio.h>
int fun(int n)
{
    static int num = 0;
    if (n <= 0) return 1;
    if (n > 3)
    {
        num = n;
        return fun(n-2)+2;
    }
    return fun(n-1)+num;
}

int main()
{
    printf("%d", fun(7));
}