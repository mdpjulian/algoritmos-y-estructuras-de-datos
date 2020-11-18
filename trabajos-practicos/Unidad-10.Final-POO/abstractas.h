#ifndef ABSTRACTAS_H
#define ABSTRACTAS_H

class Animal{  // Clase Base Abstracta
	public:
		virtual void eat();
		virtual void sleep() =0;
		void breed();
		void SetName();
		void GetName();
		void SetCode(int c);
		void GetAnimalType();


	protected:
		std::string name;
		int code;
};

class Oviparous : public Animal{  // Clase Derivada Abstracta
	public:
		void layEggs();

};

class Mammal : public Animal{  // Clase Derivada Abstracta
	public:
		void nurse();

};


#endif // ABSTRACTAS_H