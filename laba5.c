#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);
    switch(K) {
        case 1: printf("до"); break;
        case 2: printf("ре"); break;
        case 3: printf("ми"); break;
        case 4: printf("фа"); break;
        case 5: printf("соль"); break;
        case 6: printf("ля"); break;
        case 7: printf("си"); break;
        default: printf("ошибка");
    }
    return 0;
}