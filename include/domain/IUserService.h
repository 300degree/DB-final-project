#ifndef IUSERSERVICE_H
#define IUSERSERVICE_H

#include "domain/User.h"

class IUserService {
    public:
        virtual ~IUserService() = default;
        virtual User getUserById() = 0;
};

#endif /* IUSERSERVICE_H */
