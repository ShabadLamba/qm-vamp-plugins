/* -*- c-basic-offset: 4 indent-tabs-mode: nil -*-  vi:set ts=8 sts=4 sw=4: */

/*
    QM Vamp Plugin Set

    Centre for Digital Music, Queen Mary, University of London.
    All rights reserved.
*/

//!!! This guard inadequate, must be unique to plugin if plugin is to
//be compilable in with app as well as being, well, a plugin
#ifndef _BEAT_DETECT_PLUGIN_H_
#define _BEAT_DETECT_PLUGIN_H_

#include "vamp-sdk/Plugin.h"

class BeatDetectorData;

class BeatDetector : public Vamp::Plugin
{
public:
    BeatDetector(float inputSampleRate);
    virtual ~BeatDetector();

    bool initialise(size_t channels, size_t stepSize, size_t blockSize);
    void reset();

    InputDomain getInputDomain() const { return TimeDomain; }

    std::string getName() const;
    std::string getDescription() const;
    std::string getMaker() const;
    int getPluginVersion() const;
    std::string getCopyright() const;

    ParameterList getParameterDescriptors() const;
    float getParameter(std::string) const;
    void setParameter(std::string, float);

    size_t getPreferredStepSize() const;
    size_t getPreferredBlockSize() const;

    OutputList getOutputDescriptors() const;

    FeatureSet process(float **inputBuffers, Vamp::RealTime timestamp);

    FeatureSet getRemainingFeatures();

protected:
    BeatDetectorData *m_d;
    int m_dfType;
    static float m_stepSecs;
};


#endif