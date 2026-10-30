
# File System Representation and Search Using BFS and DFS

## Aim
To develop a C program to represent a file system as a graph using an adjacency matrix and search for files using Breadth-First Search (BFS) and Depth-First Search (DFS).

## Description
This project represents files and directories as nodes in a graph. The connections between them are represented using an adjacency matrix.

The program implements BFS and DFS to traverse the graph and checks whether a specified file exists.

## Objectives
- Represent a file system using a graph.
- Implement an adjacency matrix.
- Perform Breadth-First Search (BFS).
- Perform Depth-First Search (DFS).
- Search for a specified file.

## Technologies Used
- Programming Language: C
- Data Structure: Graph
- Graph Representation: Adjacency Matrix
- Algorithms: BFS and DFS

## Features
- Accepts file and directory names.
- Creates connections between nodes.
- Displays BFS traversal order.
- Displays DFS traversal order.
- Checks whether the requested file is found.

## How to Run

1. Download or clone this repository.
2. Save the program as `main.c`.
3. Compile the program using GCC:

   ```bash
   gcc main.c -o main
   ```

4. Run the program:

   ```bash
   ./main
   ```

   On Windows, use:

   ```bash
   main.exe
   ```

## Sample Input

```text
Enter number of files/directories: 4
Enter file/directory names:
Root Documents Images Notes
Enter number of connections: 3
Enter connections using node numbers (0 to 3):
0 1
0 2
1 3
Enter starting node number: 0
Enter file name to search: Notes
```

## Sample Output

```text
BFS Traversal: Root Documents Images Notes
DFS Traversal: Root Documents Notes Images
File 'Notes' found.
```

## Conclusion
The project demonstrates how a file system can be represented using a graph and how BFS and DFS can be used to traverse connected nodes and search for files.

## Author
Khadeeja Shajahan
