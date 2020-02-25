#include <iostream>
using namespace std;
int main() {
    int n, sum ;
    cin>>n;
    int fun(int x);
    cout<<fun(n);
    return fun(n);
}
int fun(int x){
    if(x==1)
        return 1;
    if(x>1)
        return x*fun(x-1);
    return -1;
}
