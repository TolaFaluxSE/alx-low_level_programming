#ifndef MAIN_H
#define MAIN_H

/**
* Description: Once-only headers. If a header happens to be included 
* twice, the compiler will process its contents twice and result in error
* Enclosing the entire real contents of the file in a conditional like
* above is the standard way to prevent the error.
*
* Header file containing the desc. for all functions used in 
* 0x02-functions ....etc directory
*/


int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
oid print_to_98(int n);


#endif

