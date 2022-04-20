#include<iostream>
using namespace std;
class host
{
	string name;
	string email, nationality, gender, way_to_contact;
	int age;
	static int no_host;
	vector<host>hosts;
	host();
	host(string name, string nationality, string gender, string email, int age, string way_to_contact);
	void offer();
	void display_host(host h);
}

