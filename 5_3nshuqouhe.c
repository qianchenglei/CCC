#include <stdio.h>

int jisuan(int innumber,int newans){
    int ans =0;
    ans= innumber+newans;
    return ans;
}

int main(){
    int n;
    int a;
    int returnans = 0;
    int new=0;
    printf("please input number(A) to sum N time\nA=");
    scanf("%d",&a);
    printf("N=");
    scanf("%d",&n);
    // printf("%d,%d",a,n);
    for (int i = 0; i < n; i++)
    {
        new=new*10+a;
        returnans = jisuan(returnans,new);
    }
    printf("%d",returnans);
    return 0;
}