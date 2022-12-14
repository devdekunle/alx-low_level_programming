#ifndef MAIN_H
#define MAIN_H
int is_palindrome(char *s);
int checkPalindrome(char *s, int startAddress, int endAddress);
int _sqrt_recursion(int n);
int _squareRoot(int n, int num);
int is_prime_number(int n);
int _primeNum(int n, int num);
int _pow_recursion(int x, int y);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
int _putchar(char);
char *_strstr(char *haystack, char *needle);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
int _strlen(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
#endif
