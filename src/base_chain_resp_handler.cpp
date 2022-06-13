#include "../include/base_chain_resp_handler.h"

#include <iostream>

using namespace std;

base_chain_resp_handler::base_chain_resp_handler()
{
    cout << "ctor " << __func__ << " is created\n";
}

base_chain_resp_handler::~base_chain_resp_handler()
{
    cout << "dtor " << __func__ << " is destroyed\n";
}

ChainRespIF* base_chain_resp_handler::SetNext(ChainRespIF* chain_resp)
{
    next_handler = chain_resp;
    return next_handler;
}

void base_chain_resp_handler::Handle(int currency)
{
    if(next_handler != nullptr) next_handler->Handle(currency);
}
