#include "httplib.h"
#include <string>

int main() {
    httplib::Server svr;

    svr.Get("/add", [](const httplib::Request& req, httplib::Response& res) {
        auto a = std::stoi(req.get_param_value("a"));
        auto b = std::stoi(req.get_param_value("b"));
        auto result = a + b;
        res.set_content(std::to_string(result), "text/plain");
    });

    svr.Get("/subtract", [](const httplib::Request& req, httplib::Response& res) {
        auto a = std::stoi(req.get_param_value("a"));
        auto b = std::stoi(req.get_param_value("b"));
        auto result = a - b;
        res.set_content(std::to_string(result), "text/plain");
    });

    svr.Get("/multiply", [](const httplib::Request& req, httplib::Response& res) {
        auto a = std::stoi(req.get_param_value("a"));
        auto b = std::stoi(req.get_param_value("b"));
        auto result = a * b;
        res.set_content(std::to_string(result), "text/plain");
    });

    svr.Get("/divide", [](const httplib::Request& req, httplib::Response& res) {
        auto a = std::stoi(req.get_param_value("a"));
        auto b = std::stoi(req.get_param_value("b"));
        if (b == 0) {
            res.set_content("Cannot divide by zero", "text/plain");
        } else {
            auto result = static_cast<float>(a) / b;
            res.set_content(std::to_string(result), "text/plain");
        }
    });

    svr.listen("0.0.0.0", 8080);

    return 0;
}
