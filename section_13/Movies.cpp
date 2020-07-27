#include <iostream>
#include "Movies.h"

Movies::Movies() {}

Movies::Movies(const Movies &source)
    : movies_list{source.movies_list} {}

Movies::~Movies() {}

void Movies::display_movies() const
{
    if (movies_list.size())
    {
        for (const Movie &movie : movies_list)
            movie.display_details();
    }
    else
    {
        std::cout << "Movie list is empty." << std::endl;
    }
}
