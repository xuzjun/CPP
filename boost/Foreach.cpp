#include <iostream>
#include <boost/foreach.hpp>

int main()
{
	std::string s("Hello, world\n");

	BOOST_FOREACH(char ch, s) {
		std::cout << ch ;
	}

	return 0;
}
