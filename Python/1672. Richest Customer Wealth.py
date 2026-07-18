class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        MaxWealth = 0
        Wealths= [0] * len(accounts)
        for i in range(len(accounts)):
            for j in range(len(accounts[i])):
                Wealths[i] = Wealths[i] + accounts[i][j]
        
        for i in range(len(Wealths)):
            MaxWealth = max(MaxWealth, Wealths[i])

        return MaxWealth