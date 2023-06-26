// Shortest Chain Connection
// Author: Yashwini Bansal

#include <bits/stdc++.h>
using namespace std;


vector<string> shortestChainConnection(map<string, unordered_set<string>>& graph, string& source, string& destination)
{
    queue<pair<string, vector<string>>> q;
    unordered_set<string> visited;

    q.push({source, {source}});
    visited.insert(source);

    while (!q.empty())
    {
        string person = q.front().first;
        vector<string> path = q.front().second;
        q.pop();

        if (person == destination)
            return path;

        for (string connection: graph[person])
        {
            if (visited.find(connection) == visited.end())
            {
                vector<string> new_path = path;
                new_path.push_back(connection);
                q.push({connection, new_path});
                visited.insert(connection);
            }
        }
    }

    return {};
}


int main() 
{
    ifstream inputFile("input.txt");
    if (!inputFile)
    {
        cerr << "Failed to open the input file.\n";
        return 1;
    }

    int n;
    inputFile >> n;

    map<string, unordered_set<string>> graph;

    for (int i = 0; i < n; i++)
    {
        string person1, person2;
        inputFile >> person1 >> person2;

        graph[person1].insert(person2);
        graph[person2].insert(person1);
    }

    // Define source and destination persons
    string source = "Shaurya";
    string destination = "Sanya";

    // Find the shortest chain connection
    vector<string> shortestPath = shortestChainConnection(graph, source, destination);

    // Print the shortest path
    if (!shortestPath.empty()) 
    {
        cout << "Shortest chain connection from " << source << " to " << destination << ":\n";
        for (int i = 0; i < shortestPath.size() - 1; i++)
            cout << shortestPath[i] << " -> ";
        cout << destination << '\n';
    } 
    else
        cout << "No chain connection found between " << source << " and " << destination << ".\n";

    return 0;
}
