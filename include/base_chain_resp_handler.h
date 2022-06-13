#ifndef BASE_CHAIN_RESP_HANDLER_H
#define BASE_CHAIN_RESP_HANDLER_H

#include "../chain_resp_interface.h"

class base_chain_resp_handler : public ChainRespIF
{
    public:
        base_chain_resp_handler();
        virtual ~base_chain_resp_handler();

        ChainRespIF *SetNext(ChainRespIF *chain_resp) override;
        void Handle(int currency) override;
    protected:

    private:
        ChainRespIF *next_handler;
};

#endif // BASE_CHAIN_RESP_HANDLER_H
