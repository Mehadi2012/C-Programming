#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>



void* thread0(int x){
    for(int i=x; i<x+5; i++){
        printf("Thread 0 prints %d\n",i);
    }
}
void* thread1(int x){
    for(int i=x; i<x+5; i++){
        printf("Thread 1 prints %d\n",i);
    }


}
void* thread2(int x){
    for(int i=x; i<x+5; i++){
        printf("Thread 2 prints %d\n",i);
    }


}
void* thread3(int x){
    for(int i=x; i<x+5; i++){
        printf("Thread 3 prints %d\n",i);
    }

}
void* thread4(int x){
    for(int i=x; i<x+5; i++){
        printf("Thread 4 prints %d\n",i);
    }

}

int main(int argc, char* argv[])
{
   pthread_t p1,p2,p3,p4,p5;
   if(pthread_create(&p1,NULL,&thread0,1)!=0){
       return 1;
   }
    if(pthread_join(p1,NULL)!=0){
        return 2;
    }
    if(pthread_create(&p2,NULL,&thread1,6)!=0){
        return 3;
    }
    if(pthread_join(p2,NULL)!=0){
        return 4;
    }
    if(pthread_create(&p3,NULL,&thread2,11)!=0){
        return 5;
    }

    if(pthread_join(p3,NULL)!=0){
        return 6;
    }
    if(pthread_create(&p4,NULL,&thread3,16)!=0){
        return 7;
    }
    if(pthread_join(p4,NULL)!=0){
        return 8;
    }
    if(pthread_create(&p5,NULL,&thread4,21)!=0){
        return 9;
    }
    if(pthread_join(p5,NULL)!=0){
        return 10;
    }


    return 0;
}
