#include <stdio.h>

int main(void)
{
    int b;
    char a[100];
    printf("find length of a string: ");
    scanf("%s", &a);
    b = 0;
    for (int j = 0; *(a +j) != '\0'; j++)
    {
        b++;
    }
    printf("string length: %d\n ",b);
}