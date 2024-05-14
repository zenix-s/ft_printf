#include "../include/ft_printf.h"

int print_pointer(void *p)
{
    int count = 0;

    // Write "0x" to indicate hexadecimal representation
    write(1, "0x", 2);
    count += 2;

    // Cast the pointer to unsigned long long
    unsigned long long int ptr_value = (unsigned long long int)p;

    // Temporary array to store hexadecimal digits
    char hex_digits[] = "0123456789abcdef";

    // Array to store hexadecimal representation of the pointer
    char hex_representation[17]; // 16 bytes for the maximum length of 64-bit pointer + 1 for null terminator

    // Convert the pointer to hexadecimal representation
    int i = 0;
    while (ptr_value != 0) {
        hex_representation[i++] = hex_digits[ptr_value % 16];
        ptr_value /= 16;
    }

    // Write the hexadecimal representation in reverse order
    while (i > 0) {
        write(1, &hex_representation[--i], 1);
        count++;
    }

    return count;
}
