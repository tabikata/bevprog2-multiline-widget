#include "textedit.hpp"
#include "application.hpp"
#include "multiline.hpp"

#include <vector>
#include <fstream>
#include <iostream>

using namespace std;
using namespace genv;

class MyApplication: public Application
{
private:
    MultiLine * ml;
    TextEdit * fajlnev;

public:
    MyApplication()
    {
        ml = new MultiLine(this, 50, 150, 500, 400);
        fajlnev = new TextEdit(this, 50, 50, 500, 50, "haboruesbeke.txt");
    }
    ~MyApplication()
    {

    }

    void action(string id)
    {
        if (id == "enter")
        {
            ml->load(fajlnev->value());
        }
    }
};

int main()
{
    gout.open(600,600);

    //gout.load_font("D:\Kata\PPKE_ITK\MI_BSc_4.felev\bevprog2\Fonts\LiberationSerif-Bold.ttf", 10); //itt van vmi gond
    //gout.load_font("..\..\..\..\..\Fonts\LiberationSerif-Bold.ttf", 10);
    ///gout.load_font("LiberationSans-Regular.ttf", 12);
    //cout << gout.load_font("LiberationSerif-Regular.ttf", 10) << endl;
    //gout << font("LiberationSerif-Regular.ttf", 12);

    MyApplication app;
    app.event_loop();

    return 0;
}
