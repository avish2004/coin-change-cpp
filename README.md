# coin-change-cpp

the coin change problem solved in C++


This program uses dynamic programming to solve the coin change problem. 
It creates a vector to store the minimum number of coins needed for each amount from 0 to the target amount. 
It then iterates over each coin and each amount from the coin value to the target amount, and updates the minimum number of coins needed for each amount using the current coin if it results in a smaller number of coins.
Finally, it returns the minimum number of coins needed for the target amount. 
If the target amount is not reachable, it returns -1.

--thank you--
