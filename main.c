// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int InputIsValid(float *c) {
//     char Buffer[32];
//     char dummy;


//     if (scanf("%31s", Buffer) != 1) {
//         getchar();
//         return -1;
//     }
//     if (Buffer[0] == 'Q' || Buffer[0] == 'q'&&Buffer[1] == '\n') {
//         return 0;
//     }
//     if (sscanf(Buffer, "%f%c",c,&dummy) == 1) {
//         return 1;
//     }
//     getchar();
//     return -1;
// }

// float Calculator_CtoF(float c_in) {
//     float f;
//     f = (9.0f / 5.0f) * c_in + 32.0f;
//     return f;
// }

// float Calculator_FtoC(float f_in) {
//     float c_out;
//     c_out = (f_in - 32.0f) * 5.0f / 9.0f;
//     return c_out;
// }

// int main() {
// #ifdef _WIN32
//     system("chcp 65001 > nul");
// #endif
//     float Fahrenheit, Celsius;
//     int upper, lower;
//     int choice;
//     const int step = 20;
//     upper = 148;
//     lower = 0;

//     Celsius = lower;
//     while (Celsius <= upper) {
//         Fahrenheit = (9.0 / 5.0) * Celsius + 32;
//         printf("%3.0f %6.1f\n", Celsius, Fahrenheit);
//         Celsius = Celsius + step;
//     }
//     printf("你需要哪种温度转换？\n"
//         "1.摄氏度到华氏度\n"
//         "2.华氏度到摄氏度\n");
//     scanf("%d", &choice);
//     getchar();
//     switch (choice) {
//         case 1: {
//             float c, f_out;
//             int ValidInput = 0;
//             printf("你需要转换的温度(摄氏度,Q退出)？\n");
//             while (!ValidInput) {
//                 int result = InputIsValid(&c);

//                 switch (result) {
//                     case 1: {
//                         f_out = Calculator_CtoF(c);
//                         printf("%f\n", f_out);
//                         ValidInput = 1;
//                         break;
//                     }
//                     case 0: {
//                         printf("User cancel this input \n");
//                         ValidInput = 1;
//                         break;
//                     }
//                     default: {
//                         printf("Error:user'input not pure numbers \n");
//                         printf("Error:Reinput \n");
//                         while (getchar() != '\n');
//                     }
//                 }
//             }
//             break;

//         }
//         case 2: {
//             float f, c_out;
//             printf("你需要转换的温度(华氏度)？\n");
//             scanf("%f", &f);
//             c_out = Calculator_FtoC(f);
//             printf("%f\n", c_out);
//             break;
//         }
//         default: {
//             printf("error");
//             return 1;
//         }
//     }
//     return 0;
// }
