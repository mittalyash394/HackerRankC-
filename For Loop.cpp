#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int index, value_1, value_2;
    // Complete the code.
    cin >> value_1 >> value_2;
    for(index=value_1; index<=value_2; index++){
        if(index==1){
            cout << "one"<<endl;
        }
        else if(index==2){
            cout << "two"<<endl;
        }
        else if(index==3){
            cout << "three"<<endl;
        }
        else if(index == 4){
            cout << "four"<<endl;
        }
        else if(index==5){
            cout << "five"<<endl;
        }
        else if(index ==6){
            cout << "six" <<endl;
        }
        else if(index==7){
            cout << "seven" <<endl;
        }
        else if(index ==8 ){
            cout << "eight"<<endl;
        }
        else if(index==9){
            cout << "nine"<<endl;
        }
        else if(index >9){
            if(index%2==0){
                cout << "even"<<endl;
            }
            else{
                cout << "odd"<<endl;
            }
        }
    }
    return 0;
}
