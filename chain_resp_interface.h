#ifndef CHAIN_RESP_INTERFACE_H_INCLUDED
#define CHAIN_RESP_INTERFACE_H_INCLUDED

class ChainRespIF {
public:
    virtual ~ChainRespIF() {} ;
    virtual ChainRespIF *SetNext(ChainRespIF *chain_resp) = 0;
    virtual void Handle(int currency) = 0;
};

#endif // CHAIN_RESP_INTERFACE_H_INCLUDED
