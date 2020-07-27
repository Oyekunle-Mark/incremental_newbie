#ifndef _MOVIES_H_
#define _MOVIES_H_
#include <vector>
#include "Movie.h"

class Movies
{
private:
    std::vector<Movie> movies_list{};

public:
    void add_movie(std::string, std::string, size_t);
    void increment_movie_count(std::string);
    void display_movies() const;
    Movies();
    Movies(const Movies &source);
    ~Movies();
}

#endif
