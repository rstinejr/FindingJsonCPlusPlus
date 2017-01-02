#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <iostream>
#include <sstream>
#include <string>

using boost::property_tree::ptree;
using namespace std;

int main()
{
	ptree pt;

	pt.put(string("School"),  string("University of Alabama"));
	pt.put(string("Cheer"),   string("\"Roll, Tide, Roll!\""));
	pt.put(string("Sport"),   string("Football"));
	pt.put(string("Ranking"), 1);

	std::ostringstream out;

	boost::property_tree::write_json(out, pt);

	cout << "JSON:" << endl << out.str().c_str() << endl << endl;

	cout << "Done." << endl;

    return 0;
}

