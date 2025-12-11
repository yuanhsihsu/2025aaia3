class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while ( ss >> word)
        {
            ///裡面什麼都不做
        }
        return word.length();
    }
};
