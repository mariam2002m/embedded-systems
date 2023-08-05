
               /*Write a C program to print day of week name using switch case.*/


#include <stdio.h>

int main()
{
    int Day;
    printf("Enter Day number: ");
    scanf("%d", &Day);

    switch(Day)
    {
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("Friday");
            break;
        default:
            printf(" Please enter day number between 1-7");
    }
    return 0;
}





       /*Write a C program to find roots of a quadratic equation using switch case*/



#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float root1, root2, imaginary;
    float discriminant;

    printf("Enter values of a, b,c ");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    switch(discriminant > 0)
    {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Two distinct and real roots exists: %f and %f",
                    root1, root2);
            break;

        case 0:
            switch(discriminant < 0)
            {
                case 1:
                    root1 = root2 = -b / (2 * a);
                    imaginary = sqrt(-discriminant) / (2 * a);

                    printf("Two distinct complex roots exists: %f + i%f and %f - i%f",
                            root1, imaginary, root2, imaginary);
                    break;

                case 0:
                    root1 = root2 = -b / (2 * a);

                    printf("Two equal and real roots exists: %f and %f", root1, root2);

                    break;
            }
    }

    return 0;
}


    /*Write a C program to create Simple Calculator using switch case.*/


#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result=0.0f;


    printf("Enter number , operator and number   ");
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator");
    }
    printf("%f %c %f = %f", num1, op, num2, result);

    return 0;
}


