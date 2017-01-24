#ifndef WINNERS_H
#define WINNERS_H

#include<iostream> 
#include<string>
using namespace std;
class Winners{

private: string name;
		 int age;

public:
	Winners(string a, int n){
		name = a;
		age = n;
	}
	
	
	void setname(string a){

	name = a;
}
		void setage(int n){
			age = n;
		}
		string getname(){
			return name;
		}
		int getage(){
			return age;
		}
};
#endif
