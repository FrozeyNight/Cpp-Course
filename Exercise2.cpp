#include <iostream>

class Entity{
    public:
        int health;
        int strength;
        bool isAlive;
    
        Entity(int health, int strength, bool isAlive)
            : health(health), strength(strength), isAlive(isAlive) {}

        virtual void attack(){
            std::cout << "This entity is attacking!" << "\n";
        }

        void eat(){
            std::cout << "This entity is eating!" << "\n";
        }

        void sleep(){
            std::cout << "This entity is sleeping!" << "\n";
        }
};

class Player : public Entity{
    public:
        std::string name;
        int health;
        int strength;
        bool isAlive;

        Player(int health, int strength, bool isAlive, std::string name)
            : Entity(health, strength, isAlive), name(name) {}
        
        void talk(){
            std::cout << this->name << " is talking!" << "\n";
        }

        void attack() override{
            std::cout <<  this->name << " is attacking!" << "\n";
        }
};

int main(){
    
    Entity enemy(20, 5, true);
    Player player(100, 20, true, "Hero");

    enemy.attack();
    player.attack();
    player.talk();
    return 0;
}