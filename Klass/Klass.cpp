#include <iostream>
#include <string>



class MyClass {
private:
	int _data; //Доступ для модификации объекта класса
public:
	int data; //Доступно для модификафции только внутренего класса
//protected:
	//int data; // Доступно для модификации внутри класса и внутри классов - наследников 

public:
	int Summ(int data)
	{
		return _data + data;
	}
};

class Tovar
{
private: // Всегда пишется с символом "_"
	std::string _name;
	float _price;

public:
	Tovar(std::string name, float price)
	{
		_name = name;
		_price = price;
	}

public: // Пишем только методы

	void Print() 
	{
		std::cout << "Name:" << _name << "\n";
		std::cout << "Price:" << _price << "\n";

	}

	void SetName(std::string name)
	{
		_name = name;
	}

	void SetPrice(float price)
	{
		_price = price;
	}

	std::string GetName()
	{
		return _name;
	}
	float GetPrice()
	{
		return _price;
	}
	/*void SearchByName(std::string x)
	{
		BasaData.Search(x);
	}*/
};


class Employsee
{
private:
	std::string _name;
	float _id;
public:
	Employsee(std::string name, float id)
	{
		_name = name;
		_id = id;
	}
	void Print()
	{
		std::cout << "Name:" << _name << "\n";
		std::cout << "ID:" << _id << "\n";
	}
	void SetName(std::string name)
	{
		_name = name;
	}
	void SetID(float id)
	{
		_id = id;
	}
	std::string GetName()
	{
		return _name;
	}
	float GetID()
	{
		return _id;
	}

};


int main(){


	/*Tovar tovar1;
	tovar1.SetName("Morkov");
	tovar1.SetPrice(10.8f);
	std::cout << tovar1.GetName() << "-" << "\t";
	std::cout << tovar1.GetPrice() << "\n";
	tovar1.Print();
	SearchByName(tovar1.GetName());*/

	Tovar tovar1("Morkov", 99.9f);
	Tovar tovar2("Potate", 500.1f);
	Tovar tovar3("Kapusta", 15.3f);
	Tovar *tovar4 = new Tovar("Pivo", 65.3f);
	
	tovar1.Print();
	tovar2.Print();
	tovar3.Print();
	tovar4->Print();
	delete(tovar4);
	/*{
		Employsee Employsee("Samir", 13);
		Employsee.Print();
	}*/


	return 0;
};