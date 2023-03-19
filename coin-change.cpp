#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int coinChange(vector<int>& coins, int amount) {
    // create a vector to store the minimum number of coins needed for each amount
    vector<int> dp(amount + 1, INT_MAX);
    // we need 0 coins to make 0 change
    dp[0] = 0;
    
    // iterate over each coin
    for (int i = 0; i < coins.size(); i++) {
    
        // iterate over each amount from the coin value to the target amount
        for (int j = coins[i]; j <= amount; j++) {
        
            // find the minimum number of coins needed for this amount using the current coin
            if (dp[j - coins[i]] != INT_MAX) {
                dp[j] = min(dp[j], dp[j - coins[i]] + 1);
            }
        }
    }
    
    // if the target amount was not reachable, return -1
    if (dp[amount] == INT_MAX) {
        return -1;
    }
    
    // otherwise, return the minimum number of coins needed
    return dp[amount];
}

int main() {
    vector<int> coins = {1, 5, 10, 25};
    int amount = 63;
    
    int result = coinChange(coins, amount);
    
    cout << "Minimum number of coins needed: " << result << endl;
    
    return 0;
}
