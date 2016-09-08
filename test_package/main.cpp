#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <SQLiteCpp/SQLiteCpp.h>

int main(void) {
	
    std::cout << "SQlite3 version " << SQLite::VERSION << " (" << SQLite::getLibVersion() << ")" << std::endl;

}
