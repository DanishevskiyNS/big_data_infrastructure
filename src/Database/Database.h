// #include <Interfaces/IDAtabase.h>
#include <src/Interfaces/IDataBase.h>
#include <unordered_map>

class RamDatabase: IDatabase{
public:

    void put(const std::string& key, const std::string& value) override;
    std::string get(const std::string& key) override;

    void printTable();

private:

    std::unordered_map<std::string, std::string> table;

    void load();
    void save();

    void loadMetadata();
    void saveMetadata();

};