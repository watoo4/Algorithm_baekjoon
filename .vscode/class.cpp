#include <iostream>
#include <string>

using namespace std;

class Character {
    friend class student;
private:
    int hp;
    string name;
public:
    Character(int hp, string name) : hp(hp), name(name) {}
    int hh() {
        return hp;
    }
    string nn() {
        return name;
    }
};
class Soldier : Character{
private:
    int year;
public:
    Soldier(int hp, string name, int year) : Character(hp,name), year(year) {}
    void show() {
    cout<<"hp: "<<hh()<<'\n'<<"name: "<<nn()<<'\n';
    }
    void yy() {
        cout<<"year: "<<year<<'\n';
    }
};
class mon : Character{
private:
    string map;
public:
    mon(int hp, string name, string map) : Character(hp,name), map(map) { };
    mon(const mon& other) : Character(other), map(other.map) {}
    void mm() {
        cout<<"map: "<<map<<'\n';
    }
};
class student{

};

int main(void) {
    Soldier s1(200,"kim",2005);
    s1.show();
    s1.yy();
    mon kk(55,"kk","home");
    mon kk2(kk);
    kk2.mm();
    kk.mm();
    return 0;
}