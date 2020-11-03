#pragma once

#include <string>
#include <vector>
#include "Type.hpp"

namespace simpleparser {

    using namespace std;

    enum class StatementKind: int {
        VARIABLE_DECLARATION,
        FUNCTION_CALL,
        LITERAL,
        OPERATOR_CALL
    };

    static const char* sStatementKindStrings[] = {
        "VARIABLE_DECLARATION",
        "FUNCTION_CALL",
        "LITERAL",
        "OPERATOR_CALL"
    };

    class Statement {
    public:
        string mName;
        Type mType{Type("void", VOID)};
        vector<Statement> mParameters;
        StatementKind mKind{StatementKind::FUNCTION_CALL};

        void debugPrint(size_t indent);
    };
}
