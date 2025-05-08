// C++ Language Method
// Difficulty : Medium 
class Solution {
  public:
    int findMissing(vector<int> &arr) {
        int start = 1, end = arr.size(), diff = 0;
        while ( start <= end - 2 )
        {
            diff = arr[start] - arr[start-1];
            if ( arr[start + 1] != arr[start] + diff )
            {
                return arr[start] + diff;
            }
            ++start;
        }
        return arr[start] + diff;
    }
};
