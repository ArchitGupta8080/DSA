/*International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:
 "a" maps to ".-", "b" maps to "-...", "c" maps to "-.-.", and so on.

Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter.
 For example, "cab" can be written as "-.-..--...", (which is the concatenation "-.-." + ".-" + "-..."). We'll call such a concatenation, the transformation of a word.

Return the number of different transformations among all words we have.*/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string code[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        string str;
        for(auto i:words)
        {
            str="";
            for(auto c:i)
            {
                str=str+code[int(c)-97];
            }
            s.insert(str);
        }
        return s.size();
    }
};