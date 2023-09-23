#include <stdio.h>
#include <stdlib.h>




/*int main()
{   int i=0,j;
    int numbers[100];
    printf("Enter number of elements you want: ");
    scanf("%d",&j);
    printf("Enter the elements:");
    for(i=0;i<j;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<j;i++)
    {
        printf("%d,",numbers[i]);
    }
    return 0;
}*/











/*int main()
  {
      int numbers[5]={110,47,80,38,22};
      int sum;
      for(int i=0;i<5;i++)
      {
         sum+=numbers[i];
      }
      printf("the sum is %d",sum);
      return 0;
  }*/










/*int main()
{
    int numbers[4];
    int i ,j,a;
    printf("Enter the 4 elements of array:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
         {
             if(numbers[i]<numbers[j])
             {
                a=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=a;
             }
         }
    }
    printf("\nThe second largest number is: ");
    printf("%d",numbers[1]);
    return 0;
}*/










/*int main()
{
    int array[4], copy[4];
    int i ;
    printf("Enter elements of source array : ");
    for(i=0; i<4; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<4; i++)
    {
        copy[i] = array[i];
    }
    printf("\nElements of  copy array are : ");
    for(i=0; i<4; i++)
    {
        printf("%d,", copy[i]);
    }
    return 0;
}*/











/*int main()
{
    int arr[8]={11,22,33,44,55,66,77,88};
    int i=0,num,pos;
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("Enter the element position : ");
    scanf("%d", &pos);
    arr[pos]=num;
    if(pos>7)
    {
        printf("invalid position");
    }
    else
    {
        for(i=0;i<8;i++)
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
*/










/*int main()
{
    int arr[100];
    int i, j, s, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &s);
    printf("Enter elements in array : ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<s; i++)
    {
        for(j=i+1; j<s; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements = %d", count);
    return 0;
}*/











/*int main()
{
    int i=0;
    int array[6];
    printf("please enter 6 elements of array: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The array: ");
    for(i=0;i<6;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\nThe reverse array: ");
    for(i=5;i>=0;i--)
    {
        printf("%d\t",array[i]);
    }
    return 0;
}*/










/*int main()
{
    int numbers[100];
    int s ,i ,j ,a;
    printf("Enter number of elements in the array: ");
    scanf("%d", &s);
    printf("Enter the elements of array:");
    for(i=0;i<s;i++)
    {
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
         {
             if(numbers[i]<numbers[j])
             {
                a=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=a;
             }
         }
    }
    printf("The elements in descending order is: ");
    for(i=0;i<s;i++)
    {
        printf("%d\t",numbers[i]);
    }

    return 0;
}*/
















