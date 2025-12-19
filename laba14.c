#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    if (!input || !output) {
        printf("Error opening files\n");
        return 1;
    }
    
    double prev, curr, next;
    int idx = 1;
    int count = 0;
    int positions[1000];
    
    if (fscanf(input, "%lf", &prev) != 1) {
        fclose(input);
        fclose(output);
        return 0;
    }
    
    if (fscanf(input, "%lf", &curr) != 1) {
        fclose(input);
        fclose(output);
        return 0;
    }
    
    idx = 2;
    while (fscanf(input, "%lf", &next) == 1) {
        idx++;
        if ((prev < curr && curr > next) || (prev > curr && curr < next)) {
            positions[count++] = idx - 1;
        }
        prev = curr;
        curr = next;
    }
    
    for (int i = count - 1; i >= 0; i--) {
        fprintf(output, "%d ", positions[i]);
    }
    
    fclose(input);
    fclose(output);
    return 0;
}