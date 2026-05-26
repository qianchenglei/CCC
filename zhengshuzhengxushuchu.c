// #include <stdio.h>
// #include <math.h>

// int mask(int input) {
//     int mask = 0;
//     int cnt = 1;
//     while(input > 9) {
//         input /= 10;
//         cnt++;
//         mask = pow(10, cnt-1) ;
//     }
//     return mask;
// }

// int main() {
//     int input;
//     printf("Please input a number to export: ");
//     scanf("%d", &input);
//     int date=input;
//     int divisor = mask(input);
//     printf("divisor = %d\n", divisor);
//     do{
//         int d = date / divisor;
//         date = date % divisor;
//         printf("%d\n", d);
//         divisor = divisor / 10;
//     }while(divisor > 0);
//     return 0;
// }