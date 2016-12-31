//
//  main.cpp
//  Bjorn_cpp_learning
//
//  Created by Keyanoush Razavi on 24.12.16.
//  Copyright © 2016 Kanonymous. All rights reserved.
//

#include <iostream>
#include <string>
#include <typeinfo>
#include <sstream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

double kmtomi(double x)
{
    return 1.609 * x;
}

void sort(vector<string>& numbers)
{
    string save1, save2;
    if(numbers[2]<numbers[0] && numbers.size() > 2)
    {
        save1 = numbers[0];
        save2 = numbers[1];
        numbers[0] = numbers[2];
        numbers[1] = numbers[3];
        numbers[2] = save1;
        numbers[3] = save2;
    }
}



void currtransfer(double entry, char curr)
{
    if(curr=='e')
    {
        cout << entry << " Euros are " << entry*1.4 << " Yen" << endl;
    }
    else if(curr=='y')
    {
        cout << entry << " Yen are " << entry*10 << " Euros" << endl;
    }
    else
    {
        cout << "no valid currency or check spelling" << endl;
    }
}
void print_square(int v)
{
    cout << v << '\t' << v*v << '\n';
}

double convtom(string number, string unit)
{
    if(unit == "cm")
    {
        return stod(number)/100;
    }
    else if(unit == "ft")
    {
        return stod(number)*0.3048;
    }
    else if(unit == "in")
    {
        return stod(number)*0.0254;
    }
    return stod(number);
}

template<class egal>
egal max_value(vector<egal> distance)
{
    egal largest = distance[0];
    for(int i = 1; i < distance.size(); i++)
    {
            if(largest < distance[i])
            {
                largest = distance[i];
            }
    }
    return largest;
}

template<class egal>
egal small_value(vector<egal> distance)
{
    egal smallest = distance[0];
    for(int i=1;i<distance.size();i++)
    {
        if(smallest>distance[i])
        {
            smallest = distance[i];
        }
    }
    return smallest;
}

template<class egal>
egal summe_vector(vector<egal> distance)
{
    egal summe;
    for(int i=0;i<distance.size();i++)
    {
        summe+=distance[i];
    }
    return summe;
}

bool is_prime(int n)
{
    for(int p=2; p<n; p++)
    {
        if(n%p==0)
            return false;
    }
    return true;
}

int get_mode(vector<int> mode)
{
    int begin = mode[0];
    int mode_zahl = 0;
    int counter = 1;
    //der gesamt counter zählt wie oft die maximal vorkommende zahl auftaucht.
    int gesamt_counter = 1;
    
    for(int i=1; i<mode.size(); i++)
    {
        if(begin == mode[i])
        {
            counter++;
            if(counter > gesamt_counter)
            {
                mode_zahl = mode[i];
                gesamt_counter = counter;
            }
        }
        else
        {
            begin = mode[i];
            counter = 1;
        }
    }
    cout << "Zahl taucht " << gesamt_counter << " auf" << endl;
    return mode_zahl;
}

int main(int argc, const char * argv[]) {
//    vector<double> temps;
//    for(double temp; cin >> temp; )
//        temps.push_back(temp);
//    
//    double sum = 0;
//    for (int x:temps) sum += x;
//    cout << "Average temperature: " << sum/temps.size() << endl;
//    
//    sort(temps.begin(), temps.end());
//    cout << "Median temperature: " << temps[temps.size()/2] << endl;
//
//    vector<string> dict;
//    vector<string> disliked = {"end", "Hallo", "nein"};
//    int test = 0;
//    for(string word; cin >> word; )
//    {
//        for(int i=0; i < disliked.size(); i++)
//        {
//            if(word == disliked[i]) test = 1;
//        }
//        if(test == 1)
//        {
//            dict.push_back("BEEP");
//            cout << "Word: " << word << " erased" << endl;
//        }
//        else
//            dict.push_back(word);
//        test = 0;
//    }
//    sort(dict.begin(), dict.end());
//    
//    for(int i; i<dict.size(); i++)
//    {
//        if(i==0||dict[i-1]!=dict[i])
//            cout << dict[i] << endl;
//    }
//    vector <string> numbers;
//    vector <double> meter;
//    string n;
//    string unit;
//    string save1, save2;
//    
//    try{
//    while(cin>>n && n!="|")
//    {
//        cin >> unit;
//        //initialsierung des vectors
//        if(unit=="cm" || unit=="m" || unit=="in"|| unit=="ft")
//        {
//            meter.push_back(convtom(n, unit));
//            if(numbers.size() < 4)
//            {
//                numbers.push_back(n);
//                numbers.push_back(unit);
//                sort(numbers);
//            }
//        
//            else if(convtom(n, unit) < convtom(numbers[0], numbers[1]))
//            {
//                numbers[0] = n;
//                numbers[1] = unit;
//                cout << "The smallest so far: " << numbers[0] << endl;
//            }
//            else if(convtom(n, unit) > convtom(numbers[2], numbers[3]))
//            {
//                numbers[2] = n;
//                numbers[3] = unit;
//                cout << "The biggest so far: " << numbers[2] << endl;
//            }
//        }
//        else
//        {
//            cout << "Please enter accepted unit" << endl;
//            cin.clear();
//            cin.ignore();
//            cin.clear();
//            cin.ignore();
//        }
//            
//        
//    }
//        cout << numbers[0] << " "<<numbers[1] << " und " <<  numbers[2] << " " << numbers[3];
//        if(numbers[0]==numbers[2])
//            cout << "the numbers are equal: " << numbers[0] << endl;
//        else if(stod(numbers[2])-stod(numbers[0])<0.01)
//            cout << "The numbers are almost equal" << endl;
//        else
//            cout << "The smaller number is: " << numbers[0] << endl;
//        sort(meter.begin(), meter.end());
//        for(int i = 0; i < meter.size(); i++)
//        {
//            cout << meter[i] << " m" << endl;
//        }
//    }
//    
//    catch(const invalid_argument& ia)
//    {
//        cout << "wrong input. Program failed" << ia.what() << endl;
//    }
//    
//    
//    vector<int> primes = {2};
//    
//    
//    for(int i=3; i< 101; i++)
//    {
//        vector<int> rechnung;
//        for(int j=2; j<10; j++)
//        {
//            if(j<i && j!=i) rechnung.push_back(i%j);
//        }
//        int counter = 0;
//        
//        for(int k = 0; k<rechnung.size(); k++)
//        {
//            if(rechnung[k] != 0)
//                counter++;
//        }
//        if(counter == rechnung.size())
//        {
//            primes.push_back(i);
//        }
//    }
//    
//    for(int i=0;i<primes.size();i++)
//    {
//        cout << primes[i] << endl;
//    }
//    

    vector<int> primes;
    int count = 2;
    int input =0;
    cin >> input;
    while(primes.size()<input)
    {
        if(is_prime(count))
            primes.push_back(count);
        count++;
    }
    
    for(int i=0;i<primes.size();i++)
    {
        cout << primes[i] << endl;
    }
    return 0;
}






















