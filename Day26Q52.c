#include <stdio.h>

int main() {
    // Odd star counts for each block: 1, 3, 5, 3, 1
    int counts[] = {1, 3, 5, 3, 1};
    int numBlocks = sizeof(counts) / sizeof(counts[0]);

    for (int b = 0; b < numBlocks; b++) {
        // Print 'counts[b]' stars, each on its own line
        for (int s = 0; s < counts[b]; s++) {
            printf("*\n");
        }

        // Print a blank line between blocks (not after the final block)
        if (b < numBlocks - 1) {
            printf("\n");
        }
    }

    return 0;
}
