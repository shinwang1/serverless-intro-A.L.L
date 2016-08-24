//
//  main.cpp
//  part-2
//
//  Created by Luis De Castro on 8/23/16.
//  Copyright © 2016 Lu. All rights reserved.
//

#include <iostream>
using namespace std;

// 1. Primitive Types and Basic Variables

int x = 5;
double y = 94.9;
string hello = "Hello";
string world = "World";
#define LENGTH 20
const int WIDTH = 30;

// 2. Functions and Returns

void helloWorld() {
    cout << hello << endl;
}

int add(int x, int y) {
    return x + y;
}

int addWithRef(int &x, int &y) {
    return x + y;
}

// 3. Data Structures
void arrays() {
    
    int numberArray[5] = {1, 2, 3, 4, 5};
    int numberArray2[] = {1, 2, 3, 4, 5};
    
}

//Hash tables are implemented using an array of Linked Lists
//int hash( string key )
//{
//    int value = 0;
//    for ( int i = 0; i < key.length(); i++ )
//        value += key[i];
//    return value % tableLength;
//}


// 4. Structs, Classes and OO

//Public by default
struct Person {
    string name;
    int age;
    void fn() {
    };
};

void structs() {
    
    Person joe;
    joe.name = "Joe";
    joe.age = 25;
    joe.fn();
    
    Person todd = { "Todd", 30 };
}


//Private by default
class Box {
public:
//  All the variables or functions declared as public can be accessed by anyone - object of the same class, object of the inheriting class as well as object of any other class.
    int length;
    int width;
    
protected:
//  All the variables and functions can be accessed only by object of the same class and object of the inheriting class.
    
    
private:
//  All the variables and functions can be accessed only by the object of the same class.
    
};

Box box { LENGTH, WIDTH };

int main() {
    int a = 5;
    int b = 10;
    
    add(a, b);
    helloWorld();
    
}
