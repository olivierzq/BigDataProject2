#ifndef SERVER_H
#define SERVER_H

#include <map>
#include <list>
#include "Node.h"
#define MAXDATASIZE 1000

class Server {
protected:
    std::string selfIP;
    size_t selfID;
    std::map<std::string, size_t> lockMap;

    bool connectNode(std::string, std::string, lockpackage); // IP, PORT, package
    // bool daemon(std::string); // Listen ports

public:
    Server(){};
    void serializeMap(std::map<std::string, size_t>);
    std::map<std::string, size_t> deserializeMap();
    size_t checkItem(std::string); // Lockname
    void deleteItem(std::string); // Lockname
    void updateItem(lockpackage); // UID lockname
};

#endif