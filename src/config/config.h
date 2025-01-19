#include <string>
#include "./components/wrapperAbstract.h"
class Config{
    private:
        vector<WrapperAbstractBase*>baseVector;
        void initialize();

    public:     
        Config(std::string &snippit);
};