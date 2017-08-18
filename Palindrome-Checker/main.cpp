#include <iostream>
#include <string>

int main() {

	std::string word;
	std::string reversedWord;
	char letterChecker; //used to letters in word individually
	char option; //used for repeat statement of code
	int sizeOfWord; //used to store length of word

	std::cout << "======================" << std::endl;
	std::cout << "= Palindrome Checker =" << std::endl;
	std::cout << "======================" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter Word:";
	std::cin.ignore();
	getline(std::cin, word);
	std::cout << std::endl;
	sizeOfWord = word.length(); //sets to lenght of word
	int decreaser = sizeOfWord - 1; //set to length of word-1

	for (int i = 0;i<sizeOfWord; i++) { //used to obtain each letter of word starting from the last and storing each character
										//in new string for each loop cycle
		letterChecker=word[decreaser]; //char letter checker set to int decreaser (moves from last to first char in string word)
		reversedWord += letterChecker; //char in letter checker added to reversed word
		decreaser--; //decreaser int value decreased at end of every cycle
	}

	std::cout << std::endl;
	std::cout << "Reversed Word:"<<reversedWord<<std::endl; //prints reversed word
	std::cout << std::endl;
	//checks if word and reversedWord match
	if (word == reversedWord) {
		std::cout << "Palindrome exist!" << std::endl;
	}
	else {
		std::cout << "Palindrome does not exist!" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Enter a new word?(Y/N): "; //ask user if they want to enter a new word
	std::cin >> option;

	if (option == 'y' || option == 'Y') {
		system("CLS"); //clears screen
		main(); //returs main
	}
	else if (option == 'n' || option == 'N') {
		exit(1); //exits application
	}
	else {
		std::cout << std::endl;
		std::cout << "Invalid option chosen, program will now terminate...." << std::endl;
		std::cin.fail(); //checks for failure in input
		std::cin.clear(); //clears input
		std::cin.ignore(1000, '\n'); //ignores up to 1000 invalid characters input by user
		exit(1); //exits application
	}

	return 0;
}