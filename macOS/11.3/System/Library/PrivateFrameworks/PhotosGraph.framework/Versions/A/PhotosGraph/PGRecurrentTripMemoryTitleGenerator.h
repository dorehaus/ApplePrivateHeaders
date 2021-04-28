/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGRecurrentTripMemoryTitleGenerator : PGTitleGenerator {

	NSSet* _locationNodes;

}

@property (nonatomic,retain) NSSet * locationNodes;              //@synthesize locationNodes=_locationNodes - In the implementation block
-(id)_locationTitle;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(NSSet *)locationNodes;
-(void)setLocationNodes:(NSSet *)arg1 ;
-(id)_timeTitle;
-(id)initWithLocationNodes:(id)arg1 ;
@end

