#ifndef METRONOME_H_
#define METRONOME_H_

#include <chrono>   // Include for accurate time keeping.
#include <thread>   // Use for thread sleep_for command to keep time.
#include <iostream> // I/O.
#include <cmath>    // Include for truncate (floor) command.

#include "Record.h"

class Metronome
{
private:

	int beat = 0;           // An int to take the beat signal, will be replaced when the signal is connected to a sound output instead.
	int measureCounter = 1; // Use this to check if we reached the end of the current segment. Start at measure 1.
	int segmentCounter = 1; // Use this to keep track of which segment we are on. Feed it to the index in the record to get the correct specifications for the metronome timing.

public:

	//TODO: Add non variable metronome function to run normal metronome.

	void startMetronome(Record* instructions) {

		for (int increaseBeat = 0; increaseBeat != (instructions->getNumMeasures(segmentCounter)*instructions->getTimeSig(segmentCounter)); increaseBeat++) { // Keep the metronome running for as many measures as specified by the controller.
			beat++; //Increment the beat counter.
			std::cout << beat << std::endl; //Output the beat num.
			std::this_thread::sleep_for(std::chrono::milliseconds((int)ceil(1000.0/(instructions->getBpm(segmentCounter)/60.0)))); //Keep the time based on the bpm up to 3 decimals of precision. The rest is lost.
			
			if (beat == instructions->getTimeSig(segmentCounter)) { // If the beat has reached the last of the beats per measure, reset it and increment the measure counter.
				beat = 0;
				measureCounter++;
			}

			if (measureCounter == instructions->getNumMeasures(segmentCounter)) { // If we reached the end of this segment, update our index for new instructions.
				segmentCounter++;
			}

			if (segmentCounter > instructions->getTotalSegments()){ // If we reached the end of the piece, return control.
				measureCounter = 1;
				segmentCounter = 1;
				return;
			}
		}
	}
};

#endif
