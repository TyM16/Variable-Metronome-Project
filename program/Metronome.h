#ifndef METRONOME_H_
#define METRONOME_H_

#include <chrono>   // Include for accurate time keeping.
#include <thread>   // Use for thread sleep_for command to keep time.
#include <iostream> // I/O.
#include <cmath>    // Include for truncate (floor) command.

class Metronome
{
private:

	double bpm = 120;      // Beats per minute variable, will get converted to a less accurate form later.
	int timeSigTop = 4;    // How many beats per measure, represented by the top number of a timesignature in traditional sheet music.
	int beat = 0;          // An int to take the beat signal, will be replaced when the signal is connected to a sound output instead.
	int numMeasures = 0;   // how many measures to loop through.


public:

	void startMetronome() {

		std::cout << "\nMetronome counter start: " << std::endl << std::endl;

		for (int increaseBeat = 0; increaseBeat != (numMeasures*timeSigTop); increaseBeat++) { // Keep the metronome running for as many measures as specified by the controller.
			beat++; //Increment the beat counter.
			std::cout << beat << std::endl; //Output the beat num.
			std::this_thread::sleep_for(std::chrono::milliseconds((int)ceil(1000.0/(bpm/60.0)))); //Keep the time based on the bpm up to 3 decimals of precision. The rest is lost.
			if (beat == timeSigTop) { // If the beat has reached the last of the beats per measure, reset it.
				beat = 0;
			}
		}

		return;
	}

	// Private member setters.
	void setBpm(double theBpm) {
		bpm = theBpm;
	}

	void setTimeSig(int theSig) {
		timeSigTop = theSig;
	}

	void setNumMeasures(int measureInput) {
		numMeasures = measureInput;
	}
};

#endif
