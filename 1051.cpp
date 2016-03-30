#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;

double diameter_in_inch = 0;
double perimeter_in_inch = 0;



int revolution = 0;

double time_in_second = 0;
double time_in_hour = 0;

int N = 0;

double distance_in_inch = 0;
double distance_in_foot = 0;
double distance_in_mile = 0;
double speed = 0;

double pi = 3.1415927;

int main()
{
	while(++N)
	{
		cin>>diameter_in_inch>>revolution>>time_in_second;
		if(revolution==0)
		{
			break;
		}
		
		perimeter_in_inch = pi * diameter_in_inch;
		distance_in_inch = perimeter_in_inch * revolution;
		distance_in_foot = distance_in_inch/12;
		distance_in_mile = distance_in_foot/5280;
		
		time_in_hour = time_in_second/(60*60);
		
		speed = distance_in_mile / time_in_second * 60 * 60;
		//cout<<"Trip #"<<N<<": "<<setprecision(3)<<distance_in_mile<<" "<<setprecision(3)<<speed<<endl;//保留3位有效数字
		printf("Trip #%d: %.2f %.2f\n",N,distance_in_mile,speed); 
	}
	
	return 0;
}
