class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = -1;
        int secondMax = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest)
                largest = arr[i];
        }

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != largest)
                secondMax = max(secondMax, arr[i]);
        }

        return secondMax;
    }
};