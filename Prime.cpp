#include <iostream>
#include "Prime.h"

using namespace std;

bool Prime::check_prime(int x) {

	int factors = 0;

	for(int i = 1; i < x; i++) {
	
		if((x % i) == 0) factors++;
	
	}


	return factors == 1;

}

void Prime::run_check_specific() {

	int input;

	cout << "Please Enter A Number : ";

	cin >> input;

	cout << input << (Prime::check_prime(input) ? " is" : " is not") << " a prime number." << endl << endl;

	Prime::print_options();

} 

void Prime::check_choice(char choice) {

	switch(choice) {
	
		case 'A':
			Prime::run_check_specific();
			break;
		case 'B':
			//run_iteration();
			break;
		case 'C':
			break;
			
	
	}
} 

void Prime::print_options() {

	char option;

	cout << "A: Check Specific Number" << endl << "B: Iterate Primes To N Number" << endl << "C: Exit Program" << endl;

	cin >> option;

	Prime::check_choice(option);

}

void Prime::run_iteration() {}

void Prime::iterate_primes(int max) {} 


int main() {

	Prime::print_options();

	return 0;

}
