#ifndef NEWS_H
#define NEWS_H

#include <iostream>
using namespace std;
class News{
    string title, description, date, category;
    float rating;

    public:
        News(string title, string description,  string date, string category, float rating);

        void setRating(float rating);
        float getRating();
        void setCategory(string category);
        string getCategory();
        void setTitle(string title);
        string getTitle();
        void setDescription(string description);
        string getDescription();
        void setDate(string date);
        string getDate();

};

ostream& operator<<(ostream& COUT, News &news);

#endif