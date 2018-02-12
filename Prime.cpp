#include <iostream>
#include <chrono>
#include "Prime.h"

using namespace std;

bool Prime::check_prime(int x) {

	int factors = 0;

	for(int i = 1; i < x; i++) {

		if(factors >= 2) break;
	
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
			Prime::run_iteration();
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

void Prime::run_iteration() {

	int input;

	cout << "Please Enter A Number To Count To : ";

	cin >> input;

	Prime::iterate_primes(input);

	Prime::print_options();

}

void Prime::iterate_primes(int max) {

	auto start_time = chrono::system_clock::now();

	for(int i = 0; i <= max; i++) {
	
		if(Prime::check_prime(i)) cout << i << endl;			

	}

	auto end_time = chrono::system_clock::now();

	chrono::duration<double> duration = end_time - start_time;

	cout << "Process Completed In : " << duration.count() << " seconds" << endl << endl;

} 


int main() {

	Prime::print_options();

	return 0;

}
