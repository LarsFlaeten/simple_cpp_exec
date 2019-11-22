#include <iostream>

// From external libraries:
#include <cxxopts.hpp>

// From internal libs:
#include <module/Example.h>

using namespace std;

int main(int argc, char** argv) {

	cxxopts::Options options(argv[0], "Simple c++ project skeleton");
    options.add_options()
        ("h,help", "Print help")
        ("first", "First number to add", cxxopts::value<int>())
		("second", "Second number to add", cxxopts::value<int>())
		("positional",
       "Positional arguments: these are the arguments that are entered "
       "without an option", cxxopts::value<std::vector<std::string>>());
        ;
	options.parse_positional({"first", "second", "positional"});
 	auto result = options.parse(argc, argv);
	   
    if(result.count("help"))
    {
        cout << options.help({""}) << endl;
        return 0;
    }

	int first = 2; // default
    if(result.count("first"))
    {
        first = result["first"].as<int>();
    } 

	int second = 3; // default
    if(result.count("second"))
    {
        second = result["second"].as<int>();
    } 


    example::Example ex;



    cout << "Hello World!" << endl;
    
    cout << first << " + " << second << " = " << ex.add(first,second) << std::endl;
    return 0;
}
