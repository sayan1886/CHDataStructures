/*
 CHCircularBufferDeque.h
 CHDataStructures.framework -- Objective-C versions of common data structures.
 Copyright (C) 2009, Quinn Taylor for BYU CocoaHeads <http://cocoaheads.byu.edu>
 
 This library is free software: you can redistribute it and/or modify it under
 the terms of the GNU Lesser General Public License as published by the Free
 Software Foundation, either under version 3 of the License, or (at your option)
 any later version.
 
 This library is distributed in the hope that it will be useful, but WITHOUT ANY
 WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
 
 You should have received a copy of the GNU General Public License along with
 this library.  If not, see <http://www.gnu.org/copyleft/lesser.html>.
 */

#import "CHDeque.h"
#import "CHAbstractCircularBufferCollection.h"

/**
 @file CHCircularBufferDeque.h
 A simple CHDeque implemented using a CHAbstractCircularBufferCollection.
 */

/**
 A simple CHDeque implemented using a CHAbstractCircularBufferCollection.
 */
@interface CHCircularBufferDeque : CHAbstractCircularBufferCollection <CHDeque>

@end
