#include "Server.h"

#include "adapters/UserController.h"
#include "adapters/UserRepository.h"
#include "domain/UserServiceImpl.h"

Server::Server() {
    this->app.get_middleware<crow::CORSHandler>()
        .global()
        .methods(crow::HTTPMethod::GET, crow::HTTPMethod::POST)
        .headers("content-type", "application/json");

    UserRepository userRepository;

    UserServiceImpl userService(&userRepository);

    UserController userController(this->app, userService);
}

void Server::Start() {
    this->app.port(this->port)
        .multithreaded()
#ifdef DEBUG
        .loglevel(crow::LogLevel::Debug)
#endif
        .run();
}
