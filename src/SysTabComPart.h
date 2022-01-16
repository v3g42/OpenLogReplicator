/* Header for SysTabComPart class
   Copyright (C) 2018-2022 Adam Leszczynski (aleszczynski@bersler.com)

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

#include "RowId.h"

#ifndef SYSTABCOMPART_H_
#define SYSTABCOMPART_H_

#define SYSTABCOMPART_ROWID_LENGTH     18

namespace OpenLogReplicator {
    class SysTabComPartKey {
    public:
        SysTabComPartKey();
        SysTabComPartKey(typeOBJ bo, typeOBJ obj);
        bool operator<(const SysTabComPartKey& other) const;

        typeOBJ bo;
        typeOBJ obj;
    };

    class SysTabComPart {
    public:
        SysTabComPart(RowId& rowId, typeOBJ obj, typeDATAOBJ dataObj, typeOBJ bo, bool touched);

        RowId rowId;
        typeOBJ obj;
        typeDATAOBJ dataObj;        //NULL
        typeOBJ bo;
        bool touched;
        bool saved;
    };
}

#endif
