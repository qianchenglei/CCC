// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>


// int Midi = 0 ;

// int gengrateMidi() {
//     srand((unsigned int)time(NULL));
//     return rand() % 100+1;
// }

// int main() {
//     #ifdef _WIN32
//     system("chcp 65001 > nul");
//     #endif
//     int userGuess;
//     Midi = gengrateMidi();
//     printf("现在我随机生成了一个整数，范围在1到100之间，你来猜猜看是多少？\n");
//     scanf("%d", &userGuess);
//     while(userGuess != Midi) {
//         if (userGuess < Midi) {
//             printf("太小了，再试一次！\n");
//         } else {
//             printf("太大了，再试一次！\n");
//         }
//         scanf("%d", &userGuess);
//     }
//     printf("恭喜你，猜对了！\n");
//     return 0;
// }