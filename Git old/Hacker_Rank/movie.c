#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Movies
{
public:
    string name;
    int releaseYear;
    int duration;
    string genre;
};

int main()
{

    Movies movie[1900];
    int i = 0;
    movie[i].name = "Forrest Gump";
    movie[i].releaseYear = 1994;
    movie[i].duration = 142;
    movie[i].genre = "Drama, Romance";

    cout << "Welcome to the 'Movie Catalogue' Admin Program\n";
    int quit;
    do
    {
        cout << "Choose [a]dd, [l]ist, [s]earch, [v]iew, [d]elete or [q]uit\n";
        char key;

        cin >> key;
        switch (key)
        {
            case 'a':
                i += 1;
                cout << "Enter movie name: ";
                cin >> movie[i].name;

                cout << "Enter release year: ";
                cin >> movie[i].releaseYear;

                cout << "Enter duration in minuetes: ";
                cin >> movie[i].duration;

                cout << "Enter movie genre(s): ";
                cin >> movie[i].genre;

                /*do
                {
                    int k = 0;
                    cout << "Enter movie genre ('x' to end): ";
                    cin >> movie[i].genre[k];
                    k++;
                } while(movie[i].genre[k - 1] == 'x');*/
                break;

        case 'l':
            for (int j = 0; j <= i; j++)
            {
                cout << (j + 1) << ") " << movie[j].name << '\n';
            }
            break;

        case 's':

            break;

        case 'v':
            int k;
            cout << "Movie number to view: ";
            cin >> k;
            k = k - 1;
            cout << movie[k].name << endl;
            cout << "Released: " << movie[k].releaseYear << endl;
            cout << "Duration: " << movie[k].duration << endl;
            cout << "Genre(s): " << movie[k].genre << endl;
            break;

        case 'd':
            cout << "This operation is too complicated to perform without file\n";
            break;

        case 'q':
            cout << "Goodbye!\n";
            quit = 1;
            break;
        }
    } while (quit != 1);
}