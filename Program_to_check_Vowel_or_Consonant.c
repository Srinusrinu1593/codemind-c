#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&& ch<='z')
    {
        if(ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I'||ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    return 0;
}