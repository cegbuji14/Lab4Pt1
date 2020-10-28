#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_prog (int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int num1 = 7;
  int num2 = 2;
  int (*functptrarray[5])(int, int) = {add, subtract, multiply, divide, exit_prog};
  int op;
  printf("Operand 'a' = 7 | Operand 'b' = 2\nPlease enter a '0','1','2', or '3'\n'0' - add\n'1' - subtract\n'2' - multiply\n'3' - divide\n'4' - exit program\n");
  scanf("%d", &op);
  printf("%d\n",functptrarray[op](num1, num2));
  
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { 
  printf ("Adding 'a' and 'b'\n"); 
  return a + b; 
}
int subtract (int a, int b) {
  printf ("Subtracting 'a' and 'b'\n"); 
  return a - b;
}
int multiply (int a, int b) {
  printf ("Multiplying 'a' and 'b'\n"); 
  return a * b;
}
int divide (int a, int b) {
  printf ("Dividing 'a' and 'b'\n"); 
  return a / b;
}
int exit_prog (int a, int b){
  return 0;
}

//https://www.youtube.com/watch?v=wQ-gWwKKeP4
//^^Used above video to learn how to make an array of function pointers for each function.