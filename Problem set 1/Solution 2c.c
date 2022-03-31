#include <stdio.h>
#include <string.h>


int main() {

    char str[100];
    int validity[4]={0};
    int d =0;

    int digits[10]= {'0','1','2','3','4','5','6','7','8','9'};
    int lowerL[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int upperL[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int schar[6]={'_','@','!','#','$','&'};
    printf("Enter Password :");
    scanf("%s", str);
    for(int i = 0; i<strlen(str); i++){
        for(int j = 0; j<10; j++){
            if(str[i]==digits[j])
               validity[0]++;
        }
        for(int j=0; j<26;j++){
            if(str[i]==lowerL[j])
                validity[1]++;

        }
        for(int j = 0; j<26; j++){
            if(str[i]==upperL[j])
                validity[2]++;
        }
        for(int j=0; j<6;j++){
            if(str[i]==schar[j])
               validity[3]++;

        }
    }
    if(validity[0]>0){
        d++;
    }
    if(validity[1]>0){
        d++;
    }
    if(validity[2]>0){
        d++;
    }
    if(validity[3]>0){
       d++;
    }
    if(d==4){
        printf("\nOK");
    }
    if(validity[0]==0){
        printf("\nDigit missing");
    }
    if(validity[1]==0){
        printf("\nLowercase Missing");
    }
    if(validity[2]==0){
        printf("\nUppercase Missing");
    }
    if(validity[3]==0){
        printf("\nSpecial Missing");
    }





}
