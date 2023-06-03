#include <iostream>
#include <map>
using namespace std;

int main()
{ // Task 1
	int day_of_the_week;
	cout << "Type a number from 1 to 7: ";
	cin >> day_of_the_week; 

	switch (day_of_the_week){
	case 1:
		cout << "Monday.\n";
		break;
	case 2:
		cout << "Tuesday.\n";
		break;
	case 3:
		cout << "Wednesday.\n";
		break;
	case 4:
		cout << "Thursday.\n";
		break;
	case 5:
		cout << "Friday.\n";
		break;
	case 6:
		cout << "Saturday.\n";
	case 7:
		cout << "Sunday.\n";
		break;
	default:
		cout << "ERROR!.\n";
		break;
	}


	//task 2
    long int counter = 0;
    
    // First question
    cout << "What is 4 first integers after comma in PI?\n";
    cout << "A) 1419\n";
    cout << "B) 1415\n";
    cout << "C) 1715\n";

    char first;
    cin >> first;

    switch (first) {
    case 'B':
        cout << "Correct!\n";
        counter++;
        break;
    default:
        cout << "Fail! Try again!\n";
        return 0;
    }

    // Second question
    cout << "First 3 planets in our solar system?\n";
    cout << "A) Venus, Jupiter, Earth\n";
    cout << "B) Venus, Mercury, Earth\n";
    cout << "C) Mars, Mercury, Earth\n";

    char second;
    cin >> second;

    switch (second) {
    case 'B':
        cout << "Correct!\n";
        counter++;
        break;
    default:
        cout << "Fail! Try again!\n";
        return 0;
    }

    // Third question
    cout << "What is heavier: gold or silver?\n";
    cout << "A) gold\n";
    cout << "B) silver\n";

    char third;
    cin >> third;

    switch (third) {
    case 'A':
        cout << "Correct!\n";
        counter++;
        break;
    default:
        cout << "Fail! Try again!\n";
        return 0;
    }

    // Fourth
    cout << "How many planets in our solar system?\n";
    cout << "A) 10\n";
    cout << "B) 9\n";
    cout << "C) 8\n";

    char fourth;
    cin >> fourth;

    switch (fourth) {
    case 'C':
        cout << "Correct!\n";
        counter++;
        break;
    default:
        cout << "Fail! Try again!\n";
        return 0;
    }

    // Fifth
    cout << "How many steps does a Potyomkin stairs have?\n";
    cout << "A) 202\n";
    cout << "B) 188\n";
    cout << "C) 192\n";

    char fifth;
    cin >> fifth;

    switch (fifth) {
    case 'C':
        cout << "Correct!\n";
        counter++;
        break;
    default:
        cout << "Fail! Try again!\n";
        return 0;
    }

    if (counter == 5) {
        cout << "You did it, congratulions, you have not been awarded anything\n";
    }
    else {
        cout << "You're not looking smart :), try again!\n";
    }

    return 0;

}