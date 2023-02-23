#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],str1[20];
    int t=0;
    gets(str);
    t=strlen(str);
    t--;
    for(int i=0;i<=t;i++)
    {    
        str1[i]= str[t-i];
    }
    for (int i = 0; i <=t; i++)
    {
        if (str[i]!=str1[i])
        {
            printf("\nNot a palindrome\n");
            break;
        }
        else
        {
            printf("\nIs a palindrome");
            break;
        }
    }
}