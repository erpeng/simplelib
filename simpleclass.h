#ifndef SIMPLECLASS_H
#define SIMPLECLASS_H

#include <iostream>
#include <vector>

class SimpleClassCallback
{
    public:
    virtual ~SimpleClassCallback() {}
    virtual void onStart() {};
};

class SimpleClass
{
public:
    SimpleClass(){};
    std::string hello();
    void helloString(std::vector<std::string> *results);
    void helloBytes(std::vector<char> *results);
    void setCallBack(SimpleClassCallback *scc);
};




#endif
