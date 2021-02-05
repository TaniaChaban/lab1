#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) 
{
	int x1, x2, y1, y2, gip;
	cout<<"x1;y1"<<endl;
	cin>>x1>>y1; 	
	cout<<endl;
	cout<<"x2;y2"<<endl;
	cin>>x2>>y2; 
	cout<<endl;
	gip=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	cout<<"result gip="<<gip;
	//getch();
	return 0;
}
