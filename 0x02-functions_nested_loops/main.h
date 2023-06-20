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
int _isalpha(int c);
int print_sign(int n);

#endif
