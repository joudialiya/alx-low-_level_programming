#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - alternative for putchar from the std lib
 *
 * Return: 0;
 */
int _putchar(int);

/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if a character is lower
 * @c: the character to chacke
 *
 * Return:
 * 1 if the character in lowercase
 * 0 otherways
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: the charater
 *
 * Return:
 * 1 if the char is lower or uppercase
 * 0 otherways
 */
int _isalpha(int);
int print_sign(int);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int);

#endif
