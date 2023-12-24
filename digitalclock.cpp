#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int hr,sec,min;
	cout<<"Enter time in format HH:MM:SS ";
	cin>>hr>>sec>>min;
	while(true){
		while(hr<24){
			while(min<60){
				while(sec<60){
					Sleep(1000);
					system("cls");
					sec++;
					cout<<hr<<" : "<<min<<" : "<<sec<<endl;
				}
				min++;
				sec=0;
			}
			hr++;
			min=0;
		}
		hr=0;
	}
	return 0;
}
