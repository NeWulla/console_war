#include <iostream>
using namespace std;


static int allDamage = 0;

class MainEnemy
{
public:
	virtual void about_damage(const int& dmg) = 0;
	virtual void take_damage(const int& d) = 0;
	virtual void get_info() = 0;
};

class Enemy : public MainEnemy
{
protected:
	string name;
	int health;
public:
	void about_damage(const int& dmg) override
	{

	}
	void take_damage(const int &d) override
	{

	}
	void get_info() override
	{

	}
};

class Mob : public Enemy
{
	void about_damage(const int& dmg) override
	{
		cout << "[" << name << "]" << ABOUT_DAMAGE << dmg << endl;
	}
public:
	Mob(string name, const int &hp)
	{
		this->name = name;
		this->health = hp;
	}
	void take_damage(const int& d) override
	{
		this->health -= d;
		allDamage += d;
		about_damage(d);
	}
	void get_info() override
	{
		cout << INFO << "[" << name << "] = " << health << endl << endl;
	}
};

class ProtectedMob : public Enemy
{
	double protect;
	void about_damage(const int& dmg) override
	{
		cout << "[" << name << "]" << ABOUT_DAMAGE_THROUGH << dmg << endl;
	}
public:
	ProtectedMob(string name, const int& hp, const double &protect)
	{
		this->name = name;
		this->health = hp;
		(protect >= 0 && protect <= 1) ? (this->protect = protect) : this->protect = 0.25;
	}
	void take_damage(const int& d) override
	{
		this->health -= (d - (d * protect));
		allDamage += (d - (d * protect));
		about_damage((d - (d * protect)));
	}
	void get_info() override
	{
		cout << INFO << "[" << name << "] = " << health << endl << endl;
	}
};