#include <iostream>
using namespace std;

int eje (double x, double y) {
	if (x>0) {
		if (y>0) {
			return 1;
		} else {
			if (y<0) {
				return 2;
			} else {
				return 0;
			}
		}
	}
	if (x<0) {
		if (y>0) {
			return 3;
		} else {
			if (y<0) {
				return 4;
			} else {
				return 0;
			}
		}
	}
	if (x==0) {
		return 0;
	}
	return 0;
}

int main(int argc, char *argv[]) {
	double x,y;
	int resultado;
	cin>>x;
	cin>>y;
	resultado = eje(x,y);
	cout<<resultado;
	return 0;
}

