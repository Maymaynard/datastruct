#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int m, n;
    cin>>n;
    int p[n][n];
    memset(p,0,sizeof(p));//初始所有元素为0
    m = n*n;
    int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0};//每一组dx，dy代表一个方向
    int x, y, i;
    x=y=i=0;
    while(m){
        p[x][y] = m;
        x += dx[i];
        y += dy[i];
        if(p[x][y]!=0||(x==0&&y==n)||(y==(n-1)&&x==n)||(x==-1&&y==(n-1))){//下一个已遍历过或超出数组大小
            x -= dx[i];//返回上一个
            y -= dy[i];
            i = (i+1)%4;//更改移动方向
            x += dx[i];
            y += dy[i];
        }
        m--;
    }
    for(int i=0; i<n; i++){//输出
        for(int j=0; j<n; j++)
            cout<<p[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}