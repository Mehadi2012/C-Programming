#include <stdio.h>
#include <string.h>
#include <process.h>

int main()
{
    FILE *myfile = fopen("C:\\Users\\mehad\\CLionProjects\\untitled\\input","r");
    FILE *newfile = fopen("C:\\Users\\mehad\\CLionProjects\\untitled\\output","w");
    if(myfile == NULL){
        perror("Unable to open the file");
        exit(1);
    }
    char str1[100];
    while(fgets(str1,sizeof(str1),myfile)){
        int d = strlen(str1);

        int count = 0;
        int j = 0;
        int counter2 = 0;


        char str2[d];

        for (int i =0; i<d; i++){
            if(str1[i]==' '&& count==0){
                str2[j]=str1[i];
                j++;
                count++;
            }
            else if (str1[i]!=' '){
                str2[j]=str1[i];
                j++;
                count =0;
            }

            else if (count ==1 && str1[i]==' '){
                counter2++;
            }


        }
//    printf("%d", counter2);
        char str3[d-counter2];

        for(int i =0; i<d-counter2; i++){
            str3[i] = str2[i];
        }
        for(int i =0; i<strlen(str3); i++){
            fputc(str3[i],newfile);
        }

    }






    return 0;
}
