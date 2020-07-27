#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <iostream>
#include <string>

class Movie
{
private:
    std::string movie_name;
    std::string movie_rating;
    size_t watched;

public:
    void set_name(std::string name) { movie_name = name; }
    std::string get_name() const { return movie_name; }
    void set_movie_rating(std::string rating) { movie_rating = rating; }
    std::string get_movie_rating() const { return movie_rating; }
    void increment_watched() { watched++; }
    size_t get_watched() const { return watched; }
    void display_details() const
    {
        std::cout << movie_name << " "
                  << movie_rating << " "
                  << watched << std::endl;
    }
    Movie();
    Movie(const Movie &source);
    ~Movie();
};

#endif;
