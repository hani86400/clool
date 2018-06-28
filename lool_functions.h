// lool_functions.h
#ifndef   lool_FUNCTION_HEADER
#define   lool_FUNCTION_HEADER
int square_area     (int square_side); 




int square_perimeter(int square_side); 



long factorial(int);
long factorial_LOOP(int inpN); 
long nPr(int a, int b);
long nCr(int a, int b);

int get_GCD(int x, int y);
int get_LCM(int a, int b);

int is_prime(int inpI);
void get_factors(int inpI);

void printARR(int inpARR[] ,int inpSIZE);
void setARR(int **inpARRptr,int inpSIZE);

#endif // lool_FUNCTION_HEADER
