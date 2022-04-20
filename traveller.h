#include<iostream>
using namespace std;
class traveller
{
	string name;
	string email, nationality, gender, way_to_contact;
	int age;
	static int no_travellers;
	vector< traveller>  travellers;
	traveller();
	traveller(string name, string nationality, string gender, string email, int age, string way_to_contact);
	void search();
	void reserve();
};

