#include <stdio.h>

/*Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)*/

int main() {

    char c;
    int i;
    long int j;
    long long int k;
    float f;

    printf("Size of a char: %d byte(s)\n",sizeof(c));
    printf("Size of an int: %d byte(s)\n",sizeof(i));
    printf("Size of long int: %d byte(s)\n",sizeof(j));
    printf("Size of long long int: %d byte(s)\n",sizeof(k));
    printf("Size of float: %d byte(s)\n",sizeof(f));
    getchar();
    return 0;

}