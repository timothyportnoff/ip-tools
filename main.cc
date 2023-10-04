#include <iostream>
#include <cstdlib>
#include "ipv4-tools.h"

void die(std::string msg = "Program exiting.") {
	std::cout << "\nERROR! " << msg << std::endl;
	exit(1);
}

//TODO This might need to return a special class
//TODO Return an ipaddress? 
class ipv6{
	private:
		bool* bitfield[64];
	public:
		bool* get_bitfield(){}
		void set_bitfield(){}

};

ipv6 compress_ipv6() {
	//An Ipv6 Address is essentially 64 1's and 0's, so that's how we'll store it. Maybe I should use a vec...
	ipv6 ip;
	return ip;
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
			std::cout << "5) Compress IPv6" << std::endl;
			std::cout << "0) Exit Program." << std::endl;
			std::cin >> choice;
			switch (choice) {
				// Enter IPv4 and IPv6 -----
				case 1: 
					std::cout << "" << std::endl;
					break;
				case 2: 
					std::cout << "" << std::endl;
					break;
				// IP Tool Section -----
				case 3: 
					std::cout << "" << std::endl;
					break;
				case 4: 
					std::cout << "" << std::endl;
					break;
				case 5: 
					std::cout << "" << std::endl;
					break;
				// Exit case -----
				case 0: 
					std::cout << "" << std::endl;
					return 0;
					break;
				default: 
					std::cout << "Not a valid option. Please choose again." << std::endl;
					break;
			}
		}
	}
	return 0;
}
