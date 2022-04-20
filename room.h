#include<iostream>
using namespace std;
#include<string>
class room
{
public:
	string start_date, end_date;
	double price=0;
	int beds=0;
	string city;
	int days;
	int id;
	static int no_rooms;
	bool reserved;
	vector <room> reserved_rooms;
	vector<room> free_rooms;


	room();
	room(string start_date,string end_date,int beds,int days,string city,double price,int id);
	room enter_room_info();
	void display_room(room o);
	void display_reserved_rooms();
	void display_free_rooms();
	
	

	

};
