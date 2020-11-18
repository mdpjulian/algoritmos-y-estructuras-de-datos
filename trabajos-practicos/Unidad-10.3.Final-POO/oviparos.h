#ifndef OVIPAROUS_H
#define OVIPAROUS_H
#include "abstractas.h"

class Crocodile : public Oviparous{  
	public:
		Crocodile();
		~Crocodile();
		void eat();
		void sleep();

};

class Goose : public Oviparous{  
	public:
		Goose();
		~Goose();
		void eat();
		void sleep();

};

class Pelican : public Oviparous{  
	public:
		Pelican();
		~Pelican();
		void eat();
		void sleep();

};


#endif // OVIPAROUS_H