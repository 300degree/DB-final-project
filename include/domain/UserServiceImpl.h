#ifndef USERSERVICEIMPL_H
#define USERSERVICEIMPL_H

#include "domain/IUserService.h"
#include "adapters/UserRepository.h"

class UserServiceImpl : public IUserService {
    private:
        UserRepository* repository;

    public:
        UserServiceImpl(UserRepository*);

        User getUserById() override;
};

#endif /* USERSERVICEIMPL_H */
