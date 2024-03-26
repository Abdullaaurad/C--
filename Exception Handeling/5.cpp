#include <iostream>

using namespace std;

int main(){
    try{
        throw 'a';
    }
    catch(int x){
        cout << "Caught" << x << endl;
    }
    catch(...){
        cout << "Caught all" << endl;
    }
    return 0;
}