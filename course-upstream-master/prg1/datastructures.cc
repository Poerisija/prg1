// Datastructures.cc

#include "datastructures.hh"

#include <random>

#include <cmath>

std::minstd_rand rand_engine; // Reasonably quick pseudo-random generator

template <typename Type>
Type random_in_range(Type start, Type end)
{
    auto range = end-start;
    ++range;

    auto num = std::uniform_int_distribution<unsigned long int>(0, range-1)(rand_engine);

    return static_cast<Type>(start+num);
}

// Modify the code below to implement the functionality of the class.
// Also remove comments from the parameter names when you implement
// an operation (Commenting out parameter name prevents compiler from
// warning about unused parameters on operations you haven't yet implemented.)

Datastructures::Datastructures()
{
    //Initializing the unordered map we need and other stuff
    placeId_names_map = {};
}

Datastructures::~Datastructures()
{
    // Replace this comment with your implementation
}

int Datastructures::place_count()
{
    //returns how many places there have been saved to the map
    int places = placeId_names_map.size();

    return places;
}

void Datastructures::clear_all()
{
    // Replace this comment with your implementation
}

std::vector<PlaceID> Datastructures::all_places()
{
    // Replace this comment with your implementation
    std::vector<PlaceID>places_to_return;

    for (std::pair<PlaceID, Name> elem : placeId_names_map) {
        places_to_return.push_back(elem.first);
    }
    return places_to_return;
}

bool Datastructures::add_place(PlaceID id, const Name& name, PlaceType type, Coord xy)
{

    //if given ID already exist, return false
    if (placeId_names_map.count(id) > 0) {
        return false;
    }

    placeId_names_map.insert({id, name});
    return true;
}

std::pair<Name, PlaceType> Datastructures::get_place_name_type(PlaceID id)
{
    // Replace this comment with your implementation
    return {NO_NAME, PlaceType::NO_TYPE};
}

Coord Datastructures::get_place_coord(PlaceID id)
{
    // Replace this comment with your implementation
    return NO_COORD;
}

bool Datastructures::add_area(AreaID id, const Name &name, std::vector<Coord> coords)
{
    // Replace this comment with your implementation
    return false;
}

Name Datastructures::get_area_name(AreaID id)
{
    // Replace this comment with your implementation
    return NO_NAME;
}

std::vector<Coord> Datastructures::get_area_coords(AreaID id)
{
    // Replace this comment with your implementation
    return {NO_COORD};
}

void Datastructures::creation_finished()
{
    // Replace this comment with your implementation
    // NOTE!! It's quite ok to leave this empty, if you don't need operations
    // that are performed after all additions have been done.
}


std::vector<PlaceID> Datastructures::places_alphabetically()
{
    // Replace this comment with your implementation
    return {};
}

std::vector<PlaceID> Datastructures::places_coord_order()
{
    // Replace this comment with your implementation
    return {};
}

std::vector<PlaceID> Datastructures::find_places_name(Name const& name)
{
    // Replace this comment with your implementation
    return {};
}

std::vector<PlaceID> Datastructures::find_places_type(PlaceType type)
{
    // Replace this comment with your implementation
    return {};
}

bool Datastructures::change_place_name(PlaceID id, const Name& newname)
{
    // Replace this comment with your implementation
    return false;
}

bool Datastructures::change_place_coord(PlaceID id, Coord newcoord)
{
    // Replace this comment with your implementation
    return false;
}

std::vector<AreaID> Datastructures::all_areas()
{
    // Replace this comment with your implementation
    return {};
}

bool Datastructures::add_subarea_to_area(AreaID id, AreaID parentid)
{
    // Replace this comment with your implementation
    return false;
}

std::vector<AreaID> Datastructures::subarea_in_areas(AreaID id)
{
    // Replace this comment with your implementation
    return {NO_AREA};
}

std::vector<PlaceID> Datastructures::places_closest_to(Coord xy, PlaceType type)
{
    // Replace this comment with your implementation
    return {};
}

bool Datastructures::remove_place(PlaceID id)
{
    // Replace this comment with your implementation
    return false;
}

std::vector<AreaID> Datastructures::all_subareas_in_area(AreaID id)
{
    // Replace this comment with your implementation
    return {NO_AREA};
}

AreaID Datastructures::common_area_of_subareas(AreaID id1, AreaID id2)
{
    // Replace this comment with your implementation
    return NO_AREA;
}
