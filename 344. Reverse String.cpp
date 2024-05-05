class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        while(right >= left)
        {
            int tmp = s[right];
            s[right] = s[left];
            s[left] = tmp;
            right--;
            left++;
        }
    }
};