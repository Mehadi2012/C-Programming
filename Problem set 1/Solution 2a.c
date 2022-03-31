#include <stdio.h>


int main() {

    int num1;
    int num2;
    int num3;

    printf("Enter Numbers :");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("\nYou entered : %d,%d,%d", num1, num2, num3);





    int result = check(num1, num2, num3);
    printf("\nThe result is :%d",result);



}
int check(int n1, int n2, int n3) {
    if (n1>n2){
        int res = subt(n1,n2);
        return res;
    }
    else if(n3<n2){
        int res = add(n3,n2);
        return res;
    }
    else if(n2==n3){
        int res = mult(n2,n3);
        return res;
    }


}
int add(int n1, int n2) {
    int r = n1 + n2;
    return r;
}
int mult(int n1, int n2) {
    int r = n1 * n2;
    return r;
}
int subt(int n1, int n2) {
    int r = n1 - n2;
    return r;
}
