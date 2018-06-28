// lool_functions.c
#include <stdio.h>
#include <stdlib.h>

int square_area     (int square_side) 
{ 
return square_side * square_side; 
}

int square_perimeter(int square_side) 
{ 
return square_side * 4;           
}


long factorial(int c)     /* recursive function definition for finding factorial of a number */
{
    if(c == 1 || c == 0)
        return 1;
    else
        return c*factorial(c-1);

}


long factorial_LOOP(int inpN)   
{
//https://www.programmingsimplified.com/c-program-find-factorial	
int c;
long fact = 1;
for (c = 1; c <= inpN; c++)
{
fact = fact * c;
}
return fact;
}

long nPr(int in, int ir) { return (factorial(in)/              factorial(in-ir)) ;}
long nCr(int in, int ir) { return (factorial(in)/(factorial(ir)*factorial(in-ir)));}



int get_GCD(int x, int y)
{
    if      (x > y)   get_GCD(x-y, y  );
    else if (y > x)   get_GCD(x  , y-x);
    else              return x;
    return 0;
}


int get_LCM(int a, int b)  // function definition
{
    /*
        static variable is initialized only once 
        for each function call
    */
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        get_LCM(a,b);
        return temp;
    }
}

int is_prime(int inpI)
{
int            c      ;
for          ( c =  2 ; c <= inpI/2 ; c++ )
//for        ( c =  2 ; c <=(int)sqrt(inpI); c++ )
{ 
if    ( inpI % c == 0 )  
return 1;
}
return 0;
}


void get_factors(int inpI)
{
int            c      ;
for          ( c =  2 ; c <= inpI/2  ; c++ )
if    ( inpI % c == 0 )  
printf(" %d ", c);
}



void printARR(int inpARR[],int inpSIZE)
{
int            c      ;
printf("\n");
for          ( c =  0 ; c <= inpSIZE ; c++ )
printf("[%d] ",c);
printf("\n");
for          ( c =  0 ; c <= inpSIZE ; c++ )

printf("%4d",inpARR[c]);
}




void setARR(int inpARR[],int inpSIZE)
{
//inpARR[] = {44,33,66,88,77,99,11,55,22};
int            c      ;
for          ( c =  0 ; c <= inpSIZE ; c++ )
inpARR[c]=(c+0)*100;

}
