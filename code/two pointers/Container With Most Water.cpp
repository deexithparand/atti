class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0, right=heights.size()-1, max_area=INT_MIN;

        while(left<right){
            int breadth=right-left, height=min(heights[left],heights[right]);
            int area = height * breadth;
            max_area = max(max_area, area);

            if(heights[left]<heights[right]){
                left++;
            } else {
                right--;
            }
        }

        return max_area;
    }
};