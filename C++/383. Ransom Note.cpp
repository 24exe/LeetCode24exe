#include <iostream>
#include <vector>
#include<unordered_map>

using namespace std;


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> HashCounterOfMagazine;

        for(char c: magazine){
            HashCounterOfMagazine[c]++;
        }

        for (char c: ransomNote){
            if(HashCounterOfMagazine[c] <= 0){
                return false;
            }
            HashCounterOfMagazine[c]--;
        }
        
        return true;
    }    
};