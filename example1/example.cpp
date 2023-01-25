#include <cstdlib> // provides the rand()
#include <iostream> // provides cout

using namespace std;

int makeRandomNumber(int n){
	return rand() % n;
}


int main() {

	int num;
	
	cout << "Give me a number:";
	cin >> num;
	
	cout << "Number you typed: " << num << endl;
	
	int r = makeRandomNumber (15);
	cout <<"Random number: "<< r << endl;
	
	cout << "version: " <<__cplusplus << endl;
	
	return 0;
}
