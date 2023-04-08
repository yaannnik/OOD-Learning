//
// Created by 杨挹 on 4/8/23.
//

#include "WriteLock.h"

namespace yyang {

    WriteLock::WriteLock(std::shared_mutex& sharedMutex)
    {
        std::shared_mutex* sharedMutexPtr = &sharedMutex;
        d_sharedMutexSp = std::shared_ptr<std::shared_mutex>(sharedMutexPtr);
        d_sharedMutexSp->lock();
    }

    WriteLock::~WriteLock()
    {
        d_sharedMutexSp->unlock();
    }

} // yyang