#include "../space.h"

namespace Space
{
    class Vspace : public IBase
    {
    protected:
        std::vector<std::pair<int, int>> extractor(std::string &snippet) override
        {
            return {};
        }

    public:
        std::string implementor(std::string &snippet) override
        {
            return "Vspace";
        }
    };
}
