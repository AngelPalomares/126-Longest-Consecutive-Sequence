class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Create a unordered set
        unordered_set<int>set(nums.begin(), nums.end());
        //Gets the longest set
        int longest = 0;
        for(auto &n: set){
            //if this is the start of the sequence
            if(!set.count(n - 1)){
                int length = 1; 
                while(set.count(n + length))
                    ++length;
                longest = max(longest, length);
            } 

        }
        return longest;
    }
};
