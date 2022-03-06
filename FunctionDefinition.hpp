#pragma once

#include "Type.hpp"
#include "Statement.hpp"
#include <string>
#include <vector>

namespace simpleparser {

    using namespace std;

    class ParameterDefinition {
    public:
        string mName; // Empty string means no name given.
        Type mType;

        void debugPrint(size_t indent) const;
    };

    class FunctionDefinition {
    public:
        string mName;
        vector<ParameterDefinition> mParameters;
        vector<Statement> mStatements;
        bool mReturnsSomething;

        void debugPrint() const;
    };

}
