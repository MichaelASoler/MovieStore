#include "stdafx.h"
#include "DramaMovie.h"


DramaMovie::DramaMovie()
{
	 Title = "";
	 ReleaseYear = 0;
	 Director = "";
	 Genre = "D";
}

DramaMovie::DramaMovie(string inputTitle, int inputYear, string inputDirector, string inputGenre)//This may be where input checking goes
{
	Title = inputTitle;
	ReleaseYear = inputYear;
	Director = inputDirector;
	Genre = "D";
}

string DramaMovie::GetTitle()
{
	return Title;
}

string DramaMovie::GetDirector()
{
	return Director;
}

int DramaMovie::GetReleaseYear()
{
	return ReleaseYear;
}

bool DramaMovie::operator > (const DramaMovie & compareDrama)
{
	if (Director > compareDrama.Director)
	{
		return true;
	}
	else if (Director < compareDrama.Director)
	{
		return false;
	}
	else
	{
		if (Title > compareDrama.Director)
		{
			return true;
		}

		else
		{
			return false;

		}
	}
}
 bool DramaMovie:: operator < (const DramaMovie & compareDrama)
{
	 if (Director < compareDrama.Director)
	 {
		 return true;
	 }
	 else if (Director > compareDrama.Director)
	 {
		 return false;
	 }
	 else
	 {
		 if (Title < compareDrama.Director)
		 {
			 return true;
		 }

		 else
		 {
			 return false;

		 }
	 }
}
 bool DramaMovie::operator == (const DramaMovie & compareDrama)
{
	 if (Director == compareDrama.Director && Title == compareDrama.Title)
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
}

 DramaMovie::~DramaMovie()
 {

 }

 string DramaMovie:: getGenre()
 {
	 return Genre;
 }