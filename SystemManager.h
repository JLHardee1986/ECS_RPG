#ifndef __SYSTEMMANAGER__
#define __SYSTEMMANAGER__
class Bitmask;
using EntityId = unsigned int;
using EventID = unsigned int;
enum class EntityEvent
{
	Spawned
};

class SystemManager
{
	public:
		SystemManager() {}

		void EntityModified(EntityId l_entity, const Bitmask& l_mask) {}
		void AddEvent(EntityId l_entity, EventID l_event) {}
		void RemoveEntity(EntityId l_entity) {}
		void PurgeEntities() {}
};

#endif
