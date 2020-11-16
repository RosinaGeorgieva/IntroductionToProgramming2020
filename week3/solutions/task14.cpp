#include<iostream>

using namespace std;

int main(){

    int number;
    cin >> number;

    // roof
    for(int i = 0; i < number; i++){
        for(int j = number - i - 1; j > 0; j--){
            cout << ' ';
        }
        cout << '/';
        for(int j = 0; j < i*2; j++){
            cout<< ' ';
        }
        cout << '\\' << endl;
    }

    for(int i = 0; i < number*2; i++){
        cout << '-';
    }
    cout << endl;

    // walls and floor
    for(int i = 0; i < number; i++){
        cout << '|';
        for(int j = 0; j < number*2-2; j++){
            cout << ' ';
        }
        cout << '|' << endl;
    }

    for(int i = 0; i < number*2; i++){
        cout << '=';
    }
    cout << endl;

    return 0;
}
