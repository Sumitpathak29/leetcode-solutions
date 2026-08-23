class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        
        int h = height.size();
        int l = 0;
        int r = h-1;
        int leftmax = height[l];
        int rightmax = height[r];
        int res = 0;

        while(l<r){
            if (leftmax<rightmax){
                l +=1;
                leftmax = max(leftmax,height[l]);
                res += leftmax - height[l];
            } else{
                r -=1;
                rightmax = max(rightmax,height[r]);
                res += rightmax - height[r];
            }
        }
        return res;

       
        
    }
};
