#include <stdio.h>

int ans[1];

int gcd(int A, int B){
    int t = 0;
    while (B!=0)
    {
        t =A%B;
        A = B;
        B = t;
    }
    ans[0] = A;
    ans[1] = B;
    return 0;
}
int main(){
    int dividend,divisor;
    printf("please input number sach as xx/xx");
    scanf("%d/%d",&dividend,&divisor);
    gcd(dividend,divisor);
    dividend/=ans[0];
    divisor/=ans[0];
    printf("%d/%d",dividend,divisor);
    return 0;
}