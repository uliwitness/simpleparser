#include "FunctionDefinition.hpp"
#include <iostream>

namespace simpleparser {

    using namespace std;

    void FunctionDefinition::debugPrint() const {
        cout << mName << "(\n";

        for (ParameterDefinition param : mParameters) {
            param.debugPrint(1);
        }

        cout << ") {\n";
        for (Statement statement : mStatements) {
            statement.debugPrint(0);
        }
        cout << "}" << endl;
    }

    void ParameterDefinition::debugPrint(size_t indent) const {
        cout << string(indent, '\t') << mType.mName << " " << mName << endl;
    }
}
