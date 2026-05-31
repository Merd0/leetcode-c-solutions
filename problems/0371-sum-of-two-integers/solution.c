int getSum(int a, int b) {
    while (b != 0) {
        int toplam = a ^ b; // eldesiz toplam
        unsigned int elde = ((unsigned int)(a & b)) << 1; // eldeyi sola kaydir

        a = toplam;
        b = (int)elde;
    }

    return a;
}
