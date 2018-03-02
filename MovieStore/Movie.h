
#include<string>
using namespace std;
#ifndef MOVIE_H
#define MOVIE_H
class Movie
{
public:
	Movie();
	virtual string getGenre() = 0;
	string Genre;
};
#endif