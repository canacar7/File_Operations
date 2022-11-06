#include <iostream>
#include <iostream>
#include <fstream>
#include<istream>
#include<string>
#include<math.h>
#include"baslangic.h"

using namespace std;

int main()
{
	Configuration Conf;
	Conf.write_configuration_setting();
	Conf.read_configuration_setting();
	Conf.print_file_information();
	int a = Conf.find_domain_id();
	cout << a << endl;

}
