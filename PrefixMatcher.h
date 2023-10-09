#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

class PrefixMatcher{
    private:
        vector<string> vec_address;
        vector<int> a;
    public:
        int selectRouter(string networkAddress);// return the router with the longest matching prefix
        void insert(string address, int routerNumber);// add a router address

};

#endif
