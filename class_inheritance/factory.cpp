#include <iostream>
#include <string>
using namespace std;

class Trunk {
	public:
		string length;
		void setLength(){
			cout << "Enter the elephants trunk length: ";
			cin >> length;
		};
};

class Name {
	public:
		string name;
		void setName(){
			cout << "Enter the elephants name: ";
			cin >> name;
		};
};


class CompleteElephant : public Name, public Trunk{
	public:
		string elephantsName = name;
		string elephantsTrunkLength = length;
		void setElephantsSpecifications(){
			setName();
			setLength();
		};
		void getElephant(){
			cout << "Your elephant has the name " << name << " and its trunk is " << length << " long." << endl;
		};
};

