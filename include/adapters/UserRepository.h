#ifndef USERREPOSITORY_H
#define USERREPOSITORY_H

#include "domain/User.h"

class UserRepository {
   public:
    User findById();
    bool save(const User&);
    bool update();
    bool remove();
};

#endif /* USERREPOSITORY_H */
