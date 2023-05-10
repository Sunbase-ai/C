#include <stdio.h>

#include <stdio.h>


void rev_string(char *s)
{
int i;
int j = 0;
char r[1000];

for (i = 0; s[i] != '\0'; i++)
{
r[i] = s[i];
}
i--;
while (i >= 0)
{
s[i] = r[j];
i--;
j++;
}
s[j++] = '\0';
}

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}