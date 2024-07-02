#include<bits/stdc++.h>
#define ll long long
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;


void solve(){

    int n ;  cin>>n ;
    int arr[n] ;
    f(i,0,n) cin>>arr[i] ;

    for(int i=0;i<n;i++){

            int si = 0 ; int ei = i; int mid ;
            while(si<=ei){
                mid = (si+ei)/2 ;
                int required = i-mid+1;
                if(arr[mid]>=required){
                    ei=mid-1 ;
                }else {
                    si=mid+1 ;
                }


            }
            cout<<i-si+1<<" " ;


    }
    cout<<endl ;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t ; cin>>t ;
    while(t--){
        solve();
    }
}

