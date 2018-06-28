// lool_main.c
#include <stdio.h>
#include <stdlib.h>
#include "lool_functions.h"

int main( int argc, char *argv[] )  {
  
//   int I1,I2,I3,I4;




if ( argc < 2 ) 
     {
     printf("Input parameter expected!\n");
     return 1;
     }


/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@  Print All Arguments passed to C Program using Command Line.                 @
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */

int arguments_counter;
printf("\n======================\nTotal Arguments : %d \n====================== ",argc);
for (arguments_counter = 0; arguments_counter < argc; arguments_counter++)
{
printf("\n%d %s",arguments_counter,argv[arguments_counter]);
}
printf("\n======================\n");
/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */




/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@  Test [factorial]                                                            @
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */
int n;
n = strtol(argv[1], NULL, 0);

printf("\n\n======================\nfactorial(%d)=%ld\n======================",n,factorial(n));
printf("\n\n======================\nfactorial_LOOP(%d)=%ld\n======================",n,factorial_LOOP(n));
/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */




/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@  Test [nCr nPr                                                               @
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */
int r;
n = strtol(argv[1], NULL, 0);
r = strtol(argv[2], NULL, 0);
printf("\n\n======================\nfor n=%d and r=%d THEN nPr=%ld  and nCr=%ld\n======================\n",n,r,nPr(n,r),nCr(n,r));
/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */





/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@  Test [square functions]                                                            @
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */
int side, area, perimeter;
side = strtol(argv[1], NULL, 0);
     area = square_area(side);
     perimeter=square_perimeter(side);
     printf("\n\n======================\nsome square functions\n======================");
     printf("\nSide=%d then Area of Square : %d  and Perimeter of  Square : %d \n======================\n", side,area,perimeter);
/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */







/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@  Test [GCD and LCM]                                                          @
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */
int A = strtol(argv[3], NULL, 0);
int B = strtol(argv[4], NULL, 0);
int igcd = get_GCD(A,B);
int ilcm = get_LCM(A,B);
printf("\n\n======================\nfor A=%d and B=%d THEN GCD=%d  and LCM=%d\n======================\n",A,B,igcd ,ilcm);
/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */



/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@  Test [PRIME numbers]                                                        @
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */
int P = strtol(argv[5], NULL, 0);
printf("\n\n======================");
if ( is_prime(P) == 0 )  // 0 true
{
printf("\nNumber=%d is PRIME number",P)	;
}
else
{
printf("\nNumber=%d is not a PRIME number Factors:[",P)	;
get_factors(P);	
}
printf("]\n======================\n");
/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */





/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@  Array                                               @
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */
//            0  1  2  3  4  5  6  7  8
int IARR[] = {44,33,66,88,77,99,11,55,22};
int IARRSIZE = 8 ;
//int *IARRPTR = NULL;
printARR(IARR,IARRSIZE);
setARR( &IARR,IARRSIZE);
printARR(IARR,IARRSIZE);
//free(IARRPTR );


/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */



printf("\n\n");}//END_main()
