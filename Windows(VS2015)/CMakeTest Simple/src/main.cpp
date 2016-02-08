
#include <iostream>
#include <unordered_map>


int main() {
	std::unordered_map<int, int> list = {
		{ 0, 1 },
		{ 1, 2 },
		{ 2, 3 }
	};

	for (auto it : list) {
		std::cout << it.second << std::endl;
	}
}
