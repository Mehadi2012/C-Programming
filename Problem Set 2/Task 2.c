#include <stdio.h>


int main()
{
    int start_point,end_point, sum;
    printf("Enter Start point :");
    scanf("%d",&start_point);
    printf("Enter End point :");
    scanf("%d",&end_point);
    for(int i =start_point; i<end_point; i++){
        sum = 0;
        for(int j= start_point; j<i; j++){
            if(i%j==0){
                sum = sum+j;
            }
        }
        if(sum==i){
            printf("%d\n",i);
        }

    }


    return 0;
}
