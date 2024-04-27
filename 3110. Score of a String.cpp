class Solution {
public:
    int scoreOfString(string s) {
        int length = s.length();
        int counter = 0;
        for (int i = 0; i < length - 1; i++) {
            counter += abs(s[i + 1] - s[i]);
        }
        return counter;
    }
};