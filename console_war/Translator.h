#include <iostream>
using namespace std;


string ABOUT_DAMAGE;
string ABOUT_DAMAGE_THROUGH;
string INFO;
string FIRE_FROM;
string FIRE_WITH_DAMAGE;
string RELOADING;
string ALL_GUNS;
string ALL_DAMAGE;


void Translate(string Language)
{
	if (Language == "ru")
	{
		setlocale(LC_ALL, "ru");
		ABOUT_DAMAGE = " получил урон ";
		ABOUT_DAMAGE_THROUGH = " получил урон через защиту ";
		INFO = "Здоровье ";
		FIRE_FROM = "Выстрел из ";
		FIRE_WITH_DAMAGE = " с уроном ";
		RELOADING = "Перезарядка ";
		ALL_GUNS = "\nВсего оружий было создано: ";
		ALL_DAMAGE = "Всего урона было нанесено: ";
	}
	else if (Language == "en")
	{
		setlocale(LC_ALL, "en");
		ABOUT_DAMAGE = " received damage ";
		ABOUT_DAMAGE_THROUGH = " received damage through protection ";
		INFO = "Health ";
		FIRE_FROM = "Shot from ";
		FIRE_WITH_DAMAGE = " with damage ";
		RELOADING = "Reloading ";
		ALL_GUNS = "\nTotal guns were created: ";
		ALL_DAMAGE = "Total damage was done: ";
	}
	else if (Language == "fr")
	{
		setlocale(LC_ALL, "fr-FR");
		ABOUT_DAMAGE = " a subi des degats ";
		ABOUT_DAMAGE_THROUGH = " a subi des degats grace a la defense ";
		INFO = "Santa ";
		FIRE_FROM = "Tir de ";
		FIRE_WITH_DAMAGE = " avec des degats ";
		RELOADING = "Recharge ";
		ALL_GUNS = "\nTotal de canons a ete cree: ";
		ALL_DAMAGE = "Tous les degats ont ete causes: ";
	}
}