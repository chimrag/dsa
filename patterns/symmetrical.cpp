#include <iostream>
using namespace std;
int main(){
    int row =1;
    int col =1;
    for(int row=1; row<=5; row++){
        for(int col=1; col<=5; col++){
            if(col==1||col==5||row==1||row==5){
                cout<<"4";
            }
            else{                cout<<"3";
            }
        }
        cout<<endl;
    }
}