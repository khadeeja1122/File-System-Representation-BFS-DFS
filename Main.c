
#include <stdio.h>
#include <string.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int n;
char files[MAX][50];

void BFS(int start) {
    int queue[MAX], front = 0, rear = 0;
    int seen[MAX] = {0};

    queue[rear++] = start;
    seen[start] = 1;

    printf("BFS Traversal: ");

    while (front < rear) {
        int current = queue[front++];
        printf("%s ", files[current]);

        for (int i = 0; i < n; i++) {
            if (graph[current][i] && !seen[i]) {
                queue[rear++] = i;
                seen[i] = 1;
            }
        }
    }
    printf("\n");
}

void DFS(int current) {
    visited[current] = 1;
    printf("%s ", files[current]);

    for (int i = 0; i < n; i++) {
        if (graph[current][i] && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    int edges, u, v, start, target;
    int found = 0;

    printf("Enter number of files/directories: ");
    scanf("%d", &n);

    printf("Enter file/directory names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%49s", files[i]);
    }

    printf("Enter number of connections: ");
    scanf("%d", &edges);

    printf("Enter connections using node numbers (0 to %d):\n", n - 1);
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        if (u >= 0 && u < n && v >= 0 && v < n) {
            graph[u][v] = 1;
            graph[v][u] = 1;
        }
    }

    printf("Enter starting node number: ");
    scanf("%d", &start);

    printf("Enter file name to search: ");
    char search[50];
    scanf("%49s", search);

    if (start < 0 || start >= n) {
        printf("Invalid starting node.\n");
        return 1;
    }

    BFS(start);

    memset(visited, 0, sizeof(visited));
    printf("DFS Traversal: ");
    DFS(start);
    printf("\n");

    for (int i = 0; i < n; i++) {
        if (strcmp(files[i], search) == 0) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("File '%s' found.\n", search);
    else
        printf("File '%s' not found.\n", search);

    return 0;
}
