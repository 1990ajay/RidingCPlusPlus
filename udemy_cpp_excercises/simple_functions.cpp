#include <iostream>

using namespace std;


class Calculator 
{
private:
	int m_x;
	int m_y;

public:
	//Constructor
	Calculator(int x, int y) {
	m_x = x;
	m_y = y;
	}
	
	//Member functions goes here 

	int addition() {
		return (m_x+m_y);
	}
	int subtraction() {
		return (m_x - m_y);
	}

};

int main() {
	Calculator calc(20,10);
	cout << "Result of addition = " << calc.addition() << endl;
	cout << " Result of subtraction = " << calc.subtraction();
	return 0;
	}

	 
