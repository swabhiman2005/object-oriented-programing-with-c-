using namespace std;
#include<iostream>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float distance;
	cout<<"\n enter the x and y coordinates of the first point :";
	cin>>x1>>y1;
	cout<<"\n enter the x and y coordinates of the second point :";
	cin>>x2>>y2;
	distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	cout<<"\n Distance = "<<distance;
	return 0;
}
