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

	int beat = 0;          // An int to take the beat signal, will be replaced when the signal is connected to a sound output instead.

public:

	//TODO: Add non variable metronome function to run normal metronome.

	void startMetronome(Record* instructions) {

		std::cout << "\nMetronome counter start: " << std::endl << std::endl;

		for (int increaseBeat = 0; increaseBeat != (instructions->getNumMeasures()*instructions->getTimeSig()); increaseBeat++) { // Keep the metronome running for as many measures as specified by the controller.
			beat++; //Increment the beat counter.
			std::cout << beat << std::endl; //Output the beat num.
			std::this_thread::sleep_for(std::chrono::milliseconds((int)ceil(1000.0/(instructions->getBpm()/60.0)))); //Keep the time based on the bpm up to 3 decimals of precision. The rest is lost.
			if (beat == instructions->getTimeSig()) { // If the beat has reached the last of the beats per measure, reset it.
				beat = 0;
			}
		}

		return;
	}
};

#endif
