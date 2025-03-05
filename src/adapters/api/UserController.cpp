#include "adapters/UserController.h"

#include <string>

UserController::UserController(crow::App<crow::CORSHandler>& app,
                               [[__maybe_unused__]] IUserService& service) {
    CROW_ROUTE(app, "/users/<int>")
        .methods(crow::HTTPMethod::GET)([](int id) {
            nlohmann::json j = {"id", id};

            return crow::response(j.dump());
        });
}
