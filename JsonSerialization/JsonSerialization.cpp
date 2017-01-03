#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	boost::property_tree::ptree pt;

	pt.put(string("School"),  string("University of Alabama"));
	pt.put(string("Cheer"),   string("\"Roll, Tide, Roll!\""));
	pt.put(string("Sport"),   string("Football"));
	pt.put(string("Ranking"), 1);

	ostringstream out;

	boost::property_tree::write_json(out, pt);

	cout << "JSON:" << endl << out.str().c_str() << endl << endl;

	cout << endl << "Now for the wide-character verson..." << endl << endl;
	
	boost::property_tree::wptree wpt;

	wpt.put(wstring(L"Singer"),   wstring(L"Little Richard"));
	wpt.put(wstring(L"Song"),     wstring(L"Tutti Frutti"));
	wpt.put(wstring(L"Recorded"), 1955);
	wpt.put(wstring(L"refrain"),  wstring(L"\"Wop Bop a Loo La, Mop Bam Boom!\""));

	wostringstream wout;

	boost::property_tree::write_json(wout, wpt, false);

	wcout << L"Wide JSON: " << wout.str().c_str() << endl << endl;

	cout << "Done." << endl;

    return 0;
}

