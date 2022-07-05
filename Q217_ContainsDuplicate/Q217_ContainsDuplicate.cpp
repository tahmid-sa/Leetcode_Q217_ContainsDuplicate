#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> occurred;

    for (int i = 0; i < nums.size(); i++) {
        if (occurred.find(nums[i]) == occurred.end()) {
            occurred.insert(nums[i]);
        }
        else {
            return true;
        }
    }

    return false;
}

int main()
{
    vector<int> nums = { 1,1,1,3,3,4,3,2,4,2 };

    cout << containsDuplicate(nums);

    return 0;
}