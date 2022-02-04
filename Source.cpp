#include <iostream>
using namespace std;
void main() {
	int num;

	cout << "please inter your number" << endl;
	cin >> num;
	while (num > 7) {
		cout << "your number is bigger than7 inter lower" << endl;
		cin >> num;
	}
	if (num == 1) {
		cout << "your number stand for "<< "saturday\n";
			}
	else {
		if (num == 2) {
			cout << "your number stand for " << "sunday\n";
		}
		else {
			if (num == 3) {
				cout << "your number stand for " << "monday\n";
			}
			else {
				if (num == 4) {
					cout << "your number stand for " << "tuesday\n";
				}
				else {
					if (num == 5) {
						cout << "your number stand for " << "wendsday\n";
					}
					else {
						if (num == 6) {
							cout << "your number stand for " << "thursday\n";
						}
						else {
							if (num == 7) {
								cout << "your number stand for " << "friday\n";
							}
						}
					}
				}
			}
		}
	}
	
}
