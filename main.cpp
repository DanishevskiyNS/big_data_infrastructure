#include <string>
#include <iostream>
#include "src/Database/Database.h"


int main()
{
    RamDatabase db;

    std::string key = "a";
    std::string value = "20";

    db.put(key, value);
    auto b = db.get(key);

    std::cout<<b<<std::endl;

    db.printTable();
}