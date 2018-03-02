// ------------------------------------------------ DramaMovie.h -------------------------------------------------------
//Team 0 343 B
// Creation Date: 2/28/18
// Date of Last Modification: 2/28/18
// --------------------------------------------------------------------------------------------------------------------
// Purpose -
//We use the DramaMovie to represent 
//The Drama Movies we have in our inventory
// -------------------------------------------------------------------------------------------------------------------- 
#include"Movie.h"
using namespace std;
class DramaMovie: public Movie 
{
public:
	//--------Default Constructor--------
	//Sets all the member variables to null
	DramaMovie();
	DramaMovie(string inputTitle, int inputYear, string inputDirector, string inputGenre);

	//--------GetTitle()--------
	//Member variable getter for Title
	string GetTitle();

	//--------GetDirector()--------
	//Member variable getter for Director
	string GetDirector();

	//--------GetReleaseYear()--------
	//Member variable getter for ReleaseYear
	int GetReleaseYear();

	//Sets all the member variables to null
	~DramaMovie();

	//-------------Comparison operators---------------
	//The comparison operators are used to compare two Drama movies
	//so we are able to store them in our inventory sorted
	 bool operator > (const DramaMovie &);
	 bool operator < (const DramaMovie &);
	 bool operator == (const DramaMovie &);
	 string getGenre();
private:
	string Title;
	int ReleaseYear;
	string Director;

};