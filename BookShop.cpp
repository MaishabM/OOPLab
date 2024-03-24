#include <bits/stdc++.h>
using namespace std;

class books
{
  char *author;
  char *title;
  int price;
  char *publisher;
  int stock;

public:
  books(const char *author, const char *title, int price, const char *publisher, int stock)
  {
    this->author = new char[strlen(author) + 1];
    strcpy(this->author, author);

    this->title = new char[strlen(title) + 1];
    strcpy(this->title, title);

    this->price = price;

    this->publisher = new char[strlen(publisher) + 1];
    strcpy(this->publisher, publisher);

    this->stock = stock;
  }

  bool check(const char *stit, const char *sauth)
  {
    return (strcmp(title, stit) == 0 && strcmp(author, sauth) == 0);
  }

  void sell(int copies)
  {
    if (copies <= stock)
    {
      cout << "Book Details: \n";
      cout << "Author=" << author << endl;
      cout << "Title=" << title << endl;
      cout << "Price=" << price << endl;
      cout << "Publisher=" << publisher << endl;
      cout << "Stock=" << stock << endl;
      cout << "Number of copies=" << copies << endl;
      int total = copies * price;
      cout << "Total amount: " << total << endl;
    }
    else
      cout << "Required copies are not in stock" << endl;
  }
};

int main()
{
  books b1("E Balagurusamy", "Object Oriented Programming with C++", 500, "McGraw Hill", 5);
  books b2("Seymour Lipshuctz", "Data Structures with C", 350, "McGraw Hill", 10);
  books b3("Tahereh Mafi", "Shatter Me", 2500, "ABC Publishing", 11);
  const char *stit = "Data Structures with C";
  const char *sauth = "Seymour Lipshuctz";

  if (b2.check(stit, sauth))
  {
    int copies;
    cout << "Book Is Available. Enter the number of copies requested: ";
    cin >> copies;
    b2.sell(copies);
  }
  else
    cout << "The book requested is not in the inventory.";

  return 0;
}