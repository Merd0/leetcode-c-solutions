#include <stdlib.h>
#include <string.h>

typedef struct TrieNode {
    int child[26];
    int bestIndex;
    int bestLen;
} TrieNode;

void initNode(TrieNode* node) {
    for (int i = 0; i < 26; i++) {
        node->child[i] = -1;
    }

    node->bestIndex = -1;
    node->bestLen = 1000000000;
}

void updateBest(TrieNode* node, int index, int len) {
    if (node->bestIndex == -1 ||
        len < node->bestLen ||
        (len == node->bestLen && index < node->bestIndex)) {

        node->bestLen = len;
        node->bestIndex = index;
    }
}

int* stringIndices(char** wordsContainer, int wordsContainerSize,
                   char** wordsQuery, int wordsQuerySize,
                   int* returnSize) {

    int totalLen = 1;

    for (int i = 0; i < wordsContainerSize; i++) {
        totalLen += strlen(wordsContainer[i]);
    }

    TrieNode* trie = (TrieNode*)malloc(sizeof(TrieNode) * totalLen);

    initNode(&trie[0]);
    int nodeCount = 1;

    // wordsContainer kelimelerini sondan başa Trie'ye ekliyoruz
    for (int i = 0; i < wordsContainerSize; i++) {
        char* word = wordsContainer[i];
        int len = strlen(word);

        int current = 0;

        // root'a da best koyuyoruz
        // çünkü hiç suffix eşleşmezse en kısa kelime dönecek
        updateBest(&trie[current], i, len);

        for (int j = len - 1; j >= 0; j--) {
            int c = word[j] - 'a';

            if (trie[current].child[c] == -1) {
                initNode(&trie[nodeCount]);
                trie[current].child[c] = nodeCount;
                nodeCount++;
            }

            current = trie[current].child[c];

            // Bu suffix'e sahip en iyi kelimeyi tut
            updateBest(&trie[current], i, len);
        }
    }

    int* answer = (int*)malloc(sizeof(int) * wordsQuerySize);
    *returnSize = wordsQuerySize;

    // Query'leri sondan başa Trie'de arıyoruz
    for (int i = 0; i < wordsQuerySize; i++) {
        char* query = wordsQuery[i];
        int len = strlen(query);

        int current = 0;

        // default cevap root'taki en kısa kelime
        answer[i] = trie[current].bestIndex;

        for (int j = len - 1; j >= 0; j--) {
            int c = query[j] - 'a';

            if (trie[current].child[c] == -1) {
                break;
            }

            current = trie[current].child[c];

            // Şu ana kadarki en uzun suffix eşleşmesinin cevabı
            answer[i] = trie[current].bestIndex;
        }
    }

    free(trie);
    return answer;
}
