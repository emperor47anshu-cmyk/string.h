#include <stdio.h>

int main(void)
{
    char f[50];
    char z[50];
    int i;
    printf("Enter: ");
    scanf("%s", f);

    for (i =0; f[i] != '\0'; i++)
    {
        z[i] = f[i];
    }
    z[i] = '\0';

    printf("Input: %s\n",f);
    printf("Output: %s\n",z);

    return 0;
}
