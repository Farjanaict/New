#include <stdio.h>

int main() {
    int n;

    // ইউজার থেকে n ইনপুট নেওয়া
    printf("Enter an odd number for size of Magic Square: ");
    scanf("%d", &n);

    // যদি n জোড় হয়, তাহলে ম্যাজিক স্কয়ার সম্ভব না
    if (n % 2 == 0) {
        printf("Magic square is only possible for odd numbers!\n");
        return 0;
    }

    int square[n][n];

    // স্কয়ার ইনিশিয়ালাইজ করা 0 দিয়ে
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            square[i][j] = 0;

    // প্রথম সংখ্যার পজিশন (মধ্য কলামে, প্রথম সারিতে)
    int i = 0;
    int j = n / 2;
    square[i][j] = 1;

    // ২ থেকে n*n পর্যন্ত সংখ্যা বসানো শুরু
    for (int key = 2; key <= n * n; key++) {
        int new_i = (i - 1 + n) % n; // উপরের দিকে যাওয়া
        int new_j = (j + 1) % n;     // ডানে যাওয়া

        // যদি নতুন ঘর আগে থেকেই ভরা থাকে, তাহলে নিচে নামো
        if (square[new_i][new_j] != 0) {
            i = (i + 1) % n;
        } else {
            i = new_i;
            j = new_j;
        }

        square[i][j] = key;
    }

    // ম্যাজিক স্কয়ার প্রিন্ট করা
    printf("\nMagic Square of size %d:\n\n", n);
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            printf("%3d ", square[x][y]);
        }
        printf("\n");
    }

    return 0;
}

