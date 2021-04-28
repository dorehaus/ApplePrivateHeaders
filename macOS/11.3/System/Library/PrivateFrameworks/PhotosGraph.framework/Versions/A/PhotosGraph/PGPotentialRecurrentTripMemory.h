/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSSet;

@interface PGPotentialRecurrentTripMemory : PGPotentialMemory {

	NSArray* _tripNodes;
	NSSet* _locationNodes;

}

@property (readonly) NSArray * tripNodes;                //@synthesize tripNodes=_tripNodes - In the implementation block
@property (readonly) NSSet * locationNodes;              //@synthesize locationNodes=_locationNodes - In the implementation block
-(NSSet *)locationNodes;
-(id)initWithTripNodes:(id)arg1 locationNodes:(id)arg2 momentNodes:(id)arg3 ;
-(NSArray *)tripNodes;
@end

