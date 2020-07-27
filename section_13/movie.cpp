#include "Movie.h"
#include <iostream>

Movie::Movie(std::string movie_name, std::string movie_rating, size_t watched)
    : movie_name{movie_name}, movie_rating{movie_rating}, watched{watched} {}

Movie::Movie(const Movie &source)
    : Movie{source.movie_name, source.movie_rating, source.watched} {}

Movie::~Movie() {}

void Movie::display_details() const
{
    std::cout << movie_name << " "
              << movie_rating << " "
              << watched << std::endl;
}
