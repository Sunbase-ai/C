#include <stdio.h>

int _islower(int c) {
    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')) { // check if the ASCII value of c is between 'a' and 'z'
        return 1; // c is lowercase
    } else {
        return 0; // c is not lowercase
    }
}


int main() {
int r,a,z,e;
r = _islower('a');
printf("%d\n",r);
r = _islower('@');
printf("%d\n",r);
r = _islower('H');
printf("%d\n",r);
r = _islower('&');
printf("%d\n",r);
return 0;
}