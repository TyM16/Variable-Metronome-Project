#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <iostream>
#include <vector>

#include "Metronome.h"

class Controller
{
private:
	Metronome * theMetronome;
	/*
	double bpmSetting;
	int timeSigTop;
	int numMeasures;
	*/

	// Initialize a series of vectors to hold the different sections of the piece.
	std::vector<int> timeSigTop;
	std::vector<int> numMeasures;
	std::vector<double> bpmSetting;

	// Holds how many changes total in the music.
	int totalChanges;


public:

	Controller() {
		theMetronome = new Metronome();  // Inititalize the metronome.
	}

	void mainMenu() 
	{
		std::cout << "Welcome to the metronome controller, your window to the metronome!" << std::endl;

		std::cout << "How many tempo/timeSig changes are there total?: ";
		std::cin >> totalChanges;

		for (int changeCount = 0; changeCount != totalChanges; changeCount++) { // While there are still more unique segments in the piece, ask for data and push to vectors.
			int tempBpm;
			int tempTimeSig;
			int tempMeasures;

			std::cout << "Taking data on segment " << changeCount << "." << std::endl;
			std::cout << "Please input a bpm as a double: "; //Input some other bpm, only a double/int or program crashes.
			std::cin >> tempBpm;
			bpmSetting.push_back(tempBpm);


			std::cout << "What is the timesignature number on the top?: ";
			std::cin >> tempTimeSig;
			timeSigTop.push_back(tempTimeSig);

			std::cout << "For how many measures?: ";
			std::cin >> tempMeasures;
			numMeasures.push_back(tempMeasures);
		}

		for (int i = 0; i != totalChanges; i++) { // Use the data to drive the metronome and update at each segment, stop when we reach the end of the piece.
			theMetronome->setBpm(bpmSetting[i]);
			theMetronome->setTimeSig(timeSigTop[i]);
			theMetronome->setNumMeasures(numMeasures[i]);

			theMetronome->startMetronome();
		}
	}
};
#endif
