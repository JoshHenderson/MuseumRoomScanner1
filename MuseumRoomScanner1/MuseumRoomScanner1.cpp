// MuseumRoomScanner1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;
int convertedLine;
string _stringLine[100][15];

void readingData(){
	string line;
	FILE * roomdata;
	roomdata = fopen ("roomdata.txt", "r");
	if(roomdata != NULL)
	{
	fscanf(roomdata, "%d", line);
	convertedLine = atoi(line.c_str());
	int *_roomNumber = new int[convertedLine];
	int *_visitorNumber = new int[convertedLine];
	string *_IO = new string[convertedLine];
	int *_timeStayed = new int[convertedLine];

	/*string line2;
	getline(roomdata,line2);*/
		while(roomdata != NULL){
			for(int i=0;i<=convertedLine-1;i++)
			{
			fscanf(roomdata, "%d %d %s %d", &_roomNumber[i], &_visitorNumber[i], &_IO[i], &_timeStayed[i]);
			cout << "test" << endl;
			}


		}
	}
}

/*void sortingData(){
	string _roomNumber[100][3];
	string _visitorNumber[1024][4];
	string _IO[2][3];
	string _timeStayed[1439][4];

	for(int i=0;i<convertedLine;i++)
	{
		for(int j=0;j<15;j++)
		{
			if(_stringLine[i][j] != " "){

			_roomNumber[i][j] += _stringLine[i][j];
			cout << "not sure if working" << endl;
			//cout << i << endl;
			//cout << j << endl;
			}
		}
	}


}*/

int _tmain(int argc, _TCHAR* argv[])
{
	try{
	readingData();
	//sortingData();
	}
	catch (...)
	{
    cout << "exception" << endl;
	}

	cin.ignore();
	return 0;
}

