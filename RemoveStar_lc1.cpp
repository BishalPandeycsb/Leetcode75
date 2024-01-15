#include<bits/stdc++.h>
#include <stack>
class Solution {
public:
    string removeStars(string s) {
        stack <char> st;
        string s1;
        vector<char> v;
        for(int i=0;i<s.length();i++)
        {
            if(s.at(i)=='*')
            {
              st.pop();

            }
            else
            {
                st.push(s.at(i));
            }
        }
         while (!st.empty())
         {
        v.push_back(st.top());
        st.pop();
         }

        for(int i=v.size()-1;i>=0;i--)
        {
            s1=s1+v[i];
        }
        return s1;
    }
};
