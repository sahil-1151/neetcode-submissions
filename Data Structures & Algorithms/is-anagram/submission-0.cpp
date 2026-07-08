#include<string>
class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash_table[26];
        for(int i=0;i<26;i++){
            hash_table[i]=0;
        }
        if(s.length()-t.length() != 0)return false;
        for(int i=0;i<s.length();i++){
            hash_table[s[i]-97]++;
        }
        for(int i=0;i<t.length();i++){
            hash_table[t[i]-97]--;
        }
        for(int i=0;i<26;i++){
            if(hash_table[i] != 0)return false;
        }
        return true;
    }
};
