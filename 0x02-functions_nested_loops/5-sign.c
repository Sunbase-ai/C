#include <stdio.h>

int check(int c){
        if (c > 0)
    {
        return 1;
    }
    else if (c < 0)
    {
        return (-1);
    }
    else
    {
        return 0;
    }
    }

int print_sign(int n){

    int r = check(n);

    if ( r > 0)
    {
        printf("+\n");
    }
    else if (r < 0)
    {
        printf("-\n");
    }
    else
    {
        printf("0\n");
    }
}

int main() {
print_sign(5);
print_sign(-45);
print_sign(584654);
print_sign(-53511564);
print_sign(0);
print_sign(54211);

}