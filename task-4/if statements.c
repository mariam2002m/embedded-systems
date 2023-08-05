
             /*Write a C program to check whether a number is divisible by 5 and 11 or not */


#include <stdio.h>

 int main()
{
         int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if((num % 5 == 0) && (num % 11 == 0))
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }

    return 0;
}






        /*Write a C program to check whether a character is alphabet or not.*/

#include <stdio.h>

int main()
{
    char character;

    printf("Enter any character: ");
    scanf("%c", &character);


    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        printf("%c is an ALPHABET." , character);
    }
    else
    {
        printf("%c is NOT ALPHABET." , character);
    }

    return 0;
}






            /*Write a C program to input any alphabet and check whether it is vowel or consonant.*/



#include <stdio.h>

int main()
{
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf(" %c is Vowel.", ch);
    }
    else
    {
        printf(" %c is Consonant.", ch);
    }

    return 0;
}



     /*Write a C program to input month number and print number of days in that month.*/

#include <stdio.h>
int main()
{
    int month;
    printf("Enter month number from 1 to 12 : ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf(" month %d consists of 31 days" , month);
    }
    else if(month == 2)
    {
        printf("month %d consists of 28 or 29 days", month);
    }
    else if(month == 3)
    {
        printf("month %d consists of 31 days", month);
    }
    else if(month == 4)
    {
        printf("month %d consists of 30 days", month);
    }
    else if(month == 5)
    {
        printf("month %d consists of 31 days", month);
    }
    else if(month == 6)
    {
        printf("month %d consists of 30 days", month);
    }
    else if(month == 7)
    {
        printf("month %d consists of 31 days", month);
    }
    else if(month == 8)
    {
        printf("month %d consists of 31 days", month);
    }
    else if(month == 9)
    {
        printf("month %d consists of 30 days", month);
    }
    else if(month == 10)
    {
        printf("month %d consists of 31 days", month);
    }
    else if(month == 11)
    {
        printf("month %d consists of 30 days", month);
    }
    else if(month == 12)
    {
        printf("month %d consists of 31 days", month);
    }
    else
    {
        printf( "Please enter month number from 1 to 12");
    }

    return 0;
}







     /*Write a C program to input angles of a triangle and check whether triangle is valid or not.*/


#include <stdio.h>

int main()
{
    int angle1, angle2, angle3 ;

    printf("Enter three angles of triangle:  ");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

   int sum =angle1+angle2+angle3 ;
    if(sum  ==180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
    return 0;
}








      /*Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.*/


#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if(side1==side2 && side1==side3)
    {
        printf(" triangle is equilateral ");
    }
    else if(side1==side2 || side1==side3 || side2==side3)
    {
        printf("triangle is isosceles ");
    }
    else
    {
        printf("triangle is Scalene ");
    }

    return 0;
}






/* Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
                                        Percentage >= 90% : Grade A
                                        Percentage >= 80% : Grade B
                                        Percentage >= 70% : Grade C
                                        Percentage >= 60% : Grade D
                                        Percentage >= 40% : Grade E
                                        Percentage < 40% : Grade F*/




#include <stdio.h>
 int main()
{
    int phy, chem,fre, math, eng ;
    float total,per ;

    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, & fre, &math, &eng );
     total= phy + chem +  fre + math + eng   ;
     per = (total/500)*100   ;

    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}






/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/



#include <stdio.h>

int main()
{
    float  salary, gross, Da, Hra;

    printf("Enter basic salary: ");
    scanf("%f", &salary);

    if(salary <= 10000)
    {
         Hra = salary* 0.2;
         Da  = salary* 0.8;
    }
    else if( salary <= 20000)
    {
        Hra =  salary* 0.25;
        Da  =  salary * 0.9;
    }
    else
    {
        Hra =  salary* 0.3;
        Da  = salary* 0.95;

    }

    gross = salary+ Da + Hra;

    printf("GROSS SALARY OF EMPLOYEE = %f", gross);

    return 0;
}





