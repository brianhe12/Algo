#include <iostream>
using namespace std;

class Enemy
{	
protected: 
	int attackpower = 20;
public:
	void setAttackPower(int a)
		{
			attackpower = a;
		}
};

class Ninja: public Enemy
{
	public:
		void attack()
		{
			cout << "I am a Ninja. I attack for " << attackpower << " attack power" << endl;			
		}

};

class Monster: public Enemy
{
	public:
		void attack()
		{
			cout << "I am a Monster. I attack for " << attackpower << " attack power" << endl;			
		}

};	

int main()
{

Ninja n;
Monster m;
Enemy *a = &n;
Enemy *b = &m;



a->setAttackPower(25);
b->setAttackPower(35);

n.attack();
m.attack();











}