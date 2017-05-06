// Copyright (c) 2017 Michael C. Heiber
// This source file is part of the KMC_Lattice project, which is subject to the MIT License.
// For more information, see the LICENSE file that accompanies this software.
// The KMC_Lattice project can be found on Github at https://github.com/MikeHeiber/KMC_Lattice

#include "Event.h"

// Initialize static class members
const string Event::name_base = "Event";
random_device random;
mt19937 Event::gen(random());

Event::~Event(){

}

Event::Event(){
    execution_time = 0;
    coords_dest.x = 0;
    coords_dest.y = 0;
    coords_dest.z = 0;
}

Coords Event::getDestCoords() const{
    return coords_dest;
}

double Event::getExecutionTime() const{
    return execution_time;
}

string Event::getName() const{
    return name_base;
}

list<Object*>::iterator Event::getObjectIt() const{
    return object_it;
}

list<Object*>::iterator Event::getObjectTargetIt() const{
    return object_target_it;
}

double Event::rand01(){
    return generate_canonical<double,std::numeric_limits<double>::digits>(gen);
}

void Event::setDestCoords(const Coords& coords){
    coords_dest = coords;
}

void Event::setExecutionTime(const double time){
    execution_time = time;
}

void Event::setObjectIt(const list<Object*>::iterator it){
    object_it = it;
}

void Event::setObjectTargetIt(const list<Object*>::iterator it){
    object_target_it = it;
}
