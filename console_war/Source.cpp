#include "Header.h"


int main()
{
	Translate("ru"); // ru, en, fr
	/*--------------------------------------- HEADER --------------------------------------------*/
	cout << TITLE << VERSION << _bit << endl << endl;
	/*--------------------------------------- PLAYER --------------------------------------------*/
	Gun* gun = new Gun;
	Player* ply = new Player;
	/*--------------------------------------- WEAPONS -------------------------------------------*/
	Pistol pm("Makarov", 8, 12);
	Pistol deagle("DEagle", 7, 35);
	SubmachineGun p90("P-90", 50, 6);
	SubmachineGun mp7("MP-7", 30, 8);	// (<name>, <ammo>, <damage>)
	ShotGun m3("M3", 5, 45);
	Rifle ak47("AK-47", 30, 23);
	Rifle scar("SCAR", 30, 34);
	SniperRifle awp("AWP", 10, 85);
	SniperRifle barrett("BARRETT", 10, 110);
	/*--------------------------------------- ENEMIES -------------------------------------------*/
	Mob cactus("Cactus", 50);
	Mob wizard("Wizard", 100);	// (<name>, <health>)
	Mob zombie("Zombie", 120);
	ProtectedMob huge_zombie("Zombie Giant", 200, .2);
	/*--------------------------------------- SHOOTING ------------------------------------------*/
	ply->Fire(&ak47, &zombie);
	ply->Fire(&ak47, &zombie);	// (<weapon>, <enemy>)
	ply->Fire(&awp, &wizard);
	for (int i = 0; i < 10; i++)
	{
		ply->Fire(&p90, &huge_zombie);
	}
	ply->Reload(&p90);			// (<weapon>)
	for (int i = 0; i < 10; i++)
	{
		ply->Fire(&p90, &huge_zombie);
	}
	ply->Fire(&deagle, &cactus);
	/*------------------------------------- FOOTER RESULTS --------------------------------------*/
	SPACE
	cout << ALL_GUNS << count_weapons << endl;
	cout << ALL_DAMAGE << allDamage << endl;
	return 0;
}

/*
* [RUS]
* 
* Игра без смысла, простая демонстрация некоторых специфик
* в ООП языка С++. Изначально игра создавалась с этой целью.
* Позже у меня появился интерес в ее развитии и я стал ее
* дорабатывать. Как итог можно увидеть текущую версию консольной
* игры.
* 
* Автор:						Никита (NeWulla) aka (Ya_Admin) aka (WonneS)
* Дата создания:				21 апреля 2022 года
* Дата последнего обновления:	24 апреля 2022 года
* 
* Исходный код программы открыт и распрастраняется без авторсокго права.
* 
* Спасибо за внимание!
* 
*/

/*
* [ENG]
*
* A game without meaning, a simple demonstration of some specifics
* in the OOP of the C++ language. Initially, the game was created for this purpose.
* Later I got interested in her development and I became her
* to refine. As a result, you can see the current version of the console
* games.
*
* Author:				Nikita (NeWulla) aka (Ya_Admin) aka (WonneS)
* Date of creation:		April 21, 2022
* Last updated:			April 24, 2022
*
* The source code of the program is open and distributed without copyright.
*
* Thanks for your attention!
*
*/