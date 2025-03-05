#ifndef USER_H
#define USER_H

#include <string>

class User {
   private:
    int id;
    std::string email;
    std::string username;
    std::string password;

   public:
    User();
    ~User();

    std::string getEmail() const;
    std::string getUsername() const;
    std::string getPassword() const;

    void setEmail(const std::string);
    void setUsername(const std::string);
    void setPassword(const std::string);
};

#endif
