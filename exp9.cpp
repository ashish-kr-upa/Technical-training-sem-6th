#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Function to calculate the total cost of a tour
int calculateCost(const vector<vector<int>>& graph, const vector<int>& tour) {
    int cost = 0;
    int n = graph.size();
    for (int i = 0; i < n - 1; i++) {
        cost += graph[tour[i]][tour[i + 1]];
    }
    // Add the cost of returning to the starting city
    cost += graph[tour[n - 1]][tour[0]];
    return cost;
}

// Function to find the minimum cost using naive approach
int travelingSalesmanNaive(const vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<int> tour(n);
    for (int i = 0; i < n; i++) {
        tour[i] = i;
    }
    int minCost = INT_MAX;
    do {
        // Check if the current tour is a valid tour
        if (tour[0] == start) {
            int currentCost = calculateCost(graph, tour);
            minCost = min(minCost, currentCost);
        }
    } while (next_permutation(tour.begin() + 1, tour.end())); // Start from index 1
    return minCost;
}

int main() {
    // Define the graph as an adjacency matrix
    vector<vector<int>> graph = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };
    int startCity = 0; // Starting city index
    // Call the travelingSalesmanNaive function
    int minCost = travelingSalesmanNaive(graph, startCity);
    // Output the result
    cout << "Minimum cost of the tour: " << minCost << endl;
    return 0;
}
