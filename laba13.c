#include <stdio.h>
#include <string.h>

void OneChar(char S[], char S0[]) {
    int count[256] = {0};
    int len = strlen(S);
    for (int i = 0; i < len; i++) {
        count[(unsigned char)S[i]]++;
    }
    int idx = 0;
    for (int i = 0; i < len; i++) {
        if (count[(unsigned char)S[i]] == 1) {
            S0[idx++] = S[i];
        }
    }
    S0[idx] = '\0';
}

int main() {
    char S[100], S0[100];
    fgets(S, 100, stdin);
    S[strcspn(S, "\n")] = '\0';
    OneChar(S, S0);
    printf("%s", S0);
    return 0;
}