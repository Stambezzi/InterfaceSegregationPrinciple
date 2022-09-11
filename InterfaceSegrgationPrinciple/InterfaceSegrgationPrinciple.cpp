// InterfaceSegrgationPrinciple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Document;

class IPrinter
{
public:
    virtual void Print() = 0;
};

class IScanner
{
public:
    virtual void Scan() = 0;
};

class IFax
{
public:
    virtual void Fax() = 0;
};

class CPrinter : public IPrinter
{
public:
    virtual void Print() override
    {
        std::cout << "Printing" << std::endl;
    }
};

class CScanner  : public IScanner
{
public:
    virtual void Scan() override
    {
        std::cout << "Scanning" << std::endl;
    }
};

class CMachine : public IPrinter, IScanner
{
public:
    virtual void Print() override
    {
        std::cout << "Printing" << std::endl;
    }

    virtual void Scan() override
    {
        std::cout << "Scanning" << std::endl;
    }
};

int main()
{
    CMachine machine;
    machine.Print();
    machine.Scan();
}