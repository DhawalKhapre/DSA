class Solution {
public:
    static bool cmp(vector<int> v1, vector<int> v2) {
        return v1[1]>v2[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), cmp);
        
        int ans = 0;
        
        for(int i=0; i<boxTypes.size(); i++)  {
            if(boxTypes[i][0] < truckSize)    {
                ans += (boxTypes[i][0] * boxTypes[i][1]);
                truckSize -= boxTypes[i][0];
            }
            
            else    {
                ans += (truckSize * boxTypes[i][1]);
                break;
            }
        }
        
        return ans;
    }
};