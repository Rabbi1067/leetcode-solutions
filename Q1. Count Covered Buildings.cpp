class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
    unordered_map<int, set<int>> rows, cols;
    for (auto& b : buildings) {
        rows[b[0]].insert(b[1]);
        cols[b[1]].insert(b[0]);
    }

    int count = 0;
    for (auto& b : buildings) {
        int x = b[0], y = b[1];
        auto it_row = rows[x].lower_bound(y);
        bool hasLeft = (it_row != rows[x].begin());
        bool hasRight = (++it_row != rows[x].end());
        auto it_col = cols[y].lower_bound(x);
        bool hasAbove = (it_col != cols[y].begin());
        bool hasBelow = (++it_col != cols[y].end());

        if (hasLeft && hasRight && hasAbove && hasBelow) {
            count++;
        }
    }
    return count;
}
    
};©leetcode
