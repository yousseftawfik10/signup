#include "room.h"
#include<iostream>
using namespace std;
#include<string>
room::room() {}
room(string start_date, string end_date,int id int beds, int days, string city, double price) {
	this.start_date = start_date;
	this.end_date = end_date;
	this .beds = beds;
	this .days = days;
	this.city = city;
	this.price = price;
	this.id = id;
	no_rooms++;
}
void room::display_room(room o) {
	cout << "start date is " << o.start_date << endl;
	cout << "end date is " << o.end_date << endl;
	cout << "number of beds are  " << o.beds << endl;
	cout << "city is " << o.city << endl;
	cout << "price is " << o.price << endl;
	cout << "number of days are " << o.days << endl;
	cout << "id " << o.id << endl;
}

void room::display_reserved_rooms() {
	for (int i = 0; i < reserved_rooms.size(); i++)
	{
		cout << display_room(reserved_rooms[i]);
	}
}
void room::display_free_rooms() {
	for (int i = 0; i < reserved_rooms.size(); i++)
	{
		cout << display_room(reserved_rooms[i]);
	}
}
room room::enter_room_info() {
	room b;
	cout << "what is the start date " << endl; cin >> b.start_date;
	cout << "what is the end date  "  << endl; cin >> b.end_date;
	cout << "how many number of bed "  << endl; cin >> b.beds;
	cout << "in which city  " <<  endl; cin >> b.city;
	cout << "how much does it cost "  << endl; cin >> b.price;
	cout << "in which city  " << endl; cin >> b.city;
	cout << "id? "  << endl; cin >> b.id;
	return b;
}

