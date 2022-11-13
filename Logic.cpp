#include <iostream>
#include <string>
using namespace std;

class account {
private:
	string ID, name;
	double campus, falcon;
	int swipe;
public:
	account() {
		ID = "-";
		name = "-";
		campus = 346;
		falcon = 4341;
		swipe = 12;
	}
	account(string n, string id, double c, double f, int sw) {
		name = n;
		ID = id;
		campus = c;
		falcon = f;
		swipe = sw;
	}
	void addcampus(double b){
		campus = campus + b;
	}
	void addfalcon(double b) {
		falcon = falcon + b;
	}
	void addswipes(int s) {
		swipe = swipe + s;
	}
	void print() {
		cout << "   " << endl;
		cout << "Student name: " << name << endl;
		cout << "Net ID: " << ID << endl;
		cout << "Campus balance: " << campus << endl;
		cout << "Falcon balance: " << falcon << endl;
		cout << "Swipe balance: " << swipe << endl;
	}
	account transfercamp(account x1, double z) {
		if (!(z > campus))
		{
			campus = campus - z;
			x1.campus += z;
		}
		else cout << "Error: Insufficient Balance" << endl;
		return (x1);
	}
	account transferfalc(account x1, double z) {
		if (!(z > falcon))
		{
			falcon = falcon - z;
			x1.falcon += z;
		}
		else cout << "Error: Insufficient Balance" << endl;
		return (x1);
	}
	account transferswipe(account x1, int z) {
		if (!(z > swipe))
		{
			swipe = swipe - z;
			x1.swipe += z;
		}
		else cout << "Error: Insufficient Balance" << endl;
		return (x1);
	}

};

int main() {
	string ID, name;
	double camp, falc;
	int swipe;
	account a("Dandinur", "dz2323", 346, 1100, 12);
	account b("Aislen", "as1212", 120, 250, 4);
	b = a.transferfalc(b, 110);
	a.print();
	b.print();
	return 0;
}