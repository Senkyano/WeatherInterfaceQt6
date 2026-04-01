#pragma once
#include "IMonitoredEntity.hpp"

class ADrone : public IMonitoredEntity {
	public:
		std::string		getId() const override;
		std::string		getName() const override;
		Health			getHealth() const override;

		virtual void	move();
		virtual void	stop();
	private:
		std::string id_, name_;
		Health		materialHealth_;
		float		battery;
};