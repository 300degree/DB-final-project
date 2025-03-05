#include "adapters/UserRepository.h"

User UserRepository::findById() {
    User a;

    return a;
}

bool UserRepository::update() {

    return 0;
}

bool UserRepository::save(const User& user) {
    user.getUsername();

    return 0;
}

bool UserRepository::remove() {

    return 0;
}
