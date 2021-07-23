#include "Enemy.hpp"

Enemy::Enemy(void){}

Enemy::Enemy(int Hp, std::string const &Type)
{
	hp = Hp;
	type = Type;
}

Enemy::~Enemy(){}

Enemy::Enemy(Enemy const &enemy)
{
	*this = enemy;
}

Enemy &Enemy::operator=(Enemy const &enemy)
{
	type = enemy.type;
	hp = enemy.hp;
	return *this;
}

std::string Enemy::getType(void) const
{
	return type;
}

int Enemy::getHP(void) const
{
	return hp;
}

void Enemy::takeDamage(int dmg)
{
	if (dmg <= 0)
		return ;
	hp -= dmg;
}
