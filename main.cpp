//This code is a c++ translation of my Lifting line code for Potential flow part 1. 
//I wrote my last semester of grad school. The Python file for this one is called W1
//The code is based of of Chapter 1 of Warren Phillips Mechanics of Flight book

#include <iostream>
#include <jsoncpp/json/value.h>
#include <jsoncpp/json/json.h>
#include <fstream>
#include <string>

using namespace std;

//Main function that calls other functions
int main() {

    //Using fstream to get the file pointer in "file"
    ifstream file("user_input_wing.json");
    Json::Value actualJson;
    Json::Reader reader;

    //Using reader we are parsing the Json
    reader.parse(file, actualJson);

    //Now the actualJson will have the json data
    cout << "Total json data:\n" << actualJson << endl;

    //Accessing individual parameter
    cout << "condition" << actualJson["condition"] << endl;

    return 0;
}