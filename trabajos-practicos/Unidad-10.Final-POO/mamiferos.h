#ifndef MAMMAL_H
#define MAMMAL_H
#include "abstractas.h"

class Bat : public Mammal{  
	public:
		Bat();
		~Bat();
		void eat();
		void sleep();

};

class Whale : public Mammal{  
	public:
		Whale();
		~Whale();
		void eat();
		void sleep();

};

class SeaLion : public Mammal{  
	public:
		SeaLion();
		~SeaLion();
		void eat();
		void sleep();

};


#endif // MAMMAL_H