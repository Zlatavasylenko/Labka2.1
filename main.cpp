#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void aboutA();
bool getArg(double& x);
double calcLib(double x);
void calcSum(double x,  double& sum ,int& n);
void putHeader();
void putResult(double x, double lib, double sum, double diff, int n);

int main() {
	double x, lib, sum, diff;
	int n;

	aboutA();
	while (true) {
		if (getArg(x)) {
			lib = calcLib(x);
			calcSum(x,sum, n);
			putHeader();
			diff = abs(lib - sum);
			putResult(x, lib, sum, diff, n);
		}
		else {
			cout << "<<<END OF WORK>>>" << endl;
			break;
		}
	}

	return 0;
}

void aboutA() {
	  cout << "Laboratory work 1-2. Approximate calculation of functions.\nK-14 Vasylenko Zlata\n"; 
}
bool getArg(double& x) {
	while (true) {
		cout << "Enter a real number from the (-1;1) interval:" << endl;
		if (cin >> x) {
			if (x > -1 && x < 1) {
				return true;
				break;
			}
			else {
				cout << "Look at the limitations of the argument!!!" << endl;
			}
		}
		else {
			break;
		}
	}
	return false;
}


double calcLib(double x) {
	return sinh(x);
}

void calcSum(double x, double& sum, int& n) {
	n = 0;
	sum = 0;
	int n2;
	double x2=x*x;
	double term = x, eps = 1e-8;
	while (abs(term) > eps) {
		sum += term;
		n++;
		n2=2*n;
		term =(term*x2)/((n2)*(n2+1));
	
		
	}
}


void putHeader() {
cout << "x";
 cout.width(17);
cout << "f_lib(x)";
 cout.width(17);
cout << "f_sum(x)";
 cout.width(17);
cout << "difference";
 cout.width(17); 
cout<<"N_adds" << endl; 
}

void putResult(double x, double lib, double sum, double diff, int n) { 
 cout << x ; 
  cout.width(17); 
 cout  << lib;  
  cout.width(17); 
 cout<< sum ; 
  cout.width(17); 
 cout << diff ; 
  cout.width(17); 
 cout<< n << endl; 
}

