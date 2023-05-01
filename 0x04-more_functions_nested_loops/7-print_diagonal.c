#include <stdio.h>

void print_diagonal(int n){
    int i=0;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            printf(" ");
            j++;
        }
        printf("\\\n");
        i++;
    }
    
}

int main(){
int lines;
printf("enter how many lines:");
scanf("%d", &lines);
print_diagonal(lines);
}