class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int highestGain = 0;
        int currentGain = 0;
        for (int i = 0; i < gain.size(); i++)
        {   
            currentGain += gain[i];
            if (highestGain <= currentGain)
            {
                highestGain = currentGain;
            }
        } 
        return highestGain;
    }
};