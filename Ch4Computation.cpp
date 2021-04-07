// Ch4Computation\.cpp : Drills demonstrating arithmetic computations, if-else conditions, and use of std::sort
//



#include "std_lib_facilities.h"

void drill_a();
void drill_b();
void drill_c();

int main()
{
	drill_a();
	//drill_b();
	//drill_c();
	keep_window_open();
}

void drill_a() {

	double a;
	double b;
	cout << "Enter two doubles:\n";
	constexpr double min_difference = 1.0 / 100.0;
	double difference = 100.0;

	while (cin >> a >> b) {
		   difference = abs(a - b);
			if (a < b) {
				cout << "The smaller value is " << a << "\n";
				cout << "The larger value is " << b << "\n";
			}
			else if (b < a) {
				cout << "The smaller value is " << b << "\n";
				cout << "The larger value is " << a << "\n";
			}
			else {
				cout << a << " is equal to " << b << "\n";
			}
			if (a != b && difference < min_difference) {
				cout << " The numbers are almost equal \n";

			}
	}
		
}

void drill_b() {
	constexpr int EXP = 10 ^ 308;
	constexpr double LARGEST_DOUBLE = 1.79769*EXP;
	constexpr double SMALLEST_DOUBLE = -1.79769*EXP;
	double smallest_input=LARGEST_DOUBLE; 
	double largest_input=SMALLEST_DOUBLE;
	double x;
	cout << "Enter a number:\n";
	while (cin >> x) {
		if (x > LARGEST_DOUBLE || x < SMALLEST_DOUBLE) {
			cout << "Input is out of range \n";
			continue;
		}
		else if (x < smallest_input) {
			smallest_input = x;
			cout << "Updated smallest input to " << smallest_input << '\n';
		}
		else if (x > largest_input) {
			largest_input = x;
			cout << "Updated largest input to " << largest_input << '\n';
		}
		else {
			cout << "Enter another number: \n";
		}
		
	}
	
}

void drill_c() {

	double length=0.0; 
	string unit= "unsure"; 
	double total_length = 0.0;
	constexpr double LONGEST_LENGTH= 2000;
	double shortest_length = LONGEST_LENGTH; 
	double longest_length = 0.0;
	vector<double> lengths = { 0.0 };

	cout << "Enter a length and unit: \n";
	while (cin >> length >> unit) {

		if (length < 0.0) {
			cout << "Enter positive length \n ";
			continue;
		}

		
		if (unit == "m"|| 
			unit == "meter"||
			unit =="meters") {
			cout << length << " m\n";
		}
		else if (unit == "cm" ||
			     unit == "centimeter"||
			     unit == "centimeters") {
			cout << length << " cm\n";
			length *= 0.001;
		}
		else if (unit == "in" ||
			unit == "i" ||
			unit == "inch" ||
			unit == "inches") {
			cout << length << " in\n";
			length *= 0.0254;
		}
		else if (unit == "feet" ||
			unit == "ft") {
			cout << length << " ft\n";
			length *= 0.3048;
		}
		else {
			cout << length << " some unit\n";
			unit = "unsure";
	    }
		
		if (unit != "unsure") {

			lengths.push_back(length);

			if (length > LONGEST_LENGTH) {
				cout << "Enter shorter length \n ";
				continue;
			}

			total_length += length;
			if (length < shortest_length) {
				shortest_length = length;
			}

			if (length > longest_length) {
				longest_length = length;
			}
			cout << " Shortest Length: " << shortest_length;
			cout << " Longest Length: " << longest_length;
			cout << " Total Length: " << total_length << "\n";
		}
		else {
			cout << " Enter a length with unit: \n";
		}
		
}
	std::sort(lengths.begin(),lengths.end());
	for (double x : lengths) cout << x << " m\n";
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
