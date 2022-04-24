#include <iostream>
#include "Translator.h"
#include "Enemies.h"
#include "Weapons.h"
#ifndef WIN64
#define _bit "32"
#else
#define _bit "64"
#endif // !WIN64
#define SPACE cout << ":---------------------------------------:";
#define TITLE "NeWulla\'s game "
#define VERSION "v0.1.0 "
using namespace std;


class Player
{
public:
	void Fire(Weapon* weapon, MainEnemy *enemy)
	{
		weapon->fire();
		enemy->take_damage(weapon->damage);
		enemy->get_info();
	}
	void Reload(Weapon* weapon)
	{
		weapon->reload();
	}
};