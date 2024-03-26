#include <iostream>

using namespace std;

namespace first_space{
    void func(){
        cout << "Inside first space" << endl;
    }
}

namespace second_space{
    void func(){
        cout << "Inside second space" << endl;
    }
}

using namespace second_space;
int main(){
    func();   // ?To call the func() inside second_space
    first_space::func();    // ?To call the func() inside first_space

    cout << "Hi" << endl;
    first_space::func();
    second_space::func();
}