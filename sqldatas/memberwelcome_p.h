﻿#ifndef MEMBERWELCOME_P_H
#define MEMBERWELCOME_P_H

#if _MSC_VER >= 1600
#  pragma execution_character_set("utf-8")
#endif

#include "cqsqlite_p.h"
#include "memberwelcome.h"

class MemberWelcomePrivate : public CqSqlitePrivate
{
    Q_DECLARE_PUBLIC(MemberWelcome)

public:
    MemberWelcomePrivate();
    virtual ~MemberWelcomePrivate();

public:
    QHash<Member, qint64> welcome;
};

#endif // MEMBERWELCOME_P_H
