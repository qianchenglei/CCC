// #include <stdio.h>
// #include <math.h>
// int power(int n, int strs)
// {
//     int ret = 1;
//     while (n-- > 0)
//     {
//         ret *= strs;
//     }
//     return ret;
// }

// int main()
// {
//     int n;
//     printf("please input a number in 3~7\n");
//     scanf("%d", &n);
//     int strnum = power(n - 1, 10);
//     int endnum = power(n, 10) - 1;

//     // printf("%d\n",strnum);
//     // printf("%d",endnum);
//     for (int i = strnum; i < endnum; i++)
//     {
//         int cnt = n;
//         int plusnum = 0;
//         int ans = 0;
//         int temp = i;
//         for (int j = 0; j < cnt; j++)
//         {
//             plusnum = power(n, (temp % 10));
//             ans += plusnum;
//             temp /= 10;
//         }
//         if (i == ans)
//         {
//             printf("%d ", ans);
//         }
//     }

//     return 0;
// }
