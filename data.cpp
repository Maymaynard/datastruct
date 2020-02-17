#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    char *p =new char[n+1];
    for(int i=0; i<n; i++){
        cin>>p[i];
        if(p[i]>='A' && p[i]<='Z')
            p[i] = p[i]+'a'-'A';
        else if(p[i]>='a' && p[i]<='z')
            p[i] = p[i]-'a'+'A';
    }
    for(int i=0;i<n;i++)
        cout<<p[i];
    cout<<endl;
    delete p;
    return 0;
}