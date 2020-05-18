// Storage Classes - Static
// Author:- Ajinkya Patil
// Github:- https://github.com/Ajinkya7poppyi/


#include <stdio.h>

/* test function declaration */
void test_f(void);

/* static extern variable */
static int exter_count = 1;

/*Main loop*/
int main()
{
    test_f();
    test_f();
    test_f();
    return 0;

}

/* test function definition */
void test_f( void )
{
    /* internal static variable */
    static int intern_count = 4;
    /*increment external as well as internal count*/
    intern_count++;
    exter_count++;

    printf("External Count is %d and Internal Count is %d\n", exter_count, intern_count);
}