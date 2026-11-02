
#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    if (number >= 0 && number <= 9)
    {
        printf("NG");
        return 0;
    }

    printf("OK");
    return 0;
}
