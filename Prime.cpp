#include <iostream>

using namespace std;

bool check_prime(int x) {

	int factors = 0;

	for(int i = 1; i < x; i++) {
	
		if((x % i) == 0) factors++;
	
	}


	return factors == 1;

} 


int main() {

	int input;

	cout << "Please Enter A Number : ";

	cin >> input;

	cout << input << (check_prime(input) ? " is" : " is not") << " a prime number.";

	return 0;

}
