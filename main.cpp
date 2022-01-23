#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <array>
#include <numeric>
#include <iomanip>

template<typename C>
auto revers(C container)
{
	std::reverse(container.begin(), container.end());
	return container;
}

int main()
{ 
	std::array<int, 10> kontener{ 1,2,3,4,5,6,7,8,9,10 };
	std::array<int, 10> container = revers(kontener);
	for (int i = 0; i < container.size(); ++i) std::cout << container[i] << std::endl;
	return 0;
}