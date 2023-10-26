#include <stdio.h>
#include <stdlib.h>
#include <string.h>





/*int main()
{
    int i=0 ,count=0;
    char name[100];
    printf("Enter the name: ");
    //scanf("%s",name);
    gets(name);
    for(i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    printf("Length of name = %d",count);
    return 0;
}*/









/*int main()
{
    char string1[100];
    char string2[100];
    int i;
    printf("Enter the first string: ");
    gets(string1);
    for(i=0; string1[i]!='\0'; i++)
    {
        string2[i] = string1[i];
    }
    printf("Second string = %s\n",string2);
    return 0;
}*/










/*int main()
{
    int i,j;
    char name1[100];
    char name2[100];
    printf("Enter the first name:");
    gets(name1);
    printf("Enter the second name:");
    gets(name2);
    strcat(name1,name2);
    printf("the full name is %s",name1);
    return 0;
}*/










/*int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    int res = strcmp(str1, str2);
    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string is smaller than second.");
    }
    else
    {
        printf("First string is greater than second.");
    }

    return 0;
}*/







/*int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);
    strlwr(str);
    printf("Lowercase string: %s", str);
    return 0;
}*/






/*void toggleCase(char * str);
int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    toggleCase(str);
    printf("String after toggling case: %s", str);
    return 0;
}
void toggleCase(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}*/









/*int main()
{
    char str[100];
    int alphabets, digits, others, i;
    alphabets = digits = others = i = 0;
    printf("Enter any string : ");
    gets(str);
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }
        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}*/








/*int main()
{
    char string [100];
    printf("Enter any string: ");
    gets(string);
    strrev(string);
    printf("Reverse string = %s", string);
    return 0;
}*/










/*int indexOf(const char * str, const char toFind);
int main()
{
    char str[100];
    char toFind;
    int index;
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to be searched: ");
    toFind = getchar();
    index = indexOf(str, toFind);
    if(index == -1)
        printf("'%c' not found.", toFind);
    else
        printf("'%c' is found at index %d.", toFind, index);
    return 0;
}
int indexOf(const char * str, const char toFind)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == toFind)
            return i;
        i++;
    }
    return -1;
}*/









/*int lastIndexOf(const char * str, const char toFind);
int main()
{
    char str[100];
    char toFind;
    int index;
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to find: ");
    toFind = getchar();
    index = lastIndexOf(str, toFind);
    printf("\nLast index of '%c' is %d", toFind, index);
    return 0;
}
int lastIndexOf(const char * str, const char toFind)
{
    int index = -1;
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == toFind)
        {
            index = i;
        }
        i++;
    }
    return index;
}*/





/*int main()
{
    char str[100];
    char toSearch;
    int i;
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    toSearch = getchar();
    i=0;
    while(str[i]!='\0')
    {
        if(str[i] == toSearch)
        {
            printf("'%c' is found at index %d\n", toSearch, i);
        }
        i++;
    }
    return 0;
}*/








/*void removeAll(char *, const char);
int main()
{
    char str[100];
    char toRemove;
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to remove from string: ");
    toRemove = getchar();
    removeAll(str, toRemove);
    printf("String after removing '%c': %s", toRemove, str);
    return 0;
}
void removeAll(char * str, const char toRemove)
{
    int i, j;
    int len = strlen(str);

    for(i=0; i<len; i++)
    {
        if(str[i] == toRemove)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }

            len--;
            i--;
        }
    }
}*/









/*int main()
{
    char str[100], word[100];
    int i, index, found = 0;
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to be searched: ");
    gets(word);
    index = 0;
    while(str[index] != '\0')
    {
        if(str[index] == word[0])
        {
            i=0;
            found = 1;
            while(word[i] != '\0')
            {
                if(str[index + i] != word[i])
                {
                    found = 0;
                    break;
                }
                i++;
            }
        }
        if(found == 1)
        {
            break;
        }

        index++;
    }
    if(found == 1)
    {
        printf("\n'%s' is found at index %d.", word, index);
    }
    else
    {
        printf("\n'%s' is not found.", word);
    }

    return 0;
}*/









/*void trimLeading(char * str);
int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);
    trimLeading(str);
    printf("\n\nString after trimming leading whitespace:%s", str);
    return 0;
}
void trimLeading(char * str)
{
    int index, i, j;
    index = 0;
    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    {
        index++;
    }
    if(index != 0)
    {
        i = 0;
        while(str[i + index] != '\0')
        {
            str[i] = str[i + index];
            i++;
        }
        str[i] = '\0';
    }
}*/











