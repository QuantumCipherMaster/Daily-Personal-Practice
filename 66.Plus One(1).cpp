class Solution {
private:
    vector<int> upbit(vector<int>& digits, int k) {
        if(digits[k] != 9){
            digits[k]++;
        }
        else
        {
            digits[k] = 0;
            if (k == 0){
                digits.insert(digits.begin(),1);
            }
            else
            {
                upbit(digits, k-1);
            }
        }
        return digits;

    }
public: 
    vector<int> plusOne(vector<int>& digits) {
        int endnums = digits.size() - 1;
        return upbit(digits,endnums);
    }
};