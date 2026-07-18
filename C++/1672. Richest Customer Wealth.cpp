#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        vector<int> wealths(accounts.size(), 0);
        int maxWealth = 0;

        for(int i = 0; i < accounts.size(); i++){
            for(int j=0; j < accounts[i].size(); j++){
                wealths.at(i) = accounts[i][j] + wealths[i];
            }
        }
        for(int i = 0; i < wealths.size(); i++){
            maxWealth = max(maxWealth, wealths[i]);
        }

        return maxWealth;

    }
};

