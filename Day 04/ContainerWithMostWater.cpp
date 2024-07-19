// TakeAways : 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=-1;
        int l(0), h(height.size() -1);
        while(l<h){
            int minn = min(height[l],height[h]);
            int a = (h-l)*minn;
            area = max(area, a);
            if(height[l] >= height[h]){
                h--;
            }
            else{
                l++;
            }
        }
        return area;
        
    }
};