#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30];
    printf("Write the first binary number\n");
    fgets(a,30,stdin);
    a[strcspn(a,"\n")]='\0';
    printf("Write the second binary number\n");
    fgets(b,30,stdin);
    b[strcspn(b,"\n")]='\0';
    char rev1[30],rev2[30];
    int n1=strlen(a);
    int n2=strlen(b);
    strcpy(rev1,strrev(a));
    strcpy(rev2,strrev(b));
    int n;
    if(n1>n2)
    {
        n=n1-n2;
    }
    else
    {
        n=n2-n1;
    }
    int max;
    if(n1<=n2)
    {
        max=n2;
    }
    else
    {
        max=n1;
    }
    char sum[30];
    for(int i=0;i<n;i++)
    {
        if(n1>n2)
        {
            rev2[n2+i]='0';
        }
        else{
            rev1[n1+i]='0';
        }
    }
    for(int i=0;i<max;i++)
    {
        if(rev1[i]=='0' && rev2[i]=='0')
        sum[i]='0';
        else if(rev1[i]=='1' && rev2[i]=='0')
        sum[i]='1';
        else if(rev1[i]=='0' && rev2[i]=='1')
        sum[i]='1';
        else if(rev1[i]=='1'&&rev2[i]=='1')
        sum[i]='2';
    }
    sum[max]='0';
    for(int i=0;i<max+1;i++)
    {
        if(sum[i]=='2')
        {
            sum[i]='0';
            sum[i+1]=sum[i+1]+'1'-48;
        }
        if(sum[i]=='3')
        {
            sum[i]='1';
            sum[i+1]=sum[i+1]+'1'-48;
        }
    }
    if (sum[max]=='0')
    {
        for (int i = max-1; i >= 0; i--)
        {
            printf("%c",sum[i]);
        }
    }
    else{
        for (int i = max; i >=0; i--)
        {
            printf("%c",sum[i]);
        }
    }
}