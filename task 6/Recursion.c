#include <stdio.h>
#include <stdlib.h>

void printEvenOdd(int cur, int limit);
int main()
{
    int lowerLimit, upperLimit;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &upperLimit);

    printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
    printEvenOdd(lowerLimit, upperLimit);
    return 0;
}
void printEvenOdd(int cur, int limit)
{
    if(cur > limit)
        return;
    printf("%d, ", cur);
    printEvenOdd(cur + 2, limit);
}








int reverse(int num);
int isPalindrome(int num);
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(isPalindrome(num) == 1)
    {
        printf("%d is palindrome number.\n", num);
    }
    else
    {
        printf("%d is NOT palindrome number.\n", num);
    }
    return 0;
}
int isPalindrome(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }
    return 0;
}
int reverse(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return 0;
    return ((num%10 * pow(10, digit)) + reverse(num/10));
}











int sumOfDigits(int num);
int main()
{
    int num, sum;
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    sum = sumOfDigits(num);
    printf("Sum of digits of %d = %d", num, sum);
    return 0;
}
int sumOfDigits(int num)
{
    if(num == 0)
        return 0;
    return ((num % 10) + sumOfDigits(num / 10));
}








unsigned long long fact(int num);
int main()
{
    int num;
    int factorial;
    printf("Enter any number: ");
    scanf("%d", &num);
    factorial = fact(num);
    printf("Factorial of %d is %d ", num, factorial);
    return 0;
}
unsigned long long fact(int num)
{
    if(num == 0)
        return 1;
    else
        return num * fact(num - 1);
}
