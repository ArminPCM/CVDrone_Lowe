////////////////////////////////////////////////////////////////////////////
//	File:		ProgramGPU.cpp
//	Author:		Changchang Wu
//	Description : Implementation of ProgramGPU and FilterProgram
//				  This part is independent of GPU language
//
//
//
//	Copyright (c) 2007 University of North Carolina at Chapel Hill
//	All Rights Reserved
//
//	Permission to use, copy, modify and distribute this software and its
//	documentation for educational, research and non-profit purposes, without
//	fee, and without a written agreement is hereby granted, provided that the
//	above copyright notice and the following paragraph appear in all copies.
//	
//	The University of North Carolina at Chapel Hill make no representations
//	about the suitability of this software for any purpose. It is provided
//	'as is' without express or implied warranty. 
//
//	Please send BUG REPORTS to ccwu@cs.unc.edu
//
////////////////////////////////////////////////////////////////////////////


#include "gl_core_3_0.h"
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

#include "GlobalUtil.h"
#include "GLTexImage.h"
#include "ShaderMan.h"
#include "ProgramGPU.h"
#include "ProgramGLSL.h"
#include "SiftGPU.h"

