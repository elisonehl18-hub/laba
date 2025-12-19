#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    char result[1000];
    int idx = 0;
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    int len = strlen(str);
    int in_word = 0;
    
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            if (in_word && i > 0 && str[i-1] == ' ') {
                result[idx++] = '.';
            }
            result[idx++] = str[i];
            in_word = 1;
        } else {
            in_word = 0;
        }
    }
    result[idx] = '\0';
    
    printf("%s", result);
    return 0;
}