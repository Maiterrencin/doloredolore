int parent[4] = {1, 2, 3, 4};
int i = 1;

if (parent[i + 1 & 3] || parent[i + 2 & 3] || parent[i + 3 & 3]) {
    retainer = parent; // Assuming retainer is declared as int* or similar
    j = i;
}
