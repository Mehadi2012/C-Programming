#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int d =0;
    printf("Enter email :");
    scanf("%s", str);
    char str2[]={'s','h','e','b','a','.','x','y','z'};
    char str3[]={'k','a','a','j','.','c','o','m'};


    for(int i =0; i<strlen(str); i++){
        if(str[i]=='@' && str[i+1]=='s'){
            i++;
            for(int j=0; j<strlen(str2); j++){
                if(str[i]==str2[j]){
                    d++;

                }
                i++;
            }
            break;
        }
        if(str[i]=='@' && str[i+1]=='k'){
            i++;
            for(int j=0; j<strlen(str3); j++){
                if(str[i]==str3[j]){
                    d++;

                }
                i++;
            }
            break;
        }
    }
    if(d==9){
        printf("Email address is okay");
    }
    else if(d==8){
        printf("Email address is outdated");
    }
    return 0;
}
