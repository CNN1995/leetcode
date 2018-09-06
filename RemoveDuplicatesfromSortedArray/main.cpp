#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len == 0 || len == 1){
            return len;
        }
        int left = 0;
        int right = 0;
        int k = 0;
        while(++k <= len){
           if(nums[right] == nums[left]){
            right++;
           }else{
            nums[++left] = nums[right++];
           }
     }
        return left+1;
        }
};
int main()
{
    vector<int> nums;
        nums.push_back(1);
         nums.push_back(1);
          nums.push_back(2);
            // cout<< nums[0];
       // cout<<nums[1];
       //    nums.push_back(8);
    Solution solution;
    int len = solution.removeDuplicates(nums);
  //   int len = removeDuplicates(nums);
    cout<<len<<endl;
    for(int i = 0; i < len; i++){
        cout<< nums[i];
    }
    cout << "Hello world1!"<< endl;
    return 0;
}
