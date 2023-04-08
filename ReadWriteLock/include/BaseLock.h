//
// Created by 杨挹 on 4/8/23.
//

#ifndef MYSTRING_BASELOCK_H
#define MYSTRING_BASELOCK_H

#include <memory>
#include <shared_mutex>

namespace yyang {

    class BaseLock {
    public:
        virtual ~BaseLock() {};
    protected:
        std::shared_ptr<std::shared_mutex> d_sharedMutexSp;
    };

} // yyang

#endif //MYSTRING_BASELOCK_H
