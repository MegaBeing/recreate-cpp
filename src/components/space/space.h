#ifndef SPACE_H
#define SPACE_H

// defined headers
#include "../featureAbstract.h"
#include "../wrapperAbstract.h"

// libraries
#include <vector>
#include <string>
#include <utility>


namespace Space{
    
    class IBase : public FeatureAbstractBase {
        protected:
            std::vector<std::pair<int, int>> extractor(std::string &snippet) override;
        public:
            std::string implementor(std::string &snippet) override;
    };

    class ISpaceWrap : public WrapperAbstractBase{
        protected: 
            std::vector<IBase*>featureVector;
    };
    
}
#endif