#include <iostream>
#include "Movies.h"

Movies::Movies() {}

Movies::Movies(const Movies &source)
    : movies_list{source.movies_list} {}

Movies::~Movies() {}

void Movies::add_movie(std::string name, std::string rating, size_t watched)
{
    movies_list.push_back(Movie{name, rating, watched});
}

bool Movies::hasMovie(std::string name) const
{
    for (const Movie &movie : movies_list)
    {
        if (movie.get_name() == name)
            return true;
    }

    return false;
}

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
