
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n = 4;

    int cost[4][4] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int cities[3] = {1, 2, 3};
    int minCost = INT_MAX;

    do {
        int currentCost = 0;
        int currentCity = 0;

        // Visit each city in the current route
        for (int i = 0; i < n - 1; i++) {
            currentCost += cost[currentCity][cities[i]];
            currentCity = cities[i];
        }

        // Return to the starting city
        currentCost += cost[currentCity][0];

        minCost = min(minCost, currentCost);

    } while (next_permutation(cities, cities + n - 1));

    cout << "Minimum travelling cost: "
         << minCost << endl;

    return 0;
}

