#include <stdio.h>

void print_alphabet_starting_from(char c){
    if (c > 'z'){
        return;
    }
    putchar(c);
    print_alphabet_starting_from(c + 1);
}

void all_alphabet(void){
    print_alphabet_starting_from('a');
}

int main(){
all_alphabet();
return 0;
}