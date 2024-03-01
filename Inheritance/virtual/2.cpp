#include<iostream>

using namespace std;

class Entity{
    public:
        string GetName(){
            return "Entity";
        }
};

class Player : public Entity{
    private:
        string m_Name;
    public:
        Player(const std::string& name)
            :m_Name(name){}
        
        string GetName()
            {
                return m_Name;
            }
};

int main(){
    Entity* e=new Entity();
    cout <<e->GetName() <<endl;

    Player* p=new Player("Abdulla");
    cout << p->GetName() << endl;
    //The new keyword returns a pointer to the allocated memory, which is assigned to the pointer variable p. 
    //This means that p now holds the memory address of the dynamically allocated Player object.

    
    return 0;
}