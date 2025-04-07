class Solution {
public:
    void merge(vector<int>& a, int start, int mid, int end) {
        vector<int> temp;
        int i = start, j = mid + 1;
        while (i <= mid && j <= end) {
            if (a[i] <= a[j]) {
                temp.push_back(a[i++]);
            } else {
                temp.push_back(a[j++]);
            }
        }
        while (i <= mid) temp.push_back(a[i++]);
        while (j <= end) temp.push_back(a[j++]);

        for (int idx = 0; idx < temp.size(); idx++) {
            a[start + idx] = temp[idx]; // Make sure to offset by 'start'
        }
    }

    void mergesort(vector<int>& a, int start, int end) {
        if (start < end) {
            int mid = start + (end - start) / 2;
            mergesort(a, start, mid);
            mergesort(a, mid + 1, end);
            merge(a, start, mid, end);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};
