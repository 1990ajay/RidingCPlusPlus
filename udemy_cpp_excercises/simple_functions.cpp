#include <iostream>
#include <algorithm>
#include <array>
using namespace std;


class Calculator 
{
private:
	int m_x;
	int m_y;
	std::array <double,10>  m_arr;

public:
	//Constructor
	Calculator(int x, int y) {
	m_x = x;
	m_y = y;
	//Initialization list for m_arr
	// m_arr  = {10,20,30,40,50,60,70,80,90,100};
	for(int i = 0 ; i < 10 ; i++ ) {
	cout << "Enter " << i << "th number" << endl; 
		cin >> m_arr[i];
	}
	}
	
	//Member functions goes here 

	int addition() {
		return (m_x+m_y);
	}
	int subtraction() {
		return (m_x - m_y);
	}
	void sort() {
		std::sort(m_arr.begin(), m_arr.end());
		cout << " MinValue" << m_arr[0] << endl;
		cout << "Max Value" << *(m_arr.begin()) << endl;
	}

};

int add(int x, int y=0 , int z=0) {
	return (x+y+z);
	}

int main() {
	Calculator calc(20,10);
	cout << "Result of addition = " << calc.addition() << endl;
	cout << " Result of subtraction = " << calc.subtraction();
	// calc.sort(); 
	int x = 10;
	cout << " Adding only 1 number " << add(x) << endl;
	int y = 20;
	cout << " Adding only 2 number " << add(x,y) << endl;
	
	return 0;
	}

	 
