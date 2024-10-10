#include <src/Database/Database.h>
#include <iostream>

RamDatabase::RamDatabase(){}
std::string RamDatabase::get(const std::string& key){
    if (table.find(key) == table.end())
    {
        std::cout<<"Could not find key: " << key << std::endl;
        return "";
    }
    return table.at(key);
}
void RamDatabase::put(const std::string& key, const std::string& value){
    if (table.find(key) == table.end())
    {
        table.insert(std::make_pair(key, value));
        return;
    }
    table[key] = value;
}

void RamDatabase::printTable()
{
    // table::iterator itr; 
  std::cout << "\nAll Elements : \n"; 
  for (auto itr = table.begin();  
       itr != table.end(); itr++)  
  { 
    // itr works as a pointer to  
    // pair<string, double> type  
    // itr->first stores the key part and 
    // itr->second stores the value part 
    std::cout << itr->first << "  " <<  
            itr->second << std::endl; 
  } 
}

void RamDatabase::load(){}
void RamDatabase::save(){}
void RamDatabase::loadMetadata(){}
void RamDatabase::saveMetadata(){}





