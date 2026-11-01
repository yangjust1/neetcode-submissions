class Solution {
public:
    bool isAnagram(string s, string t) {
        //start off with seeing if they are the same size
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
    }
};
