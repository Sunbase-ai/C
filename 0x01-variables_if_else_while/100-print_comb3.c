#include <stdio.h>

int main() {
    int i = 48;
    while (i < 58)
    { 
        int j = 48;
        while (j <58)
        {
            putchar(i);
            putchar(j);
            putchar(',');
            putchar(' ');
            j++;
        }
    i++;

    };
    return(0);
}