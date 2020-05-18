# C Program To Check Whether a Number is Palindromic Number

## Author:- Ajinkya Patil

## Github:- https://github.com/Ajinkya7poppyi

**Tricky01: Predict Output**

typedef gives a symbolic name to the data-types. So here int is interpreted as integer. As chat is declared a variable of type integer which is a symbolic name for int. Hence chat will be printed as output i.e. 0.

**Tricky02: Predict Output**

Here dummy_num is initialized to 7. In the first if condition it is decremented by 1 to value 6. As 6 being greater than 0 enters the loop. main() loop is again called recursively from it.  It again enters main loop. dummy_num being static it is not initialized again. So value of dummy_num remains as 6. So this state flow continue until dummy_ num becomes zero. As it becomes zero, already six blocks are called recursively.  After the last block execution completes, printing stage every block starts to executes one after the other. So 0 is printed 6 times til all blocks get over.

**Tricky03: Predict Output**

As you could see num is a static variable, so it would be initialized only once and value will be preserved for subsequent function calls. Also the return value from function num– is postfix, so it will return the present value of num and then decrements operator will act on it in next call for function. So process flow of program will be as mentioned below.
for loop: There are three conditions in for loop. for(init; condition; operation). Now in our case init is sample_fun(). So sample_fun() gets executed. In condition we have sample_fun() function returning integer to check if its non zero value. And finally operation is to execute sample_fun().

**sample_fun called from init. num=10. num initialization.**

**sample_fun called from condition. num=9.**

**sample_fun called from printf. num=8.**

**print num value i.e. 8.**

**sample_fun called from operation. num=7.**

**sample_fun called from condition. num=6.**

**sample_fun called from printf. num=5.**

**print num value i.e. 5.**

**sample_fun called from operation. num=4.**

**sample_fun called from condition. num=3.**

**sample_fun called from printf. num=2.**

**print num value i.e. 2.**

**sample_fun called from operation. num=1.**

**sample_fun called from condition. num=0.**

As num is zero value it comes out of for loop. For loop exits.

**Tricky04: Predict Output**

Compilation Error

var_two can not be initialized by var_one. The reason a static object cannot be initialized by a non constant value is related to the fact that the initialization of a static object is done “prior to program startup”. Note that the const qualifier does not mean constant but rather read-only. A const object is not a constant in C.

**Tricky05: Predict Output**

n=1;  initialized

num=1; initialized 

n=2; adding n and num

num=2; increment num

fun(n) called recursively fun(2)

num=2; num static so previous value is preserved

n=4; adding n and num

num=3; increment num

fun(n) called recursively fun(4)

num=3; num static so previous value is preserved

n=7; adding n and num

num=4; increment num

fun(n) called recursively fun(7)

num=4; num static so previous value is preserved

n=7; As n being greater than 5 returned from block.

So 7 is the finally returned value from all blocks.

**Tricky06: Predict Output**

Here global variables are a, b, and c initialized to 0.  Now lets understand the flow of program.
Variable a is defined as static which is local in main function. It is initialized to 1.  Variable is a is local to main function and is allocated different memory address other than global variables.
Now ptrFun function is called. In this new a and b variables are allocated in memory. a in this static so value in a is preserved till the end of program. a is initialized to 2 and b initialized to 1.
now a += ++b is equivalent to  a = a + b. where b=b+1. so value of a becomes 2 + 2 = 4.
now prints value of a and b to be 4 2
After printing function returns to main function.
Here a+=1 equivalent to a = a + 1 operation is performed i.e. a= 1+ 1 = 2.
Now ptrFun function is called again. In this value of a is preserved as it is declared as static and  b variable is newly allocated in memory. So a has value 4 and b initialized to 1.
now a += ++b is equivalent to  a = a + b. where b=b+1. so value of a becomes 4 + 2 = 6.
now prints value of a and b to be 6 2
After printing function again returns to main function.
now prints value of a and b in main function to be 2 0

**Tricky07: Predict Output**

Compilation Error
There is no space allocated for i. As no other file with int i  is also declared to allocate memory space. So compiler will give error of undefined reference to variable. If a variable is only declared and an initialization is also provided with that declaration, then the memory for that variable will be allocated i.e. that variable will be considered as defined. Also if its defined outside main function.

**Tricky08: Predict Output**

Here var is initialized with 10. Also x variable is also declared. After this enters into while loop. Now while loop will start to execute till var value is non zero. Now firstly var is non zero so it starts to execute. Lets understand func_dummy before entering into while loop.
In func_dummy first s is declared as static variable with initial value of o. So s will be preserved till the life-cycle of program. Then after this s is added with value passed from function and is stored in s itself. Also s is returned to the called state. So fun_dummy is nothing but the addition of new variable to the s.
So whatever we pass to func_dummy is added to s. As while loop will execute it decrements var by one till var becomes 0.
s=0+10+9+8+7+6+5+4+3+2+1=55.
So after coming out from while loop printf will print 55 as output.

**Tricky09: Predict Output**

Here main heart of program is function fun. So lets first understand function fun
In fun a static variable num is initialized with value 0, so this variable is preserved till the end of program life cycle.
Now in next stage if value of variable n passed to function is less than or equal to zero 1 returned from the program.
If n is greater than 3, then num is passed value of n. after this a return value is created as addition of fun function passed with value n-2 and 2. i.e. fun(n-2)+2.
Otherwise the return value from function is addition of num and fun function passed with value n-1 i.e. fun(n-1)+num.
Now lets solve this with our value of 7.

f(7)=f(5)+2; num=7

f(5)=f(3)+2; num=5

f(3)=f(2)+num= f(2)+5;num=5

f(2)=f(1)+num=f(1)+5;num=5

f(1)=f(0)+num=f(0)+5;num=5

f(0)=1

so finally we get 

f(0)=1;f(1)=6;f(2)=11;f(3)=16;f(5)=18;so f(7)=20
