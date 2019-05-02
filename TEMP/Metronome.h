#ifndef METRONOME_H_
#define METRONOME_H_

#include <chrono>   // Include for accurate time keeping.
#include <thread>   // Use for thread sleep_for command to keep time.
#include <iostream> // I/O.
#include <cmath>	// Include for truncate (floor) command.

#include "Record.h"

class Metronome
{
  private:
	int beat = 0;			// An int to take the beat signal, will be replaced when the signal is connected to a sound output instead.
	int measureCounter = 1; // Use this to check if we reached the end of the current segment. Start at measure 1.
	int segmentCounter = 1; // Use this to keep track of which segment we are on. Feed it to the index in the record to get the correct specifications for the metronome timing.

  public:
	//TODO: Add non variable metronome function to run normal metronome.
	void startMetronome(Record *instructions);
};

#endif
