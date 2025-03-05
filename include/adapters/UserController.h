/*
 * Copyright (c) 2014-2017, ipkn
 *               2020-2022, CrowCpp
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License.
 * See the LICENSE file in the project root for more details.
 */

#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <crow/app.h>
#include <crow/middlewares/cors.h>

#include <nlohmann/json.hpp>

#include "domain/IUserService.h"

class UserController {
   public:
    UserController(crow::App<crow::CORSHandler>&, [[__maybe_unused__]] IUserService&);
};

#endif /* USERCONTROLLER_H */
