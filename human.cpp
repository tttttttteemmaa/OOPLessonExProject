#include "human.h"

string Human::get_name() {
	return name;
}

void Human::set_name(string n) {
	name = n;
}

string Human::get_surname() {
	return name;
}

void Human::set_surname(string n) {
	surname = n;
}

int Human::get_age() {
	return age;
}

void Human::set_age(int a) {
	if (a > MIN_AGE && a < MAX_AGE) {
		age = a;
	}
}

Human::~Human() {
	cout << "Call Human destructor..." << endl;
}