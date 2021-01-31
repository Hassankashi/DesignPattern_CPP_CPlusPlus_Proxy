/*
 * C++ Design Patterns: Proxy
 * Author: Mahsa Hassankashi [github.com/Hassankashi]
 * 2016
 *
 * Source code is licensed under MIT License
 * (for more details see LICENSE)
 *
 */

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

class Entity
{
public:
	virtual ~Entity() { }

	virtual void Show(char name) = 0;

};

class RealEntity : public Entity
{

public:
	 void  Show(std::string name)
	{
		std::cout << "Showing " + name << std::endl;
	}
};


class Proxy : public Entity
{
public:
	Proxy()
	{
		 entity = new RealEntity();
		//ssubject = new RealEntity();
	}

	//std::string myints[] ;
	std::list<std::string> protectedEntities{
		"Class_A",
		"Class_H",
		"Class_G",
		"Class_P"
	};

	void *Show(std::string name)
	{
		if (std::find(std::begin(protectedEntities), std::end(protectedEntities), name) != std::end(protectedEntities))  {
			std::cout << "Access is Denied For" + name << std::endl; 
		}
		entity = new RealEntity();
		//Entity entity = new Entity();
		entity->Show(name);
	}
	// ...

private:
	RealEntity* subject;
};


int main()
{
	Proxy* proxy = new Proxy();
	proxy->Show();

	delete proxy;
	return 0;
}
