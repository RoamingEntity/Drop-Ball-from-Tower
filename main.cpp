#include "add.h"
#include <iostream>
#include <limits>


double calculateHeight(){
	
	double heightInput{};
	std::cout << "Enter tower height: \n";
	std::cin >> heightInput;

	return heightInput;
}

double calculateBallHeight(double seconds, double towerHeight) {

	double gravity {9.8};
	double distanceFallen {gravity * seconds * seconds / 2};
	double ballHeight {towerHeight - distanceFallen};
	return ballHeight;
}

void print(double seconds, double ballHeight) {

	if (ballHeight > 0)
	std::cout << "After " << seconds << " seconds, the ball's height is " << ballHeight << " meters.\n";
	
	else
	std::cout << "At " << seconds << " seconds, the ball is on the ground.\n ";

}


double calculateAndPrintBallHeight(double seconds, double towerHeight) {

	double ballHeight {calculateBallHeight(seconds, towerHeight)};
	print(seconds, ballHeight);
	return 0;
}

int main () {

	double towerHeight{calculateHeight()};

	calculateAndPrintBallHeight (0, towerHeight);
	calculateAndPrintBallHeight (1, towerHeight);
	calculateAndPrintBallHeight (2, towerHeight);
	calculateAndPrintBallHeight (3, towerHeight);
	calculateAndPrintBallHeight (4, towerHeight);
	calculateAndPrintBallHeight (5, towerHeight);

	std::cout << "This program was coded by Can Coshkun. Press enter to exit.\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}
