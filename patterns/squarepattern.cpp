#include <iostream>
using namespace std;
int main(){
    int row =1;
    int col =1;
    for(row =1;row<=5; row++){
        for(col=1; col<=5; col++ ){
            if(col==1||col==5||row==1||row==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}