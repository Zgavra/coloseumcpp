#ifndef DEFAULTNAMESREADER_H
#define DEFAULTNAMESREADER_H
#include <string>
#include <list>

class DefaultNamesReader
{
    public:
        DefaultNamesReader();
        virtual ~DefaultNamesReader();
        std::string GetRandomGladiatorName();
    protected:
        std::list<std::string> NamesFromFile;
    private:

};

#endif // DEFAULTNAMESREADER_H
