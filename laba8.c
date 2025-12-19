#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int min_diff = abs(arr[1] - arr[0]);
    int idx1 = 0, idx2 = 1;
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            int diff = abs(arr[j] - arr[i]);
            if (diff < min_diff) {
                min_diff = diff;
                idx1 = i;
                idx2 = j;
            }
        }
    }
    if (idx1 > idx2) {
        int temp = idx1;
        idx1 = idx2;
        idx2 = temp;
    }
    printf("%d %d", idx1+1, idx2+1);
    return 0;
}