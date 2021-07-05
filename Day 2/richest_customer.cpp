/*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. 
Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. 
The richest customer is the customer that has the maximum wealth.
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = 0, result;
        for(auto i :accounts){
            result = 0;
            for(int j : i)
                result +=j;
            n = max(result,n);
        } 
        return n;
    }
};