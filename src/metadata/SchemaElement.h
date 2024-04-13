/* Header for SchemaElement class
   Copyright (C) 2018-2024 Adam Leszczynski (aleszczynski@bersler.com)

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

#include <vector>

#include "../common/types.h"

#ifndef SCHEMA_ELEMENT_H_
#define SCHEMA_ELEMENT_H_

namespace OpenLogReplicator {
    class SchemaElement final {
    public:
        std::string owner;
        std::string table;
        std::vector<std::string> keys;
        std::string keysStr;
        std::string conditionStr;
        typeOptions options;
        std::vector<std::string> columns;

        SchemaElement(const char* newOwner, const char* newTable, typeOptions newOptions);
    };
}

#endif
