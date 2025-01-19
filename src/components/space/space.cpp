// base header
#include "./space.h"

// feature header
#include "./hspace/index.h"
#include "./vspace/index.h"
namespace Space
{
    class ISpaceWrap
    {
        std::vector<IBase *> featureVector;
        ISpaceWrap(std::string &snippit)
        {
            IBase *hspace = new Hspace();
            IBase *vspace = new Vspace();
            featureVector = {hspace, vspace};
        }
    };
}