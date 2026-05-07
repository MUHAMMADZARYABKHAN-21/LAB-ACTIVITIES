#include<iostream>
#include<string>
using namespace std;

// Abstract Base Class
class Movie {
protected:
    string name, genre, director;
    int duration, shootingTime, postProductionTime;

public:
    Movie(string n, string g, string d, int dur, int shoot, int post)
        : name(n), genre(g), director(d), duration(dur),
          shootingTime(shoot), postProductionTime(post) {}

    virtual double EstimatedCost() = 0;

    void PrintMovieInformation() {
        cout << "\nMovie Information:\n";
        cout << "Name: " << name << endl;
        cout << "Genre: " << genre << endl;
        cout << "Director: " << director << endl;
        cout << "Duration: " << duration << " mins" << endl;
        cout << "Shooting Time: " << shootingTime << " hrs" << endl;
        cout << "Post Production Time: " << postProductionTime << " hrs" << endl;
    }

    virtual void PrintImportantInformation() {
        cout << "\nImportant Information:\n";
        cout << "Name: " << name << endl;
        cout << "Genre: " << genre << endl;
        cout << "Director: " << director << endl;
        cout << "Shooting Time: " << shootingTime << " hrs" << endl;
    }
};

// Derived Class Animated Movie
class AnimatedMovie : public Movie {
public:
    AnimatedMovie(string n, string g, string d, int dur, int shoot, int post)
        : Movie(n, g, d, dur, shoot, post) {}

    double EstimatedCost() override {
        return postProductionTime * 1000;
    }

    void PrintImportantInformation() override {
        cout << "\nAnimated Movie Important Information:\n";
        cout << "Name: " << name << endl;
        cout << "Director: " << director << endl;
        cout << "Cost: $" << EstimatedCost() << endl;
        cout << "Post Production Time: " << postProductionTime << " hrs" << endl;
    }
};

// Derived Class Live Action Movie
class LiveActionMovie : public Movie {
public:
    LiveActionMovie(string n, string g, string d, int dur, int shoot, int post)
        : Movie(n, g, d, dur, shoot, post) {}

    double EstimatedCost() override {
        return shootingTime * 800;
    }
};

int main() {

    AnimatedMovie a("Frozen", "Animation", "Disney", 120, 50, 200);
    LiveActionMovie l("Avengers", "Action", "Russo Brothers", 180, 300, 100);

    a.PrintMovieInformation();
    cout << "Estimated Cost: $" << a.EstimatedCost() << endl;
    a.PrintImportantInformation();

    l.PrintMovieInformation();
    cout << "Estimated Cost: $" << l.EstimatedCost() << endl;
    l.PrintImportantInformation();

    return 0;
}