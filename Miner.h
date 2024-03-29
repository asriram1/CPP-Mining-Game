#include "Cart_Point.h"
#include "Cart_Vector.h"
#include "Game_Object.h"
#include "Gold_Mine.h"
#include "Town_Hall.h"
#include "Person.h"

class Miner:public Person

{

public:
    Miner();
    Miner(int, Cart_Point);
    ~Miner();
    void take_hit(int attack_strength, Person *attacker_ptr);
    void show_status();
    void start_mining(Gold_Mine *, Town_Hall *);
    bool update();

private:

    double amount;
    Gold_Mine* mine;
    Town_Hall* home;
};
