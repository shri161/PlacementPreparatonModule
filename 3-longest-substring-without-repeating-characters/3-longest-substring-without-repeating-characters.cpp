class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        unordered_map<char,int>h;
        int mx=0;
        while(j<s.size())
        { 
            if(h.size()>(j-i))
            {
                h[s[j]]++;
                j++;
            }
            else
                if(h.size()==(j-i))
                {
                    if(mx<(j-i))
                        mx=j-i;
                      h[s[j]]++;
                    j++;
                }
            else
            {
                    h[s[i]]--;
                    if(h[s[i]]==0)
                    h.erase(s[i]);
                    i++;
            }
            if(j==s.size()&&h.size()==(j-i)&&mx<(j-i))
            {
                mx=j-i;
                break;
            }
        }
        return mx;
    }
};