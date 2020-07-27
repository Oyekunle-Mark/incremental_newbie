#include <iostream>
#include "Movies.h"

Movies::Movies() {}

Movies::Movies(const Movies &source)
    : movies_list{source.movies_list} {}

Movies::~Movies() {}

void Movies::add_movie(std::string name, std::string rating, size_t watched)
{
    if (hasMovie(name))
    {
        std::cout << "Movie "
                  << name
                  << " already exists"
                  << std::endl;
    }
    else
    {
        movies_list.push_back(Movie{name, rating, watched});
    }
}

void Movies::increment_movie_count(std::string name)
{
    if (hasMovie(name))
    {
        for (Movie &movie : movies_list)
        {
            if (movie.get_name() == name)
                movie.increment_watched();
        }
    }
    else
    {
        std::cout << "Movie "
                  << name << " has not been added yet"
                  << std::endl;
    }
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
        std::cout << "\n=========================================="
                  << std::endl;

        for (const Movie &movie : movies_list)
            movie.display_details();

        std::cout << "==========================================\n"
                  << std::endl;
    }
    else
    {
        std::cout << "Movie list is empty." << std::endl;
    }
}
