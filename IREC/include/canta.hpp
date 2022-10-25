#ifndef CANTA_HPP
#define CANTA_HPP

#include<iostream>
#include<vector>
#include<string>


class canta{



public:

canta();
static void set_things(std::string thing1);//çantaya eşyaları koyan metod prototipi

static int count();//çantadaki eşyaları sayan metod prototipi
static bool query();//çantanın boş olup olmadığını sorgulayan metod prototipi
static void print_things();//çantadaki eşyaları yazdıran metod prototipi


private:
 static std::vector<std::string> belongings;//çantadaki eşyaları tutan class memberı
};


#endif