#ifndef MAIN_H
#define MAIN_H

/* ---------- Function Prototypes ---------- */

/* Conversion functions */
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);

/* Bit manipulation functions */
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Utility functions */
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif /* MAIN_H */