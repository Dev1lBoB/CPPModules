#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>

class Enemy
{
	public:
		Enemy();
		Enemy(int, std::string const &);
		Enemy(Enemy const &);
		Enemy &operator=(Enemy const &);
		virtual ~Enemy();
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int);
	protected:
		std::string type;
		int hp;
};
#endif
