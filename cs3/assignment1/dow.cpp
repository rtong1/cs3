
#include <cstdlib> // provides the rand()
#include <iostream> // provides cout

using namespace std;

int main() {
	int userInput;
	cout << "Number: " ;
	cin >> userInput;
	
	if((userInput > 6) || (userInput < -6)){
		cout << userInput << "?!!1!?! Are you an idiot or something?" << endl;
		cout << "The only valid inputs are 0 – 6." << endl;
	}
	else{
		switch(userInput){
			case 0:
				cout << "Sunday" << endl;
				break;
			case 1:
				cout << "Monday" << endl;
				break;
			case 2:
				cout << "Tuesday" << endl;
				break;
			case 3:
				cout << "Wednesday" << endl;
				break;
			case 4:
				cout << "Thursday" << endl;
				break;
			case 5:
				cout << "Friday" << endl;
				break;
			case 6:
				cout << "Saturday" << endl;
				break;
			default:
				cout << "Invalid Value!" << endl;
	}
}
	return 0;
}
