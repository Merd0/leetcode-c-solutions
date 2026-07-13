#include <string.h>

char* predictPartyVictory(char* senate) {
    int n = strlen(senate);

    int rQueue[10000];
    int dQueue[10000];
    int rFront = 0;
    int rBack = 0;
    int dFront = 0;
    int dBack = 0;

    // Store the original turn indexes of each active senator.
    for (int i = 0; i < n; i++) {
        if (senate[i] == 'R') {
            rQueue[rBack++] = i;
        } else {
            dQueue[dBack++] = i;
        }
    }

    // The smaller index acts first and bans the other party's front senator.
    while (rFront < rBack && dFront < dBack) {
        int r = rQueue[rFront++];
        int d = dQueue[dFront++];

        if (r < d) {
            // Radiant survives and returns in the next cyclic round.
            rQueue[rBack++] = r + n;
        } else {
            // Dire survives and returns in the next cyclic round.
            dQueue[dBack++] = d + n;
        }
    }

    if (rFront < rBack) {
        return "Radiant";
    }

    return "Dire";
}
