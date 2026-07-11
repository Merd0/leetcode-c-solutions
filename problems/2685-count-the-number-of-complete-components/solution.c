static int find_root(int* parent, int node) {
    while (parent[node] != node) {
        parent[node] = parent[parent[node]];
        node = parent[node];
    }

    return node;
}

static void union_nodes(int* parent, int* rank, int a, int b) {
    int rootA = find_root(parent, a);
    int rootB = find_root(parent, b);

    if (rootA == rootB) {
        return;
    }

    if (rank[rootA] < rank[rootB]) {
        parent[rootA] = rootB;
    } else if (rank[rootA] > rank[rootB]) {
        parent[rootB] = rootA;
    } else {
        parent[rootB] = rootA;
        rank[rootA]++;
    }
}

int countCompleteComponents(int n, int** edges, int edgesSize, int* edgesColSize) {
    int parent[50];
    int rank[50] = {0};
    int nodeCount[50] = {0};
    int edgeCount[50] = {0};
    int completeCount = 0;

    (void)edgesColSize;

    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < edgesSize; i++) {
        union_nodes(parent, rank, edges[i][0], edges[i][1]);
    }

    for (int i = 0; i < n; i++) {
        int root = find_root(parent, i);
        nodeCount[root]++;
    }

    for (int i = 0; i < edgesSize; i++) {
        int root = find_root(parent, edges[i][0]);
        edgeCount[root]++;
    }

    for (int i = 0; i < n; i++) {
        if (parent[i] == i) {
            int nodes = nodeCount[i];
            int requiredEdges = nodes * (nodes - 1) / 2;

            if (edgeCount[i] == requiredEdges) {
                completeCount++;
            }
        }
    }

    return completeCount;
}
