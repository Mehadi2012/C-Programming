#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>



void* thread1(){
    printf("thread-1 is running\n");

    printf("thread-1 is closed\n");
    sleep(1);
}
void* thread2(){
    printf("thread-2 is running\n");

    printf("thread-2 is closed\n");
    sleep(1);
}
void* thread3(){
    printf("thread-3 is running\n");

    printf("thread-3 is closed\n");
    sleep(1);
}
void* thread4(){
    printf("thread-4 is running\n");

    printf("thread-4 is closed\n");
    sleep(1);
}
void* thread5(){
    printf("thread-5 is running\n");
    printf("thread-5 is closed\n");
}

int main(int argc, char* argv[])
{
   pthread_t p1,p2,p3,p4,p5;
   if(pthread_create(&p1,NULL,&thread1,NULL)!=0){
       return 1;
   }
    if(pthread_join(p1,NULL)!=0){
        return 2;
    }
    if(pthread_create(&p2,NULL,&thread2,NULL)!=0){
        return 3;
    }
    if(pthread_join(p2,NULL)!=0){
        return 4;
    }
    if(pthread_create(&p3,NULL,&thread3,NULL)!=0){
        return 5;
    }

    if(pthread_join(p3,NULL)!=0){
        return 6;
    }
    if(pthread_create(&p4,NULL,&thread4,NULL)!=0){
        return 7;
    }
    if(pthread_join(p4,NULL)!=0){
        return 8;
    }
    if(pthread_create(&p5,NULL,&thread5,NULL)!=0){
        return 9;
    }
    if(pthread_join(p5,NULL)!=0){
        return 10;
    }


    return 0;
}
