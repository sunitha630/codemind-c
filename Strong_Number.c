#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int isStrongNumber(int num) {
    int digitSum = 0;
    int originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        digitSum += factorial(digit);
        num /= 10;
    }

    return digitSum == originalNum;
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    int number;
    scanf("%d",&number);
    if (isStrongNumber(number))
        printf("Strong
");
    else
        printf("Not Strong
");
    }

    return 0;
}
