#pragma once
#include <string>

using namespace std;

class Character
{
private:
	int _hp;
	int _atk;
	int _def;

public:
	int hp() { return _hp; }
	int atk() { return _atk; }
	int def() { return _def; }

public:
	void setHP(int value) { _hp = value; }
	void setATK(int value) { _atk = value; }
	void setDEF(int value) { _def = value; }
};

/*
* có 4 loại nhân vật:
* kiếm sĩ: swordman
* kị sĩ: knight
* cung thủ: archer
* pháp sư: mage
*/

class Interactive
{
	virtual void hitByKnight(Knight* knight) = 0;
	virtual void hitBySwordman(Swordman* swordman) = 0;
	virtual void hitByArcher(Archer* pike) = 0;
	virtual void hitByMage(Mage* pike) = 0;
};

class Swordman : public Character, public Interactive
{
private:
	int buffATKwithARCHERS;
	int buffDEFwithARCHER;

public:

};

class Knight : public Character, public Interactive
{
private:
	int buffATKwithSWORDMAN;
	int buffDEFwithARCHERS;

public:

};

class Archer : public Character, public Interactive
{
private:
	int buffATKwithSWORDMAN;
	int buffDEFwithARCHERS;

public:

};

class Mage : public Character, public Interactive
{
private:
	int buffATKwithSWORDMAN;
	int buffDEFwithARCHERS;

public:

};