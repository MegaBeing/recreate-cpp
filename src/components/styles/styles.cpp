// base header
#include "./styles.h"

// feature header
#include "./heading/index.h"
#include "./link/index.h"
namespace Styles
{
    class IStylesWrap
    {
        std::vector<IBase *> featureVector;
        IStylesWrap(std::string &snippit)
        {
            IBase *heading = new Heading();
            IBase *link = new Link();
            featureVector = {heading, link};
        }
    };
}