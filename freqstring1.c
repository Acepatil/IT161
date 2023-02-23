#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int vow=0,space=0,cons=0,numb=0,sc=0,words=0;
    gets(str);
    int t=strlen(str);
    for (int i = 0; i <=t-1; i++)
    {
        int f=str[i];
        if (f==32)
        {
            space++;
            words++;
            if (str[i+1]==str[i])
            {
                words--;
            }
            
        }
        else if (f>=48&&f<=57)
        {
            numb++;
        }
        else if (f==65||f==69||f==73||f==79||f==85||f==97||f==101||f==105||f==111||f==117)                                       
        {
            vow++;
        }
        else if ((f>=65&&f<=90)||(f>=97&&f<=122))
        {
            cons++;
        }
        else
        {
            sc++;
        }
    }
    printf("Words=%d\n",words+1);
    printf("Vowels=%d\n",vow);
    printf("Consonant=%d\n",cons);
    printf("Spaces=%d\n",space);
    printf("Special Characters=%d\n",sc);
}