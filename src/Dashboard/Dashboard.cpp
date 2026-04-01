#include "Dashboard.hpp"

void Dashboard::render(EntityManager& manager) {
    for (auto* entity : manager.getAll()) {
        entity->renderWidget();
    }
}