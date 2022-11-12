#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //n보다 작은 정수 사용
    int num;
    int sum=0;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        sum+=i;            //n아래의 숫자 다 더하기(n-1개)
    }

    for(int i=0; i<n; i++){
        cin>>num;
        sum-=num;           //중복되지 않은 것들 빼고나면 중복된 숫자만 음수값으로 나옴.
    }

    sum*=-1;
    cout<<sum;      

    return 0;
}