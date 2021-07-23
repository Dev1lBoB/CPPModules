#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	name = "Default";
	title = "Sorcerer";
}

Sorcerer::Sorcerer(std::string Name, std::string Title)
{
	std::cout << Name << ", " << Title << ", is born!" << std::endl;
	name = Name;
	title = Title;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &mage)
{
	*this = mage;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &mage)
{
	name = mage.name;
	title = mage.title;
	return *this;
}

std::string Sorcerer::getName(void)
{
	return (name);
}

std::string Sorcerer::getTitle(void)
{
	return (title);
}

void Sorcerer::polymorph(Victim const &vica)
{
	vica.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer &mage)
{
	out << "I am " << mage.getName() << ", " << mage.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}
