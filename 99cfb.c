#include <stdio.h>

int Single_Line_Calculation(int mix,int max){
    for (int i = mix; i <= max; i++)
    {
       for (int j = 1; j <= i; j++)
       {
            int multiplication_ans=i*j;
            printf("%d*%d=%d ",i,j,multiplication_ans);
            if (j==i)
            {
                printf("\n");
            }
            
       }
       
    }
    
}

int main(){
    static int mix = 1;
    int max = 1;
    printf("please input you want to endnumber of generate multiplication table");
    scanf("%d",&max);
    Single_Line_Calculation(mix ,max);
    return 0 ;
}