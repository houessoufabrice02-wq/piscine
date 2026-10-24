#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_print_alpha(void)
{
    char c = 'a';

    while (c <= 'z') {
        my_putchar(c);
        c++;
    }
}

