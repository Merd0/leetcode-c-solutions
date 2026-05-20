int maximumWealth(int **accounts, int accountsSize, int *accountsColSize)
{
    /*
     * Each row is one customer.
     * Sum the row and keep the maximum wealth.
     */
    int best = 0;

    for (int customer = 0; customer < accountsSize; ++customer) {
        int wealth = 0;

        for (int bank = 0; bank < accountsColSize[customer]; ++bank) {
            wealth += accounts[customer][bank];
        }

        if (wealth > best) {
            best = wealth;
        }
    }

    return best;
}
