int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int count = 0;
    int index = 0;

    while (tickets[k] != 0) {
        if (tickets[index] > 0) {
            tickets[index]--;
            count++;

            if (index == k && tickets[index] == 0) {
                break;
            }
        }

        index = (index + 1) % ticketsSize;
    }

    return count;
}
