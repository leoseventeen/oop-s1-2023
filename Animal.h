using namespace std;

class Animal{
private :
int volume;
protected:
string name;
int animalID;

public:
void set_name(string n);
void set_volume(int vol);
virtual string get_name()=0;
int get_animalID();
int get_volume();

};