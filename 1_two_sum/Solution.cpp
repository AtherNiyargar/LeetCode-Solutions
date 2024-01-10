// #include <iostream>
// #include <vector>
// using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int> &nums, int target){
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums.at(i) + nums.at(j) == target){
                    return vector<int>{i, j};
                }
            }
        }
        return vector<int>();
    }
};

// int main()
// {
//     vector <int> vctr{1,2,3,4,5}, result;
//     Solution obj;
//     result = obj.twoSum(vctr, 9);
//     for (auto i = result.begin(); i != result.end(); i++) {
//         std::cout << *i << " ";
//     }
//     return 0;
// }
