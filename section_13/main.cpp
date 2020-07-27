#include "Movies.h"

int main()
{
    Movies movie_list;

    movie_list.display_movies();

    movie_list.add_movie("Extraction", "PG18", 1);
    movie_list.add_movie("Titanic", "Family", 3);

    movie_list.increment_movie_count("Extraction");
    movie_list.increment_movie_count("Random Movie");

    movie_list.display_movies();

    return 0;
}
