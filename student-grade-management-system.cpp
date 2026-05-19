#include <iostream>

using namespace std;

int main() {
    int num;
    int studID;
    string name, program;

    cout << "===============================================\n";
    cout << "                   User-Profile                \n";
    cout << "Enter your Name: ";
    getline(cin, name);
    
    cout << "Enter your Student ID: ";
    cin >> studID;
    
    cout << "Enter your Program Code: ";
    cin >> program;
    cout << "\n===============================================\n";
    cout << "                   Grade-Input                   \n";
    cout << "How many subjects are you currently taking? ";
    
    cin >> num;
    cout << "\nYou're currently taking " << to_string(num) << " subjects. \n";
    
    cout << "\nPlease enter your grades: \n\ne.g. \nSubject Code    : GNED01 \nSubject Grade  : 100 \n\n";
    
    double grades[num] = {0};
    string subs[num] = {""};
    
    int fail = 0;
    int pass = 0;
    
    for (int i = 0; i < num; i++){
        cout << "Subject Code " << to_string(i + 1) << " : ";
        cin >> subs[i];
        
        cout << "Subject Grade " << to_string(i + 1) << " : ";
        cin >> grades[i];
        
        cout << "\n";
        
        if(grades[i] < 75){
            fail++;
        } else {
            pass++;
        }
    }
    
    double sum = 0l;
    
    for (double grade : grades){
        sum += grade;
    }
    
    double total = sum/num;
    
    cout << "\n===============================================\n";
    
    cout << "Name                   | " << name << "\n";
    cout << "Student ID             | " << studID << "\n";
    cout << "Program                | " << program << "\n";
    cout << "Passed Subjects        | " << pass << "\n";
    cout << "Failed Subjects        | " << fail << "\n";
    cout << "GWA                    | " << to_string(total);
    
    cout << "\n===============================================\n";
    
    int j = 0;
    
    for(string sub : subs){
        
        cout << sub << " : " << grades[j] << " = ";
        
        if(grades[j] < 75){
            cout << "Failed";
        } else {
            cout << "Passed";
        }
        
        cout << "\n";
        j++;
    }
    
    cout << "\n===============================================\n";
    
    return 0;
}