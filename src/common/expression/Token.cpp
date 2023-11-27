/* Token for parsing of expressions
   Copyright (C) 2018-2023 Adam Leszczynski (aleszczynski@bersler.com)

This file is part of OpenLogReplicator.

OpenLogReplicator is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as published
by the Free Software Foundation; either version 3, or (at your option)
any later version.

OpenLogReplicator is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
Public License for more details.

You should have received a copy of the GNU General Public License
along with OpenLogReplicator; see the file LICENSE;  If not see
<http://www.gnu.org/licenses/>.  */

#include "../exception/RuntimeException.h"
#include "Token.h"

namespace OpenLogReplicator {
    Token::Token(uint64_t newTokenType, const std::string& newStringValue) :
            Expression(),
            tokenType(newTokenType),
            stringValue(newStringValue) {
    }

    Token::~Token() {
    }

    bool Token::evaluateToBool(char op __attribute__((unused)), const std::unordered_map<std::string,
                               std::string>* attributes __attribute__((unused))) {
        throw RuntimeException(50066, "invalid expression evaluation: token to bool");
    }

    std::string Token::evaluateToString(char op __attribute__((unused)), const std::unordered_map<std::string,
                                        std::string>* attributes __attribute__((unused))) {
        throw RuntimeException(50066, "invalid expression evaluation: token to string");
    }
}
