class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int area;
        int max_water=0;
        while(i<j){
             area=min(height[i],height[j]) * (j-i);
             
            
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
             max_water=max(max_water,area);
           
        }
        return max_water;
    }
};











//this soln logic is correct but gives TLE because of O(N^2)

/*class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int max_water=INT_MIN;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                 area=min(height[i],height[j]) * (j-i);
                 max_water=max(max_water,area);
            }
            
        }
        return max_water;
    }
};*/