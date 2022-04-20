#include "host.h"
#include"room.h"
#include<iostream>
using namespace std;
#include<string>
host::host() {}
host::host(string name, string nationality, string gender, string email, int age, string way_to_contact) {
	this->age = age;
	this->name = name;
	this->email = email;
	this->nationality = nationality;
	this->gender = gender;
	this->way_to_contact = way_to_contact;
	no_host++;

}
void host::display_host(host h) {
	cout << "host name is"<<h.name<<endl;
	cout << "host age is" << h.age << endl;
	cout << "host email is" << h.email << endl;
	cout << "host gender is" << h.gender << endl;
	cout << "host nationality is" << h.nationality << endl;

	cout << "way to contact thie host is" << h.way_to_contact << endl;
}
void host::offer() {
	room c= enter_room_info()
	free_rooms.pushback(c);
}