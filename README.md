# Shortest Chain Connection

This C++ program demonstrates finding the shortest chain connection between individuals in a network using graph theory and the Breadth-First Search (BFS) algorithm.

## Description

The program reads a list of connections from an input file and constructs a graph representing the network. It then finds the shortest chain connection between a source and destination using the BFS algorithm. The shortest path is printed as output.

## Usage

1. Compile the program.
2. Ensure the `input.txt` file is in the same directory as the compiled executable.
3. Run the program.

> Note: The program currently has the source and destination names hard-coded in the source code. If you want to modify the source and destination, you can modify the `source` and `destination` variables in the `shortest_chain_connection.cpp` file and recompile the program. Alternatively, you can modify the code to read the source and destination from user input or command line arguments.

## Output

If a chain connection exists between the source and destination, the program will output the shortest path. If no chain connection is found, a corresponding message will be displayed.

#### Sample Output
![image](https://github.com/YBansal95/shortest-chain-connection/assets/93127656/7db15e65-6efa-44cc-bf40-f0651df3e8a5)
