#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    int num;
    

    for(int i=0; i<t; i++){
        cin>>n;
        int score=0;
        for(int j=0; j<n; j++){
            cin>>num;
            score+=num;
        }
        cout<<score<<endl;
    }
    
    


    return 0;
    
}