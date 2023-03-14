#include<bits/stdc++.h>
using namespace std;

void printDivisor(int n){
    vector<int> ls;
    //for(int i=1; i<=sqrt(n); i++){   //another way using square root
                                       // O(sqrt(n))
    for(int i=1; i*i <= n; i++){
        if(n % i == 0){
            ls.push_back(i);
            if((n / i) != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());         //O(no of factors * log(no of factors))
    for(auto it : ls) cout << it << " ";    //O(no of factors)
}

int main(){
    int n;
    cin >> n;
    printDivisor(n);
    return 0;
}