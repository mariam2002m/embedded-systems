#include <stdio.h>
#include <stdlib.h>







/*int main()
{
    int result[3][3];
    int array1[3][3]={{9,3,5},{2,4,7},{11,8,6}};
    int array2[3][3]={{7,1,3},{2,4,7},{12,10,9}};
    int i=0,j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            result[i][j]=array1[i][j]-array2[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
             printf("%d\t",result[i][j]);
        }

    }
    return 0;
}*/












/*int main()
{
    int i=0 ,j=0 ,equal=1;
    int array1[2][2];
    int array2[2][2];
    printf("Enter the elements of array1[2][2]: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter the elements of array2[2][2]: ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf("%d",&array2[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           if (array1[i][j]!=array2[i][j])
           {
            equal=0;
            break;
           }
        }
    }
    if(equal==1)
    {
        printf("the two matrix are equal");
    }
    else if (equal==0)
    {
         printf("the two matrix are not equal");
    }
    return 0 ;
}*/











/*int main()
{
    int array[3][3];
    int i, j, sum = 0;
    printf("Enter elements in matrix A[3][3] : "  );
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        sum = 0;
        for(j=0; j<3; j++)
        {
            sum += array[i][j];
        }
        printf("Sum of elements of Row %d = %d\n", i+1, sum);
    }
    for(i=0; i<3; i++)
    {
        sum = 0;
        for(j=0; j<3; j++)
        {
            sum += array[j][i];
        }
        printf("Sum of elements of Column %d = %d\n", i+1, sum);
    }
    return 0;
}*/









/*int main()
{
    int array[2][2];
    int i, j;
    int det;
    printf("Enter elements of the array: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    det = (array[0][0] * array[1][1]) - (array[0][1] * array[1][0]);
    printf("Determinant of matrix = %d", det);
    return 0;
}*/













/*int main()
{
    int array1[2][2];
    int array2[2][2];
    int i, j, isSymmetric=1;
    printf("Enter elements array[2][2]: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &array1[i][j]);
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            array2[i][j] = array1[j][i];
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(array1[i][j] != array2[i][j])
            {
                isSymmetric = 0;
                break;
            }
        }
    }
    if(isSymmetric == 1)
    {
        printf("\nThe given matrix is Symmetric matrix");
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix");
    }
    return 0;
}*/





