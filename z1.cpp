#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
	int a=0, 
	    e=0, 
		i=0, 
		o=0, 
		u=0, 
		y=0;
	string glas;
	getline (cin,glas);
	
	for (int m=0;
	m<glas.length(); m++)
	{
		if (glas[m]=='a') {
			a++;
		}
		if (glas[m]=='e') {
			e++;
		}
		if (glas[m]=='i') {
			i++;
		}
		if (glas[m]=='o') {
			o++;
		}
		if (glas[m]=='u') {
			u++;
		}
		if (glas[m]=='y') {
			y++;
		}
	}
	cout<< "a = " << a <<endl;
	cout<< "e = " << e <<endl;
	cout<< "i = " << i <<endl;
	cout<< "o = " << o <<endl;
	cout<< "u = " << u <<endl;
	cout<< "y = " << y <<endl;
	
	return 0;
}
