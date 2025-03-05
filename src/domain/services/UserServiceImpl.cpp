#include "domain/UserServiceImpl.h"

UserServiceImpl::UserServiceImpl(UserRepository* repository) {
    this->repository = repository;
}

User UserServiceImpl::getUserById() {
    return this->repository->findById();
}

