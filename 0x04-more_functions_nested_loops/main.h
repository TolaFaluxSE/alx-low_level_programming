#ifndef MAIN_H
#define MAIN_H



/**
* Description: Once-only headers. If a header happens to be included 
* twice, the compiler will process its contents twice and result in error
* Enclosing the entire real contents of the file in a conditional like
* above is the standard way to prevent the error.
*
* Header file containing the desc. for all functions used in 
* 0x04-more_functions_nested_loops ....etc directory
*/





int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);


#endif
