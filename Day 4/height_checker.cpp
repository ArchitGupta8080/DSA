/*A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height.
Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.
*/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> exp=heights;
        sort(exp.begin(), exp.end());
        int c=0, i=0;
        for(auto h:heights)
        {
            if(exp[i++]!=h)
                c++;
        }
        return c;
    }
};