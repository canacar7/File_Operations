#include <iostream>
#include <iostream>
#include <fstream>
#include<istream>
#include<string>
#include<math.h>
using namespace std;



class Configuration
{
public:

	void set_domain_id(int &&value);
	int  get_domain_id();
	void set_path_id(string & value);
	string  get_path_id();
	void  print_file_information();
	void  write_configuration_setting();
	void  read_configuration_setting();
	int  find_domain_id();


private:
	string file_path = "C:\\Users\\USER\\Desktop\\..." ;
	int    domain_id = 42;
	string file_information[250];
	int counter;

};

