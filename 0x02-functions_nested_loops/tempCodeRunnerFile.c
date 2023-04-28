#include <stdio.h>

int _islower(int c) {
    if(c >= 'a' && c <= 'z') { // check if the ASCII value of c is between 'a' and 'z'
        return 1; // c is lowercase
    } else {
        return 0; // c is not lowercase
    }
}


int main() {
int r,a,z,e;
r = _islower('a');
printf("%d\n",r);
a = _islower('A');
printf("%d\n",a);
z = _islower('H');
printf("%d\n",z);
e = _islower('l');
printf("%d\n",e);
return 0;
}