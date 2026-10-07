class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char,int> mp1;
    unordered_map<char,int> mp2;
     if(t.size()!=s.size())
      return false;
    for (int i=0;i<s.size();i++){
        mp1[t[i]]++;
        mp2[s[i]]++;
    }
      if(mp1==mp2)
       return true;
      else 
      return false;
    }
};