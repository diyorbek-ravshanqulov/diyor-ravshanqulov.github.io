#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	go2:
    go:
    srand(time(NULL));
    int n, num = 0, count = 0;
    num = rand() % 100 + 1;
    for (int i = 1; i <= 5; i++) {
         printf("Enter number: ");
         scanf("%d", &n);
         if (num == n) {
             printf("you found !!!\n");
             int agn;
             printf("will you play again (1 if yes, 0 if no): ");
             scanf("%d", &agn);
             if (agn != 0) {
                 goto go;
             }else {
                 break;
             }
         }else if (num > n) {
             printf("the number you think is small\n");
             count++;
         }else {
             printf("the number you think is bigger than that\n");
             count++;
         }
         if(count==5) {
             printf("Sorry, you have more than five attempts\n");
             int again;
             printf("will you play again (1 if yes, 0 if no): ");
             scanf("%d", &again);
             if (again != 0) {
                 goto go2;
             }else {
                 break;
             }
         }
    }

    return 0;
}