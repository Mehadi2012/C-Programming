#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


void* sum_ascii(void){
    int sum = 0;
    char name[100];
    printf("Enter name :");
    scanf("%s", name);
    for(int i =0; i<strlen(name); i++){
        sum = sum+name[i];
    }
    return (void*) sum;
}


int main(int argc, char* argv[])
{
    pthread_t p1,p2,p3;
    int* i;
    int* j;
    int* k;
    if(pthread_create(&p1,NULL,&sum_ascii,NULL)!=0){

        return 1;
    }
    if(pthread_join(p1,(void**)&i)!=0){
        return 2;
    }
    if(pthread_create(&p2,NULL,&sum_ascii,NULL)!=0){
        return 3;
    }
    if(pthread_join(p2,(void**)&j)!=0){
        return 4;
    }
    if(pthread_create(&p3,NULL,&sum_ascii,NULL)!=0){
        return 5;
    }
    if(pthread_join(p3,(void**)&k)!=0){
        return 6;
    }
    if((i==j)&& (j==k)){
        printf("Youreka");
    }
    else if ((i==j)||(j==k) ||(i==k)){
        printf("Miracle");
    }

    else if ((i!=j) && (j!=k)){
        printf("Hasta la vista");
    }
    return 0;
}
