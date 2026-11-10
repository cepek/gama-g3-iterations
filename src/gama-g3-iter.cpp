#include <iostream>
#include <string>

//#include <fstream>
#include <iostream>
#include <gnu_gama/xml/dataparser.h>
#include <gnu_gama/g3/g3_model.h>
#include <gnu_gama/version.h>


using std::cout;
using std::cerr;
using std::string;


int main(int args, char* argv[])
{
    cerr << "\ngama-g3-iter ...\n\n";

    GNU_gama::g3::Model* model = new GNU_gama::g3::Model();
    cout << model << "\n";



    /*
    auto mb = model->points->begin();
    auto me = model->points->end();
    while (mb != me)
    {
        //mb++;
    }
    auto aaa = model->points->common_data()->points->find("A");*/
    /*auto a = aaa->X    ;
    auto q = a.free();

    aaa->free_position();*/
    //auto xxx = aaa->free_position();

}
