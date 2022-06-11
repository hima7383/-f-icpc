#include <bits/stdc++.h>
#define ll long long
//freopen("machines.in", "r", stdin);
//freopen("output.txt", "w", stdout);
#define far(b) for(int i = 0 ; i <b;i++)
#define hima ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL);
#define N '\n'
#define st sort(v.begin(),v.end());
#define MOD int(1e9+7)
using namespace std;
/*struct var{

string s;
int num;
string nm;

};

bool comp(var j,var k){
if(j.nm[0]<k.nm[0]){return j.nm<k.nm;}
else if(j.nm==k.nm){
   far(8){if(j.s[i]-'0'<k.s[i]-'0')return j.s<k.s;}
        if(j.s==k.s){if(j.num>k.num)return j.num<k.num;}

}

}*/
int main()
{hima
 //freopen("erase.in", "r", stdin);

int n;cin>>n;ll cnt=0;
vector<int>v(n);map<int,int>freq;
far(n){
cin>>v[i];
}st
far(v.size())
    { if(!freq[v[i]]){
for(int j =v[i];j<=v[n-1];j+=v[i]){//cout<<j<<endl;
    if(j%v[i]==0){freq[j]=1;/*for(auto x:freq){cout<<x.first<<" "<<x.second<<endl;}*/}
}

cnt++;
    }
}

cout<<cnt;

/*int t;cin>>t;while(t--){
int n;cin>>n;vector<var>v(n);
far(n){
cin>>v[i].num>>v[i].s>>v[i].nm;
}
sort(v.begin(),v.end(),comp);
far(n){cout<<v[i].num<<" "<<v[i].s<<" "<<v[i].nm<<endl;}

}*/


 }





