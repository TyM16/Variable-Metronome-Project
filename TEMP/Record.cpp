#include "Record.h"
#include <iostream>
#include <vector>

// Setters

void Record::setBpm(double theBPM)
{
    bpmSetting.push_back(theBPM);
}

void Record::setTimeSig(int theSig)
{
    timeSigTop.push_back(theSig);
}

void Record::setNumMeasures(int measureInput)
{
    numMeasuresinSeg.push_back(measureInput);
}

// Getters

double Record::getBpm(int index)
{
    return bpmSetting[index];
}

int Record::getTimeSig(int index)
{
    return timeSigTop[index];
}

int Record::getNumMeasures(int index)
{
    return numMeasuresinSeg[index];
}

int Record::getTotalSegments()
{
    return totalSegments;
}