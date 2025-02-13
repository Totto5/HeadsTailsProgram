#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[100];
    printf("Who are you?\n");
    printf("> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    srand(time(NULL));
    int heads = 0, tails = 0;
    printf("Tossing a coin...\n");

    for (int round = 1; round <= 3; round++) {
        int toss = rand() % 2;
        if (toss == 0) {
            printf("Round %d: Heads\n", round);
            heads++;
        } else {
            printf("Round %d: Tails\n", round);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);
    return 0;
}
