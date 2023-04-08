//
// Created by 杨挹 on 4/8/23.
//

#ifndef MYSTRING_READLOCK_H
#define MYSTRING_READLOCK_H

#include "BaseLock.h"

namespace yyang {

    class ReadLock : public BaseLock {
    public:
        ReadLock(std::shared_mutex& sharedMutex);
        virtual ~ReadLock();
    };

} // yyang

#endif //MYSTRING_READLOCK_H
