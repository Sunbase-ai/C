#include <stdio.h>

int main() {

    int a = 97;

    while (a <= 122)
    {
        putchar(a);
        if (a==100 || a == 112) a +=2;
        else a++;
    }

    putchar('\n');
    return (0);
}