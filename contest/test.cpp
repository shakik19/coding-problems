#include <bits/stdc++.h>
using namespace std;

int pre(string str) {
    int len = str.size();
    vector<int> v(len,0);

    for(int i=1; i<len; i++) {
        int j = v[i-1];
        while(j>0 && str[i]!=str[j]) j = v[j-1];
        if(str[i]==str[j]) j++;
        v[i] = j;
    }
    return v[len-1];
}


int main()
{
    int n;
    string str = "";
    cin>>n;
    while(n--)
    {
        int q;
        string s;
        cin>>q;
        if(q==0)
        {
            cin>>s;
            str+=s;
        }
        else
        {
        	    int len = str.size();
    vector<int> v(len,0);

    for(int i=1; i<len; i++) {
        int j = v[i-1];
        while(j>0 && str[i]!=str[j]) j = v[j-1];
        if(str[i]==str[j]) j++;
        v[i] = j;
    }
            int res = str.size() - pre(str);
            cout<<res<<endl;
        }

    }
}