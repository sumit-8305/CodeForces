#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    
    long long count = nums[0]-1;
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i]<nums[i-1]){
            count += n - nums[i-1] + nums[i];
        }else{
            count += nums[i] - nums[i-1];
        }
    }
    cout << count << endl;

    return 0;
}