#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, rem, temp = n;

    while (n > 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n = n / 10;
    }

    return (temp == sum);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong Number.", num);
    else
        printf("%d is not an Armstrong Number.", num);

    return 0;
}