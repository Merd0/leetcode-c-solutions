int maxProfit(int *prices, int pricesSize)
{
    /*
     * min_price is the cheapest buy price before today.
     * Selling today gives prices[i] - min_price.
     */
    int min_price = prices[0];
    int best_profit = 0;

    for (int i = 1; i < pricesSize; ++i) {
        int profit = prices[i] - min_price;

        if (profit > best_profit) {
            best_profit = profit;
        }

        if (prices[i] < min_price) {
            min_price = prices[i];
        }
    }

    return best_profit;
}
