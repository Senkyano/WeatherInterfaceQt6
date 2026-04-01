#pragma once
#include <string>
#include <map>
#include <variant>

enum class	Threshold {DANGER, WARNING, SAFE};
enum class	Direction {NORTH, SOUTH, EAST, OUEST};
enum class	Health {CONNECTED, DISCONNECTED, MAINTENANCE, DESTROY};

using MetricValue = std::variant<int, float, bool, std::string, Threshold, Direction, Health>;


class IMonitoredEntity {
	public:
		virtual ~IMonitoredEntity() = default;

		virtual std::string getId() const = 0;
		virtual std::string getName() const = 0;
		virtual Health getHealth() const = 0;

		virtual std::map<std::string, MetricValue> getMetrics() const = 0;

		virtual void renderWidget() const = 0;
};