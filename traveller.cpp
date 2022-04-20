#include "traveller.h"
#include "host.h"
#include"room.h"
#include<iostream>
using namespace std;
#include<string>
traveller::traveller() {}
traveller::traveller(string name, string nationality, string gender, string email, int age, string way_to_contact) {
	this->age = age;
	this->name = name;
	this->email = email;
	this->nationality = nationality;
	this->gender = gender;
	this->way_to_contact = way_to_contact;
	no_travellers++;

}
void traveller::search() {
	int choice; 
	cout << "welcome to our site" << endl;
	cout << "for searching by price press 1" << endl;
	cout << "for searching by city press 2" << endl;
	cout << "for searching by date press 3" << endl;
	cin >> choice;
	switch (choice) {
	case 1: {
		cout << "what is your budget range"; double k; cin >> k;
		for (int i = 0; i < free_rooms.size(); i++)
		{
			if (abs(free_rooms[i].price - k) == 200) {
				cout << "the price" << free_rooms[i].price << endl;
				cout << "room id is "<<free_rooms[i].id;
			}
		}
	}
	case 2: {
		cout << "city?"; string q; cin >> q;
		for (int i = 0; i < free_rooms.size(); i++)
		{
			if (free_rooms[i].city.equals(q)) {
				cout <<"the city which in" <<free_rooms[i].city << endl;
				cout << "room id is "<<free_rooms[i].id;
			}
		}
	}
	case 3: {
		cout << "which period"; string p; cin >> p;
		for (int i = 0; i < free_rooms.size(); i++)
		{
			if (free_rooms[i].start_date == p) {
				cout << "the period which match yours"  << endl;
				cout << "is"<<free_rooms[i].start_date << endl;
				cout << "room id is "  <<free_rooms[i].id;
			}
		}
	}

	default:
		cout << "good day";
		break;


	}
	void traveller ::reserve(){
		cout<<"please enter the id of the room you want to reserve";
		string s; cin >> s;
		for (int i = 0; i < free_rooms.size(); i++)
		{
			if (free_rooms[i].id == s) {
				return free_rooms[i];
				reserved_rooms.pushback(free_rooms[i]);
				free_rooms[i].reserved = true;
			}
		}

	}

}
