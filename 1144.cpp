#include<iostream>
using namespace std;

int height_of_apple[10];
int height_of_taotao;
int total_height;
int getting_apples = 0;
int main()
{
	for(int i = 0; i < 10; i++)
	{
		cin>>height_of_apple[i];
	}
	cin>>height_of_taotao;
	total_height = height_of_taotao + 30;
	for(int i = 0; i < 10; i++)
	{
		if(height_of_apple[i] <= total_height)
		{
			++getting_apples;
		}
	} 
	cout<<getting_apples<<endl;
	
	return 0;
}
