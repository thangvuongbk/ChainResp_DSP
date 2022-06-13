#include "../include/specific_chain_resp_handler.h"

#include <iostream>
#include <math.h>

using namespace std;


void specific_chain_resp_handler_10::Handle(int currency)
{
    if(currency > 0) {
        int result = currency / 10;
        int mod = currency % 10;
        cout << "with 10 needs: " << result << endl;
        base_chain_resp_handler::Handle(mod);
    }
}

void specific_chain_resp_handler_5::Handle(int currency)
{
    if(currency > 0) {
        int result = currency / 5;
        int mod = currency % 5;
        cout << "with 5 needs: " << result << endl;
        base_chain_resp_handler::Handle(mod);
    }
}

void specific_chain_resp_handler_2::Handle(int currency)
{
    if(currency > 0) {
        int result = currency / 2;
        int mod = currency % 2;
        cout << "with 2 needs: " << result << endl;
        base_chain_resp_handler::Handle(mod);
    }
}

void specific_chain_resp_handler_1::Handle(int currency)
{
    if(currency > 0) {
        int result = currency;
        cout << "with 1 needs: " << result << endl;
        base_chain_resp_handler::Handle(result);
    }
}
