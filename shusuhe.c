#include <stdio.h>
#include <stdlib.h>

int IsPrimer(int n){
    if (n<=1)
    {
        return 0;
    }
    
    for (int i = 2; i*i<=n; i++)
    {
       if(n%i == 0){
        return 0;
       }
    }
    return 1;
}

int main(){
    int mix = 0;
    int max = 0;
    int cnt = 0;
    int ans = 0;
    int *ans_sheet=(int*)malloc(500*sizeof(int));
    printf("please input you want to find prime and plus then (you input prime range must between 1~500)\n");
    printf("minimum:\n");
    scanf("%d",&mix);
    printf("maximum:\n");
    scanf("%d",&max);
    for (int i = mix; i < max; i++)
    {
        if (IsPrimer(i)==1)
        {
            ans_sheet[cnt] = i;
            cnt+=1;
            ans +=i;
        }
        
    }
    printf("prime:");
    for (int i = 0;i < cnt; i++){
        int temp = ans_sheet[i];
        printf("%d,",temp);
    }
    printf("totel have %d prime , them plus = %d",cnt,ans);
    free(ans_sheet);
    return 0;
}