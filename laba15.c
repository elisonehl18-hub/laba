#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINES 1000
#define MAX_LEN 256

int main() {
    int K;
    char filename[] = "input.txt";
    char new_filename[] = "output.txt";
    
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error opening file\n");
        return 1;
    }
    
    scanf("%d", &K);
    
    char lines[MAX_LINES][MAX_LEN];
    int count = 0;
    
    while (fgets(lines[count], MAX_LEN, file) != NULL && count < MAX_LINES) {
        count++;
    }
    fclose(file);
    
    if (count <= K) {
        printf("File has %d lines, need more than %d\n", count, K);
        return 1;
    }
    
    file = fopen(filename, "w");
    FILE *new_file = fopen(new_filename, "w");
    
    if (!file || !new_file) {
        printf("Error creating files\n");
        return 1;
    }
    
    for (int i = 0; i < count - K; i++) {
        fputs(lines[i], file);
    }
    
    for (int i = count - K; i < count; i++) {
        fputs(lines[i], new_file);
    }
    
    fclose(file);
    fclose(new_file);
    
    return 0;
}