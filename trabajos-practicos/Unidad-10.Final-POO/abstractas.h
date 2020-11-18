#ifndef ABSTRACTAS_H
#define ABSTRACTAS_H

class Animal{
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

class Oviparous : public Animal{
	public:
		void layEggs();

};

class Mammal : public Animal{
	public:
		void nurse();

};


#endif // ABSTRACTAS_H