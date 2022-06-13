#include <iostream>

#include "include/specific_chain_resp_handler.h"

using namespace std;

int main()
{
    specific_chain_resp_handler_10 *handler_10 = new specific_chain_resp_handler_10();
    specific_chain_resp_handler_5 *handler_5 = new specific_chain_resp_handler_5();
    specific_chain_resp_handler_2 *handler_2 = new specific_chain_resp_handler_2();
    specific_chain_resp_handler_1 *handler_1 = new specific_chain_resp_handler_1();

    handler_10->SetNext(handler_5)->SetNext(handler_2)->SetNext(handler_1);
    handler_10->Handle(28);

    return 0;
}
