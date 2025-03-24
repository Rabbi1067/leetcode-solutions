class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        if (w == 0) return 0; // Avoid division by zero
        int totalCells = n * n;
        int maxPossibleContainers = maxWeight / w;
        return min(totalCells, maxPossibleContainers);
    }
};
