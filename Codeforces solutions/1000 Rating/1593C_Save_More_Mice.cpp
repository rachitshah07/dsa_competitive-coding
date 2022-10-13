#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define vi vector<int>
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
int main()
{
   int t;
   cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vi a(k),d(k);
        for(auto &x:a) cin>>x;
        sort(all(a));
        reverse(all(a));
        int cat=1,count=0;
        for(int i=0;i<k;i++){
            if(a[i]>=cat){
                count++;
                cat += (n-a[i]);
            }
            else break;
     }
     cout<<count<<endl;
    }
}
