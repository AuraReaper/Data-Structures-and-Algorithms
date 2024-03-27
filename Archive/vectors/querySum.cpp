// given an array of size n answer q queries where you need to print the sum of elements in range [l,r] 
//using prefix sum
// following array with 1 base index
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> v(n+1);
    v[0]=0;
    cout<<"Enter the elements of the array\n";
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int j=1;j<=n;j++){
        v[j] += v[j-1]; //calculating prefix sum
    }
    int q;
    cout << "enter number of queries\n";
    cin >>q;
    while (q--)
    {
        int l,r;
        cout << "enter l and r: ";
        cin>>l>>r;
        cout<<v[r]-v[l]<<endl;
    }
    
    return 0;
}
