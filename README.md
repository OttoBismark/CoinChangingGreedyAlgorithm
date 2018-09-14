# CoinChangingGreedyAlgorithm
The change-making problem addresses the question of finding the minimum number of coins (of certain denominations) that add up to a given amount of money. It is a special case of the integer knapsack problem, and has applications wider than just currency.
It is also the most common variation of the coin change problem, a general case of partition in which, given the available denominations of an infinite set of coins, the objective is to find out the number of possible ways of making a change for a specific amount of money, without considering the order of the coins.
It is weakly NP-hard, but may be solved optimally in pseudo-polynomial time by dynamic programming.

# Greedy Method
A classic dynamic programming strategy works upward by finding the combinations of all smaller values that would sum to the current threshold.Thus, at each threshold, all previous thresholds are potentially considered to work upward to the goal amount W. For this reason, this dynamic programming approach may require a number of steps that is at least quadratic in the goal amount W.
