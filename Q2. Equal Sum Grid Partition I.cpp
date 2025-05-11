#include <vector>
using namespace std;

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size();
        if (m == 0) return false;
        int n = grid[0].size();
        
      
        long long total = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                total += grid[i][j];
            }
        }
        
     
        if (total % 2 != 0) return false;
        long long half = total / 2;
        
     
        long long rowSum = 0;
        for (int i = 0; i < m - 1; ++i) {
            for (int j = 0; j < n; ++j) {
                rowSum += grid[i][j];
            }
            if (rowSum == half) {
                return true;
            }
          
        }
        
     
        long long colSum = 0;
        for (int j = 0; j < n - 1; ++j) {
            for (int i = 0; i < m; ++i) {
                colSum += grid[i][j];
            }
            if (colSum == half) {
                return true;
            }
          
        }
        
        return false;
    }
};©leetcode
