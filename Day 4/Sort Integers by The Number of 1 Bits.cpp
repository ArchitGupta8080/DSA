/*Given an integer array arr. 
You have to sort the integers in the array in ascending order by the number of 1's in their binary representation and
in case of two or more integers have the same number of 1's you have to sort them in ascending order.

Return the sorted array.*/

class Solution {
public:
    bool static comparator(int x, int y)
    {
        int bits1, bits2;
        bits1=__builtin_popcount(x);
        bits2=__builtin_popcount(y);
        if(bits1==bits2) return x<y;
        else return bits1<bits2;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comparator);
        return arr;
    }
};