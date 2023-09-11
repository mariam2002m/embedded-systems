#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

int cube(int num);
int main()
{
    int num,cubenumber;
    printf("enter the number: ");
    scanf("%d",&num);
    cubenumber=cube(num) ;
    printf("the cube of %d is %d",num,cubenumber);
    return 0;
}
int cube(int num)
{
    return(num*num*num);
}








double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);
int main()
{
    float radius, dia, circ, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    dia  = getDiameter(radius);
    circ = getCircumference(radius);
    area = getArea(radius);
    printf("Diameter of the circle = %f\n", dia);
    printf("Circumference of the circle = %f\n", circ);
    printf("Area of the circle = %f", area);
    return 0;
}
double getDiameter(double radius)
{
    return (2 * radius);
}
double getCircumference(double radius)
{
    return (2 * 3.14 * radius);
}
double getArea(double radius)
{
    return (3.14 * radius * radius);
}







void Comparenumbers (int num1,int num2);
int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    Comparenumbers(num1,num2);
    return 0;
}
 void Comparenumbers(int num1,int num2)
{
     if (num1>num2)
     {
         printf("%d is the maximum number and %d is minimum",num1,num2);
     }
     else if(num1<num2)
     {
         printf("%d is the maximum number and %d is minimum",num2,num1);
     }
     else
    {
         printf("%d and %d are equal numbers ",num2,num1);
    }

}






void GetPrimes(int lowernumber, int uppernumber);
int main()
{
    int lowernumber, uppernumber;
    printf("Enter the lower number and upper number: ");
    scanf("%d%d", &lowernumber,&uppernumber);
    GetPrimes(lowernumber, uppernumber);
    return 0;
}
void GetPrimes(int lowernumber, int uppernumber)
{
    int i,j,isprime;
    printf("All prime number between %d to %d are: ", lowernumber, uppernumber);
    for (i = lowernumber; i <= uppernumber; i++)
    {

        if (i == 1 || i == 0)
        continue;
        isprime = 1;
        for (j = 2; j <= i/2; ++j)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime== 1)
            printf("%d ", i);
    }
}










