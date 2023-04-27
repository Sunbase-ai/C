#include <stdio.h>

int print_alphabet_x10() {
    void print_alphabet(){
    int a = 95;
    while (a <= 122)
    {
        putchar(a);
        a++;
    }
    putchar('/n');
    }
    print_alphabet();
    print_alphabet();
    print_alphabet();
    print_alphabet();
    print_alphabet();
    print_alphabet();
    print_alphabet();
    print_alphabet();
    print_alphabet();
    print_alphabet();
}

int main (){
print_alphabet_x10();
}