#include <Metronome.h>
#include <chrono>
#include <thread>
#include <iostream>

//TODO: Add non variable metronome function to run normal metronome.

void Metronome::startMetronome(Record *instructions)
{
	for (int increaseBeat = 0; increaseBeat != (instructions->getNumMeasures(segmentCounter) * instructions->getTimeSig(segmentCounter)); increaseBeat++)
	{																															   // Keep the metronome running for as many measures as specified by the controller.
		beat++;																													   //Increment the beat counter.
		std::cout << beat << std::endl;																							   //Output the beat num.
		std::this_thread::sleep_for(std::chrono::milliseconds((int)ceil(1000.0 / (instructions->getBpm(segmentCounter) / 60.0)))); //Keep the time based on the bpm up to 3 decimals of precision. The rest is lost.

		if (beat == instructions->getTimeSig(segmentCounter))
		{ // If the beat has reached the last of the beats per measure, reset it and increment the measure counter.
			beat = 0;
			measureCounter++;
		}

		if (measureCounter == instructions->getNumMeasures(segmentCounter))
		{ // If we reached the end of this segment, update our index for new instructions.
			segmentCounter++;
		}

		if (segmentCounter > instructions->getTotalSegments())
		{ // If we reached the end of the piece, return control.
			measureCounter = 1;
			segmentCounter = 1;
			return;
		}
	}
}