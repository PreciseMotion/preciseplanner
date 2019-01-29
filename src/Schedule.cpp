#include "Schedule.hpp"

// Constructor used for creating a brand new schedule
Schedule::Schedule(){
    schedule = new vector<Show*>();
}

// Constructor used when reading existing schedule from file
Schedule::Schedule( vector<Show*>* showVector ){
    schedule = showVector;
    isize = showVector->size();
}

// Destructor, deletes all allocated memory
Schedule::~Schedule(){
    for (unsigned int i = 0; i < isize; i++){
        delete schedule->at(i);
    }
    delete schedule;
}

/**
 *  Add a show to the schedule. Adjust size accordingly
 * TODO: Finish method
 */
void Schedule::add( Show * newShow ){
    schedule->push_back(newShow);
    // sort the schedule by show times
    isize++;
}

// TODO
void Schedule::printSchedule(){

}

// TODO
void Schedule::printSchedule( string & month ){

}