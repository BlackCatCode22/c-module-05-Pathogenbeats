// Andrew Powell Worked on in class 10/16/2024
// Created by BE129 and dH on 10/2/2024.
// zooKeeper01.cpp (originally parseArrivingAnimals.cpp)

#include <iostream>
#include <fstream>
#include <sstream>

#include <vector>
#include <string>

using namespace std;

// Function to split a string by spaces
vector<string> splitBySpace(const string& str) {
    vector<string> result;
    stringstream ss(str);
    string word;

    while (ss >> word) {
        result.push_back(word);
    }

    return result;
}


int main() {
    string myText = ""; // Creates a blank string called myText where text will eventually be written on.
    string myPause = ""; // Creates another blank string called myPause.
    // Open arrivingAnimals.txt
    ifstream MyFile("C:/Users/BE129/cppStuff/arrivingAnimals.txt"); // Opens file and reads
    // (ifstream means I want to read)

    // Read arrivingAnimals.txt line by line
    while (getline(MyFile, myText)){
        cout << myText;
        cout << endl;

        // Parse one single line
        vector<string> parts; // Create a list or array named parts that will hold strings.
        stringstream ss(myText); // Set up stringstream to read from myText line by line.
        string item; // Creates a variable named item that holds those pieces as its extracted.

        // Split by commas
        while (getline(ss, item, ',')) {
            // Remove any leading/trailing spaces from each part
            item.erase(0, item.find_first_not_of(" \t"));
            item.erase(item.find_last_not_of(" \t") + 1);
            parts.push_back(item);
        }

        // Print the split parts
        for (const auto& part : parts) {

            // see if this string contains hyena
            cout << "\n part in parts is: ";
            cout << part << endl;
        }

        // Now split each part by spaces and print the result
        string species = "";

        int sectionNum = 0;
        for (const auto& part : parts) {
            vector<string> splitWords = splitBySpace(part);
            if (sectionNum == 0) {
                cout << "Split part " << sectionNum << " (age in years and species) is: " << part << endl;
            }
            if (sectionNum == 1) {
                cout << "Split part " << sectionNum << " (birth season) is: " << part << endl;
            }
            if (sectionNum == 2) {
                cout << "Split part " << sectionNum << " (color) is: " << part << endl;
            }
            if (sectionNum == 3) {
                cout << "Split part " << sectionNum << " (weight) is: " << part << endl;
            }
            if (sectionNum == 4) {
                cout << "Split part " << sectionNum << " (origin part 1) is: " << part << endl;
            }
            if (sectionNum == 5) {
                cout << "Split part " << sectionNum << " (origin part 2) is: " << part << endl;
            }
            for (const auto& word : splitWords) {
                cout << word << endl;
            }
            cout << "-----" << endl; // Separator for clarity
            sectionNum++;
        }
        sectionNum = 0;
    }
    // Close the file.

    cout << "\n\n";




    return 0;
}

