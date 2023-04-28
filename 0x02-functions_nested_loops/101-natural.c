#include <stdio.h>

int main() {
    int i=0;
    int j=0;
    while ( i < 1024)
    {
        if ((i%3==0) || (i%5==0))
        {
        j = j+i;
        printf("%d, ",i);
        }
        i++;
    }
    printf("%d",j);
}