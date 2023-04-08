//
// Created by 杨挹 on 4/8/23.
//

#include "ReadLock.h"

namespace yyang {

    ReadLock::ReadLock(std::shared_mutex& sharedMutex)
    {
        std::shared_mutex* sharedMutexPtr = &sharedMutex;
        d_sharedMutexSp = std::shared_ptr<std::shared_mutex>(sharedMutexPtr);
        d_sharedMutexSp->lock_shared();
    }

    ReadLock::~ReadLock()
    {
        d_sharedMutexSp->unlock_shared();
    }

} // yyang