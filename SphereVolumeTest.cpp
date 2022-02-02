#include "SphereNameSpace.h"

using namespace SphereNameSpace;

int main(){
	double r = 0;
	string fn = "", ln = "", n = "";
	
	cout << "Enter radius of sphere: ";
	cin >> r;
	
	Sphere s(r);
	s.calcVolume();
	s.display();
	cout << endl;
	//Sphere Class Test
	
	cout << "Enter radius of ball: ";
	cin >> r;
	
	cout << "Enter name of ball: ";
	cin >> fn >> ln;
	n = fn + " " + ln;
	
	Ball b(r, n);
	b.calcVolume();
	b.display();
	cout << endl;
	
	cout << "Re-enter radius of ball: ";
	cin >> r;
	
	cout << "Re-enter name of ball: ";
	cin >> fn >> ln;
	n = fn + " " + ln;
	b.reset(r, n);
	b.calcVolume();
	b.display();
	cout << endl;
	//Ball Class Test
	
	cout << "Enter radius of balloon: ";
	cin >> r;
	
	cout << "Enter name of balloon: ";
	cin >> fn >> ln;
	n = fn + " " + ln;
	
	Balloon bn(r, n);
	bn.calcVolume();
	bn.display();
	cout << endl;
	
	cout << "Re-nter radius of balloon: ";
	cin >> r;
	
	cout << "Re-enter name of balloon: ";
	cin >> fn >> ln;
	n = fn + " " + ln;
	bn.reset(r, n);
	bn.calcVolume();
	bn.display();
	cout << endl;
	
	return 0;
}
