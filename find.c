#include <stdio.h>
#include <string.h>
#include "find.h"
//function to count how much char's is in the line
int Getline(char s[]) 
{
    int i,c;
    for(i=0; (c=getchar()) !=EOF && c!='\n';++i)
    {
        *(s+i)=c;
    }
    if(c=='\n')
    {
        *(s+i)=c;
        ++i;
    }
    *(s+i)='\0';
    return i;
}
//function to count how much char's is in word
int getword(char s[])
{
    int c,i,j;
    for(i=0,j=0;(c = getchar()) != EOF && c !='\n' && c!='\t' && c!=' ';++i)
    {
        s[j++]=c;
    }
    s[j]='\0';
    return i;
}
int substring(char* str1,char* str2){
    if(str1==str2)
    {
        return 1;
    }
    else
    {
        int M = strlen(str2);
        int N = strlen(str1);
        for(int i=0;i<=N-M;i++)
        {
            int j;
            for(j=0;j < M;j++)
                if(str1[i+j]!=str2[j])
                    break;
            if(j==M)
                return 1;
        }
            return 0;
    }
} 
int similar(char* s,char* t,int n)
{
    while(t[0])//that mean the while will run till '\0'
    {
        int i=0;
        int count=0;
        while(s[i]!=t[0])//the first letter of s different from t[0]
        {
            if(!s[i])
            {
                return 0;
            }
            i++;
            if(s[i]==*t)
            {
                count++;
            }
        }
        n=n-i;//so n - number of letter that diffrent 
        t=t+1;//more t from t[0] to t[1] by remove first letter 
        s=s+i+1;
    }
    return (n==strlen(s));//result
}
void print_lines(char* str)
{
    char line[LINE];
    while(Getline(line)) //get the lines
    {
        if(substring(line,str)) //check if your word is substring int those line,if it does then print.
        printf("%s",line);
    }
}
void print_similar_words(char* str,int n)
{
    char string[WORD];
    int j;
    while(getword(string))
    {
        j=n;
        while(j>=0&&string!='\0')
        {
            if(similar(string,str,j))
            {
                printf("%s\n",string);
            }
            else
            {

            }
            j--;
        }
    }
}
