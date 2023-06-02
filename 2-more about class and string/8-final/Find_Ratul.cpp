#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss<<s;
    string word;
    int con=0;
    while(ss >> word)
    { 
        if(word=="Ratul") con++;
    }
    if(con==0) cout<<"NO";
    else cout<<"YES";
    
    return 0;
}