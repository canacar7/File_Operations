#include "baslangic.h"


void Configuration::set_domain_id(int&& value)
{
	this->domain_id = value;
}

int Configuration::get_domain_id()
{
	cout << "domain_id=" <<this->domain_id << endl;
	return this->domain_id;
}

void Configuration::set_path_id(string& value)
{
	this->file_path = value;
}

string Configuration::get_path_id()
{
	cout << "get_path_id=" << this->file_path << endl;
	return this->file_path;
}

void Configuration::write_configuration_setting()
{
	ofstream inital_options_file;
	inital_options_file.open(file_path);
	inital_options_file << "domain_id=" << this->domain_id << endl;
	inital_options_file << "domain_id=" << this->domain_id << endl;
	inital_options_file << "domain_id=" << this->domain_id << endl;
	inital_options_file << "domain_id=" << this->domain_id << endl;
	inital_options_file.close();
}

void Configuration::read_configuration_setting()
{
	string satir;
	ifstream inital_options_file;
	inital_options_file.open(file_path);

	int counter_information = 0;
	while (getline(inital_options_file, satir))
	{
		file_information[counter_information] = satir;
		counter_information++;
	}
	this->counter = counter_information;
	inital_options_file.close();

}



void Configuration::print_file_information()
{
	read_configuration_setting();
	for (int i = 0; i < counter; i++)
	{
		cout << file_information[i] << endl;
	}
}


int  Configuration::find_domain_id()
{
	string tmp_s;
	int tmp_i;
	int tmp_domain_id;
	read_configuration_setting();
	for (int i = 0; i < counter; i++)
	{
		tmp_i = file_information[i].find("=") + 1;
		tmp_s = file_information[i].substr(tmp_i);

	}
	set_domain_id(stof(tmp_s));
	return stof(tmp_s);
}

