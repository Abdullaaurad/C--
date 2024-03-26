#include <iostream>

using namespace std;

int main(){
    try{
        throw 'a';
    }
    catch(char x){
        cout << "Caught =" << x << endl;
    }
    try{
        throw 'b';
    }
    catch(char x){
        cout << "Caught =" << x << endl;
    }
    //catch(...){
    //    cout << "Caught all" << endl;
    //}
    return 0;
}