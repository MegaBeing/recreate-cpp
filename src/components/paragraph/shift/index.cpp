#include "../paragraph.h"

namespace Paragraph
{
    class Shift : public IBase
    {
    protected:
        std::vector<std::pair<int, int>> extractor(std::string &snippet) override
        {
            return {};
        }

    public:
        std::string implementor(std::string &snippet) override
        {
            return "Shift";
        }
    };
}
