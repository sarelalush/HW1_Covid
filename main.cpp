#include <iostream>
#include <fstream>
#include <vector>

void read_from_generation_file();

using namespace std;

void read_from_config_file(ifstream& file,int & dim , string& target ,int & max_time ){
    file >>dim;
    getline(file , target);
    getline(file , target);
    file >> max_time;
}

void read_from_generation_file(ifstream& file,int & number_of_virus ,vector<string>& vec ) {
    file >> number_of_virus;
    string virus;
    getline(file,virus);
    while(getline(file,virus))
    {
        vec.push_back(virus);
    }
}

int main() {
    ifstream config_file("config.txt");
    ifstream generation_file("first_generation.txt");
    vector<string> first_generation_vector;
    int dim = 0 , max_time = 0 , number_of_virus = 0 , curr_time = 0;
    string target ;

    if(!config_file.is_open() || !generation_file) {
        cerr << "file not open!";
        return 0;
    }
    read_from_config_file(config_file , dim , target , max_time);
    read_from_generation_file(generation_file , number_of_virus , first_generation_vector);

    while(curr_time < max_time && is_hit()){





    }


    return 0;
}


