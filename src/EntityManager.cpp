#include "EntityManager.hpp"

void EntityManager::add(std::unique_ptr<IMonitoredEntity> new_entity) {
	entities_.push_back(std::move(new_entity));
}

std::vector<IMonitoredEntity*> EntityManager::getAll() const {
	std::vector<IMonitoredEntity*> allEntities;

	for (auto& e : entities_) allEntities.push_back(e.get());
	return (allEntities);
}