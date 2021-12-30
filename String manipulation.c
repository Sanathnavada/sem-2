
#include <stdio.h>
#include <string.h>

int Length(char s1[]);
int compare(char s1[] , char s2[]);
void concat(char s1[] , char s2[]);

int main()
{
    char s1[200] , s2[100];
    int len,res,count;
    printf("\n Enter the string s1:");
    scanf("%s",s1);
    printf("\n Enter the string s2:");
    scanf("%s",s2);
    len = Length(s1);
    printf("\n Length of string s21is : %d",len);
    len = Length(s2);
    printf("\n Length of string s2 is : %d",len);
    res = compare(s1,s2);
    if (res == 0)
    printf("\n Both the strings are equal\n");
    else 
    printf("\n The strings are not equivalent\n");
    concat(s1,s2);
    printf("\n Concatenated string is : %s",s1);
    getchar();
    return(0);
}

int Length(char s1[ ])
{
    int len=0;
    while(s1[len]!='\0')
    len++;
    return(len);
}
    
int compare(char s1[], char s2[])
{
    int count=0;
    while(s1[count]==s2[count])
    {
        if(s1[count]=='\0' || s2[count]== '\0') break;
        else count++;
    }
    if(s1[count]=='\0' && s2[count]=='\0') return 0;
    else return -1;
}
void concat(char s1[], char s2[])
{
    int i,j;
    i=strlen(s1);
    for(j=0; s2[j]!='\0'; i++,j++)
        s1[i]=s2[j];
    s1[i]='\0';
}

