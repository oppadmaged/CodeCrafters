#include "News.h"

News::News(string title = "title", string description = "description",  string date = "date", string category = "category", float rating = -1){
    this->title = title, this->description = description, this->date = date, this->category = category, this->rating = rating; 
}

void News::setRating(float rating){this->rating;}
float News::getRating(){return rating;}
void News::setCategory(string category){this->category;}
string News::getCategory(){return category;}
void News::setTitle(string title){this->title;}
string News::getTitle(){return title;}
void News::setDescription(string description){this->description;}
string News::getDescription(){return description;}
void News::setDate(string date){this->date;}
string News::getDate(){return date;}

ostream& operator<<(ostream& COUT, News &news){
    COUT << "Title: " << news.getTitle()
        << "\nDescription: " << news.getDescription() 
        << "\nCategory: " << news.getCategory() 
        << "\nDate: " << news.getDate() 
        << "\nRating: " << news.getRating() << endl;
    return COUT;
}
