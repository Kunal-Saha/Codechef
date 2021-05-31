- 👋 Hi, I’m @Kunal-Saha
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...

<!---
Kunal-Saha/Kunal-Saha is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2)
             return 0;
        int mx=INT_MIN;
        int i=0;
        int j=1;
        int diff=0;
        while(j<nums.size())
        {
            diff = nums[j]-nums[i];
            if(diff>mx)
            {
                mx=diff;
            }
            i++;j++;
        }
        return mx;
        
    }
    
};

