#include<iostream>

using namespace std;

void main()
{
	int input;
	cin>> input;

	char* result= new  char[4];

	//calculate the first two digit
	int firstTwoDigit=input / 10000;
	if (firstTwoDigit>=65 && firstTwoDigit<=90)
	{
		result[0]=(char)firstTwoDigit;
	}
	else
	{
		result[0]='+';
	}

	//calculate the middle two digit
	int middleTwoDigit=(input /100) % 100;
	if (middleTwoDigit>=65 && middleTwoDigit<=90)
	{
		
		result[1]=(char)middleTwoDigit;
	}
	else
	{
		result[1]='+';
	}
	
	//calculate the last two digit
	int lastTwoDigit=input % 100;
	if (lastTwoDigit>=65 && lastTwoDigit<=90)
	{
		result[2]=(char)lastTwoDigit;
	}
	else
	{
		result[2]='+';
	}

	result[3]='\0';
	
	
	cout<<result<<endl;


}
