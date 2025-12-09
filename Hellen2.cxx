#include<iostream>
using namespace std;

class Roommate{
public:
	string name;
	int age;
	string personality;
	string artist;
	string hobby;
	
	void display_roommate(){
				cout<<"My roommate's name is" <<name<<endl<<"she is "<<age<<"years old.  She is"<<personality <<endl<<"Her artist is"<<artist<<"she loves"<<hobby<<endl;
		}
	};
	
int main(){
	Roommate roommate1;
	roommate1.name="Vivian";
	roommate1.age=19;
	roommate1.personality="dhy";
	roommate1.artist="Wanavokali";
	roommate1.hobby="singing";
	
	roommate1.display_roommate();
	}