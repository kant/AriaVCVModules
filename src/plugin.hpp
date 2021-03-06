#pragma once
#include <rack.hpp>
#include "AriaComponents.hpp"
// Explicit <array> include required on OS X
#include <array> 

// Builds modules still under development and not ready for general use.
// Remember to add them to the plugin.json to see them in the browser!
// #define ARIA_DEV_MODULES

using namespace rack;

// Declare the Plugin, defined in plugin.cpp
extern Plugin* pluginInstance;

// Declare each Model, defined in each module source file

// Split and Merge series
extern Model *modelSplort;
extern Model *modelSmerge;
extern Model *modelSpleet;
extern Model *modelSwerge;
extern Model *modelSplirge;

// Sequencer
extern Model *modelDarius;

// Arcane
extern Model *modelArcane;
extern Model *modelAtout;
extern Model *modelAleister;

// Blank plate
extern Model *modelBlank;

#ifdef ARIA_DEV_MODULES
extern Model *modelBendlet;
extern Model *modelUndular;
extern Model *modelTest;
#endif
