#include <iostream>
#include <cstdlib>
#include "ipv4-tools.h"

void die(std::string msg = "Program exiting.") {
	std::cout << "\nERROR! " << msg << std::endl;
	exit(1);
}

int main(int argc, char* argv[]) {
	int choice = -1;
	std::string ipv4;
	std::string ipv6;
	if (argc >= 3) die("Insufficient command-line arguments provided.");
	if (argc == 1) {
		std::cout << "Welcome to Dev-Glossary." << std::endl;
		while(choice != 0) {
			std::cout << "What would you like to do?" << std::endl;
			std::cout << "1) Enter IPv4" << std::endl;
			std::cout << "2) Enter IPv6" << std::endl;
			std::cout << "3) Convert IPv4 to IPv6" << std::endl;
			std::cout << "4) Convert IPv6 to IPv4" << std::endl;
			std::cout << "0) Exit Program." << std::endl;
			std::cin >> choice;
			switch (choice) {
				case 0: 
					std::cout << "" << std::endl;
					break;
				case 1: 
					std::cout << "" << std::endl;
					break;
				case 2: 
					std::cout << "" << std::endl;
					break;
				case 3: 
					std::cout << "" << std::endl;
					break;
				case 4: 
					std::cout << "" << std::endl;
					break;
				default: 
					std::cout << "Not a valid option. Please choose again." << std::endl;
					break;
			}
		}
	}
	return 0;
}
