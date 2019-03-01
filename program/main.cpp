/* Basic metronome V0.1 */
/* Includes basic functionality for time keeping.
   Outputs are all visual counts of the beat for now. */

#include <chrono>   // Include for accurate time keeping.
#include <thread>   // Use for thread sleep_for command to keep time.
#include <iostream> // I/O.
#include <cmath>    // Include for truncate command.

int main(){
	long double bpm = 120; // Beats per minute variable, will get converted to a less accurate form later.
	int timeSigTop = 4;    // How many beats per measure, represented by the top number of a timesignature in traditional sheet music.
	int beat = 0;          // An int to take the beat signal, will be replaced when the signal is connected to a sound output instead.

	std::cout << "please input a bpm as a double: "; //Input some other bpm, only a double/int or program crashes.
	std::cin >> bpm;

	std::cout << "Metronome counter start: " << std::endl << std::endl;

	for (bool done = false; done != true;) { // Keep the metronome running. No stop at the moment.
		
		beat++; //Increment the beat counter.
		std::cout << beat << std::endl; //Output the beat num.
		std::this_thread::sleep_for(std::chrono::milliseconds((int)(floor(1000*bpm/60)))); //Keep the time based on the bpm up to 3 decimals of precision. The rest is lost, we need to determine what accuracy is reasonable for a metronome
		if (beat == timeSigTop) { // If the beat has reached the last of the beats per measure, reset it.
			beat = 0;
		}
	}
}

