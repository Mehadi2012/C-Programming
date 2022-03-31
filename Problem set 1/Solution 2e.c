#include <stdio.h>
#include <string.h>

void palindrome(char* str){

    char  *pointer1,*pointer2;
    printf("Enter a string :");
    gets(str);
    pointer1=str+strlen(str);
    pointer2=str;
    pointer1--;

    while(pointer1>=pointer2)
    {
        if(*pointer1==*pointer2)
        {
            pointer1--;
            pointer2++;
        }
        else
        {
            break;
        }
    }
    if(pointer2>pointer1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}



int main()
{
    char str[100];
    palindrome(str);
    return 0;
}
