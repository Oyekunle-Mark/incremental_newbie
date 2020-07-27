#include "Movies.h"

int main()
{
    Movies movie_list;
    movie_list.display_movies();
    movie_list.add_movie("Extraction", "PG18", 1);
    movie_list.display_movies();
}
