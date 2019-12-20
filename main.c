#include <stdio.h>
#include <string.h>
#include "find.h"
#define ONE 1
int main()
{
    char yourWord[WORD];
    getword(yourWord);
    char choose;
    choose=getchar();
    if(choose!='a'&&choose!='b')
    {
        printf("Please enter one char please!");
        return 1;
    }
    getchar();
    getchar();
    if(choose=='a')//the case that the user choose 'a'
    {
        printf("lines that contains your word %s : \n",yourWord);
        print_lines(yourWord);
    }
    else if(choose=='b')//user choose 'b'
    {
        printf("similar words for your word %s : \n",yourWord);
        print_similar_words(yourWord,ONE);
    }
    else
    {
        printf("Please choose again");
        return 1;
    }
return 0;
}