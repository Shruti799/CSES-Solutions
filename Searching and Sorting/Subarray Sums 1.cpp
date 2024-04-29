/*Given an array of n positive integers, your task is to count the number of subarrays having sum x.*/

#include<bits/stdc++.h>
using namespace std;
const int N1 = (int)2e5 + 100;
#define PI 3.14159265358979323846264338327
#define forn for(i=0;i<n;i++)
#define fornn for(i=1;i<=n;i++)
#define all(x) (x).begin(), (x).end()
#define f first
#define s second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define yes cout<<"YES"<<'\n';
#define no  cout<<"NO"<<'\n';
#define one  cout<<-1<<'\n';
#define nl  '\n';
typedef long long ll;


int main(){
    ll n,i,x,j,sum=0,ct=0;
    cin>>n>>x;
    ll a[n];
    forn cin>>a[i];

    i=0,j=0;
    while(i<n && j<n){
        sum += a[j];
        if(sum==x) ct++;
        while(sum>=x && i<=j){
            sum -= a[i];
            if(sum==x) ct++;
            i++;
        }
        j++;
    }

    cout<<ct<<nl

    return 0;
}