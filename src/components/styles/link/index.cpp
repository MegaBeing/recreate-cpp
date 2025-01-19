#include "../styles.h"

namespace Styles
{
    class Link : public IBase
    {
    protected:
        std::vector<std::pair<int, int>> extractor(std::string &snippet) override
        {
            return {};
        }

    public:
        std::string implementor(std::string &snippet) override
        {
            return "Link";
        }
    };
}
