#include <iostream>
#include <vector>
using namespace std;

// Function to check if there exists a subset with the given sum
bool isSubsetSum(const vector<int>& set, int sum) {
    int n = set.size();
    vector<bool> dp(sum + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = sum; j >= set[i]; j--) {
            dp[j] = dp[j] || dp[j - set[i]];
        }
    }
    return dp[sum];
}

int main() {
    vector<int> set = {3, 34, 4, 12, 5, 2};
    int sum1 = 9;
    int sum2 = 30;
    // Check if there is a subset with sum = 9
    if (isSubsetSum(set, sum1))
        cout << "Subset with sum " << sum1 << " exists.\n";
    else
        cout << "Subset with sum " << sum1 << " does not exist.\n";
    // Check if there is a subset with sum = 30
    if (isSubsetSum(set, sum2))
        cout << "Subset with sum " << sum2 << " exists.\n";
    else
        cout << "Subset with sum " << sum2 << " does not exist.\n";
    return 0;
}
