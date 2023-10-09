#include "PrefixMatcher.h"

int PrefixMatcher::selectRouter(string networkAddress){
    int longth=0;
    int routerNumber=0;
    for(size_t i=0;i<vec_address.size();i++)
    {
        int min_number = min(static_cast<int>(networkAddress.length()),static_cast<int>(vec_address[i].length()));
        int the_number_length=0;
        for(int K=0;K<min_number;K++)
        {
            if(vec_address[i][K]==networkAddress[K])
            {
                the_number_length++;
            }else{
                K=min_number;
            }
        }
        if(the_number_length>longth)
        {
            longth=the_number_length;
            routerNumber=i;
        }
    }
    return a[routerNumber];
}

void PrefixMatcher::insert(string address,int routerNumber)
{
    vec_address.push_back(address);
    a.push_back(routerNumber);
    return;
}
