// C++ Methods
// Difficulty : Easy
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        for ( int i=1; i<arr.size();++i)
        {
            if (arr[i-1] > arr[i])
            {
                return arr[i-1];
            }
        }
        return arr[arr.size()-1];
    }
};
