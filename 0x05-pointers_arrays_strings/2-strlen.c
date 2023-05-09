#include <stdio.h>

int _strlen(char *s){
    int count;

    for(count = 0; s[count]!='\0'; count ++)
    {}
    return(count);
}

int main()
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}