# 29 - Tree ve Graph Traversal

[Önceki](28-recursion-and-backtracking.md) | [İçindekiler](README.md) | [English](../en/29-tree-and-graph-traversal.md) | [Sonraki](30-dynamic-programming-and-kadane.md)

## Zihinsel Model

Traversal, düğümlere hangi sırayla ve hangi state ile ulaşacağını tasarlar. DFS bir
yolu derinlemesine tamamlar; BFS başlangıca olan kenar uzaklığına göre katman katman
ilerler. Seçim kod stiline değil gereken bilgiye bağlıdır.

Tree'de parent bağlantısı nedeniyle doğal olarak cycle yoktur. Genel graph'ta aynı
düğüme farklı yollardan ulaşılabildiği için `visited` state'i çoğu zaman zorunludur.

## DFS Sözleşmesi

`dfs(node)` o düğümün temsil ettiği alt yapının cevabını üretir. Maximum depth için
dönüş, `1 + max(left_depth, right_depth)` olur; `NULL` alt ağacın derinliği 0'dır.

```c
int depth(struct TreeNode *node) {
    if (node == NULL) return 0;
    int left = depth(node->left);
    int right = depth(node->right);
    return 1 + (left > right ? left : right);
}
```

## BFS Invariant'ı

Queue, keşfedilmiş fakat komşuları henüz işlenmemiş düğümleri katman sırasıyla tutar.
Unweighted graph'ta bir düğüm ilk kez queue'ya girdiğinde bulunan mesafe en kısadır.
Visited işareti enqueue anında konur; dequeue'a bırakılırsa düğüm birçok kez eklenebilir.

## Temsil Seçimi

Adjacency list seyrek graph için O(V + E) alan, matrix yoğun graph için O(V^2) alan
kullanır. Grid graph'ta komşular ayrıca saklanmayıp yön dizileriyle üretilir.

## C Riskleri

Visited boyutu, queue kapasitesi, recursive stack derinliği ve düğüm ownership'i
incelenir. Tree kodunu graph'a visited eklemeden taşımak sonsuz döngü yaratabilir.

## Bu Repoda Çalış

[104 - Maximum Depth](../../../problems/0104-maximum-depth-of-binary-tree/README.md) ve [226 - Invert Binary Tree](../../../problems/0226-invert-binary-tree/README.md) tree DFS temelleridir. Grid komşuluğu için [661 - Image Smoother](../../../problems/0661-image-smoother/README.md) ile yönlü traversal düşüncesine geç.

## Sistem Bağı

Bağımlılık grafı, cihaz topolojisi ve görüntü connected-component analizi traversal
gerektirir. Büyük graph'ta bounded queue/stack kapasitesi planlanmalıdır.

