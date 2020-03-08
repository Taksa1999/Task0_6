#include <iostream>
#include <fstream>

using namespace std;

void fastTrain(int s, float a1, float a2, float v) {
	float t1, t2, t3 = 0;
	t1 = sqrt(s / (pow(a1, 2) / (2 * a2) + a1 / 2));		
	if (t1 * a1 > v) {						
		t1 = v / a1;				
		t2 = v / a2;
		t3 = (s - (a1 * pow(t1, 2) / 2 + a2 * pow(t2, 2) / 2)) / v;		
	}
	else {	
		t2 = (a1 * t1) / a2;								
		v = a1 * t1;					
	}							
	cout << "Time: " << t1 + t2 + t3 << endl;
	cout << "Max speed: " << v << endl;
}