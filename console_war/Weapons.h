#include <iostream>
using namespace std;


static int count_weapons = 0;

class Weapon
{
public:
	int ammo_count;
	int damage;
	string name;
	virtual void fire() = 0;
	virtual void reload() = 0;
};

class Gun : public Weapon
{
public:
	void fire() override
	{
		//cout << "shoting" << endl;
	}
	void reload() override
	{
		//cout << "reloading" << endl;
	}
};

class Pistol : public Gun
{
public:
	Pistol(string name, const int &ammo, const int &damage)
	{
		this->ammo_count = ammo;
		this->damage = damage;
		this->name = name;
		count_weapons += 1;
	}
	void fire() override
	{
		cout << FIRE_FROM << "[" << name << "]" << FIRE_WITH_DAMAGE << damage << endl;
	}
	void reload() override
	{
		cout << RELOADING << "[" << name << "]" << endl;
	}
};

class SubmachineGun : public Gun
{
public:
	SubmachineGun(string name, const int& ammo, const int& damage)
	{
		this->ammo_count = ammo;
		this->damage = damage;
		this->name = name;
		count_weapons++;
	}
	void fire() override
	{
		cout << FIRE_FROM << "[" << name << "]" << FIRE_WITH_DAMAGE << damage << endl;
	}
	void reload() override
	{
		cout << RELOADING << "[" << name << "]" << endl;
	}
};

class Rifle : public Gun
{
public:
	Rifle(string name, const int& ammo, const int& damage)
	{
		this->ammo_count = ammo;
		this->damage = damage;
		this->name = name;
		count_weapons++;
	}
	void fire() override
	{
		cout << FIRE_FROM << "[" << name << "]" << FIRE_WITH_DAMAGE << damage << endl;
	}
	void reload() override
	{
		cout << RELOADING << "[" << name << "]" << endl;
	}
};

class SniperRifle : public Gun
{
public:
	SniperRifle(string name, const int& ammo, const int& damage)
	{
		this->ammo_count = ammo;
		this->damage = damage;
		this->name = name;
		count_weapons++;
	}
	void fire() override
	{
		cout << FIRE_FROM << "[" << name << "]" << FIRE_WITH_DAMAGE << damage << endl;
	}
	void reload() override
	{
		cout << RELOADING << "[" << name << "]" << endl;
	}
};

class ShotGun : public Gun
{
public:
	ShotGun(string name, const int& ammo, const int& damage)
	{
		this->ammo_count = ammo;
		this->damage = damage;
		this->name = name;
		count_weapons++;
	}
	void fire() override
	{
		cout << FIRE_FROM << "[" << name << "]" << FIRE_WITH_DAMAGE << damage << endl;
	}
	void reload() override
	{
		cout << RELOADING << "[" << name << "]" << endl;
	}
};

