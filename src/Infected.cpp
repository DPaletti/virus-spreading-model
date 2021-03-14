#include "Infected.h"


template<typename Writer>
void Infected::Serialize(Writer &writer) const {
    writer.StartObject();
    position.template Serialize(writer);
    writer.String("id");
    writer.String(id);
    writer.EndObject();

}

Infected::Infected() {}

Infected::Infected(const Point &position, const std::string &id) : position(position), id(id) {}
