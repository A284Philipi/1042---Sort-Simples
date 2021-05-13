#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a < b){
        if (a < c){
            if (b < c){
                cout << a <<endl<< b <<endl<< c <<endl;
            }else{
            cout << a <<endl<< c <<endl<< b <<endl;
            }
        }else{
        cout << c <<endl<< a <<endl<< b <<endl;
        }
    }
    if (b < a){
        if (b < c){
            if (a < c){
                cout << b <<endl<< a <<endl<< c <<endl;
            }else{
            cout << b <<endl<< c <<endl<< a <<endl;
            }
        }else{
        cout << c <<endl<< b <<endl<< a <<endl;
        }
    }
    cout <<endl<< a <<endl<< b <<endl<< c <<endl;
    return 0;
}
