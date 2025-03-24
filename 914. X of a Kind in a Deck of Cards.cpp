class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if (deck.size() < 2) return false;

        unordered_map<int, int> freq;
        for (int card : deck) {
            freq[card]++;
        }

        int gcdValue = 0;
        for (auto it : freq) {
            gcdValue = gcd(gcdValue, it.second);
        }

        return gcdValue > 1;
    }
};
