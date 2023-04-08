//
// Created by 杨挹 on 4/8/23.
//

#ifndef MYSTRING_WRITELOCK_H
#define MYSTRING_WRITELOCK_H

#include "BaseLock.h"

namespace yyang {

    class WriteLock : public BaseLock{
        WriteLock(std::shared_mutex& sharedMutex);
        virtual ~WriteLock();
    };

} // yyang

#endif //MYSTRING_WRITELOCK_H
