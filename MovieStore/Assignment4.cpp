// Assignment4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include"Movie.h"
#include"DramaMovie.h"

int main()
{
	Movie * ptr;
	ptr = new DramaMovie("Test", 2018, "michael", "D");
	cout << ptr->getGenre();


	system("Pause");
    return 0;
}

