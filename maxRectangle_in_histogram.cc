class Solution {
private:
vector<int> nextSmallerElement(vector<int> arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){ //change here too as width cannot be -1
            s.pop();
        }
        ans[i]=s.top();
        s.push(i); //change here
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr){ //change here too as width cannot be -1
            s.pop();
        }
        ans[i]=s.top();
        s.push(i); //change here
    }
    return ans;
}
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        
        vector<int> next(n);
        next=nextSmallerElement(heights,n);

        vector<int> prev(n);
        prev=prevSmallerElement(heights,n);

        int area=INT_MIN;
        for(int i=0;i<n;i++){
            int l=heights[i];
            

            if(next[i]==-1){
                next[i]=n;
            }

            int width=next[i]-prev[i]-1;  //edge case -1 +1 -1 = -1 width not possible 
            int newArea=l*width;
            area=max(area,newArea);
        }
        return area;
    }
};
