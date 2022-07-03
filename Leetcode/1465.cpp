class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        int hM = horizontalCuts[0];
        int vM = verticalCuts[0];
        int i;
        
        for(i=1; i<horizontalCuts.size(); i++)
            hM = max(hM, horizontalCuts[i]-horizontalCuts[i-1]);
        hM = max(hM, h-horizontalCuts[i-1]);
        
        for(i=1; i<verticalCuts.size(); i++)
            vM = max(vM, verticalCuts[i]-verticalCuts[i-1]);
        vM = max(vM, w-verticalCuts[i-1]);
		
        return (1LL*hM*vM) % 1000000007;
    }
};