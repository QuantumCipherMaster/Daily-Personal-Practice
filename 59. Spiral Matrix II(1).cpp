class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n, vector(n, 0));
        int startx = 0, starty = 0;
        int loop = n / 2;
        int mid = n / 2;
        int count = 1;
        int offset = 1;
        int i, j;
        while (loop--) {
            i = startx;
            j = starty;

            for (j; j < n - offset; j++) {
                res[i][j] = count++;
            }
            for (i; i < n - offset; i++) {
                res[i][j] = count++;
            }
            for (; j > starty; j--) {
                res[i][j] = count++;
            }
            for (; i > startx; i--) {
                res[i][j] = count++;
            }

            startx++;
            starty++;

            offset += 1;
        }
        if (n % 2) {
            res[mid][mid] = count;
        }
        return res;
    }
};