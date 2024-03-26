#include <iostream>

class hi{
    protected:
        int x=6;
    public:
        print(){
            std::cout << this->x << std::endl;
            std::cout << this->z << std::endl;
        }
        int y;
    private:
        int z=7;
};

int main(){
    hi ko;
    ko.print();
}