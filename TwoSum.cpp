#include <iostream>
#include <vector>

using namespace std;

class Solution { // força bruta
    public: 
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> indices;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(target == nums[i] + nums[j] && i != j ){
                    indices.push_back(i);
                }
            }
        }
        return indices;
    }
};
int main() {
    vector<int> nums{2, 7, 11, 15};
    int target = 9;

    Solution solution;
    vector<int> indices = solution.twoSum(nums, target);

    for (int index : indices) {
        cout << index << " ";
    }

    return 0;
}
