#include <iostream>
using namespace std;


enum Rating {G, PG, PG13, R}

struct Movie {
    string movieTitle;
    int year;
    Rating movieRating;
};

string getRating(Rating rating) {
    switch(rating) {
        case G: return "G";
        case PG: return "PG";
        case PG13: return "PG13";
        case R: return "R";
        default: return "";
    }
}

void displayMovie(Movie movie) {
    cout << movie.movieTitle << ", " << movie.year << ", " << getRating(movie.movieRating) << endl; 
}

int main() {
    cout << "Favorite Movies!" << endl;

    Movie favorite = {"Onward", 2020, PG};
    //cout << getRating.(favorite.movieRating);
    displayMovie(favorite);

    return 0;
}
