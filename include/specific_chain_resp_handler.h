#ifndef SPECIFIC_CHAIN_RESP_HANDLER_H
#define SPECIFIC_CHAIN_RESP_HANDLER_H

#include "base_chain_resp_handler.h"

class specific_chain_resp_handler_10 : public base_chain_resp_handler
{
    public:
        void Handle(int currency) override;
};

class specific_chain_resp_handler_5 : public base_chain_resp_handler
{
    public:
        void Handle(int currency) override;

};

class specific_chain_resp_handler_2 : public base_chain_resp_handler
{
    public:
        void Handle(int currency) override;

};

class specific_chain_resp_handler_1 : public base_chain_resp_handler
{
    public:
        void Handle(int currency) override;

};

#endif // SPECIFIC_CHAIN_RESP_HANDLER_H
