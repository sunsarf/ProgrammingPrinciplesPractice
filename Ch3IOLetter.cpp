// IOName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "std_lib_facilities.h"

int write_a_letter();

int main()
{
	write_a_letter();
	keep_window_open();
}

int write_a_letter() {

	string first_name;
	string last_name;
	string full_name;
	double age;
	int age_inputs = 0;

	string friend_name;
	char friend_is_male=0;
	cout << "Please enter full name and age\n";
	cin >> first_name >> last_name;
	if (first_name == last_name) {
		cout << "that's the same name twice\n";
			return 0;
	}
	else {
		full_name = first_name + ' ' + last_name;
	}


	cin >> age;
	while (age < 0 && age_inputs<3) { 
		cout << "Are you really from the future? What's it like? What's really your age again?\n";
		cin >> age;
		++age_inputs;
	} 
	if (age < 0) {
		cout << "Come back when you can answer seriously. Ciao! \n";
		return 1;
	}
	
	double age_in_months = age * 12.0;
	cout << "Dear " << full_name << ",\n";
	if (age_in_months < 1200) {
		cout << "How are you? Happy " << age_in_months << " birth months!\n";
	}
	else {
		cout << "No way! You don't look a day over 255 months!";
	}
	
	if (age < 12) {
		cout << "Next year you will be " << ++age << "\n";
	} 
	if (age == 17) {
		cout << "Next year you will be able to vote \n";
	}
	if (age > 70) {
		cout << " I hope you are enjoying retirement \n";
	}

	cout<< "Who's your BFF? \n";
	cin.ignore(); 
	getline(cin, friend_name, '\n');
	cout << "Have you caught up with " << friend_name << " lately?\n";
	cout << "Is he a dude? Enter 1 for yes and 0 for no \n";
	cin >> friend_is_male;
	if (friend_is_male=='1'){
	cout << "Please tell him I say whatsup!\n";
	}
	else {
		cout << "Please tell her I said hiya! \n";
	};
	cout << "Yours computationally, \n Sun Sarf \n";
	
	return 0;

}