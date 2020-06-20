#include <iostream>
#include <cstring>

size_t getStringLenRecusrsive(const char *str)
{
	if((str == nullptr) || ((*str) == '\0'))
	{
		return 0;
	}

	return (1 + getStringLenRecusrsive(++str));
}


int main(int argc, char **argv)
{
	const char *test_str = "What is the lenght of this string?";


	std::cout << "getStringLenRecusrsive(test_str) - " << getStringLenRecusrsive(test_str) << std::endl;

	std::cout << "strlen(test_str) - " << strlen(test_str) << std::endl;

	const char *str = "";

	std::cout << "getStringLenRecusrsive(str) - " << getStringLenRecusrsive(str) << std::endl;

	std::cout << "strlen(str) - " << strlen(str) << std::endl;

	const char *s = nullptr;

	std::cout << "getStringLenRecusrsive(s) - " << getStringLenRecusrsive(s) << std::endl;

#if 0
	// Null pointer - segementation error
	std::cout << "strlen(s) - " << strlen(s) << std::endl;
#endif
	return 0;
}
