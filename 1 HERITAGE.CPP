#include<iostream>
using namespace std;

class mother{

	private:
		char a[50];

		public:

			void set(){

				cout<<"Mother"<<endl;
			}


};

class daughter : public mother{
	public:
	void display(){

		cout<<"Daughter"<<endl;

	}



};

main(){

	daughter h;
	h.set();
	h.display();
}
