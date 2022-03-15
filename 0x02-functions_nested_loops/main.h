#ifndef _main_h
#define _main_h

int _putchar(char);
void print_alphabet(void);


void print_alphabet_x10(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 */

int _islower(int c);
/**
 * _islower -prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 */

int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0 or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);

int  print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);
/**
 * print_to_98 - print natural numbers to 98
 *
 * Return Always 0 -Success
 */
void print_times_table(int n);

#endif
