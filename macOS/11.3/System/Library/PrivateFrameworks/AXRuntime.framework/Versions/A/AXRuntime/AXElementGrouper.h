/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/Versions/A/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXRuntime/AXRuntime-Structs.h>
@class NSArray;

@interface AXElementGrouper : NSObject {

	double _thresholdForDeterminingEqualSize;
	long long _heuristics;

}

@property (assign,nonatomic) long long heuristics;                                   //@synthesize heuristics=_heuristics - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumGroupSize; 
@property (nonatomic,readonly) unsigned long long maximumGroupSize; 
@property (nonatomic,readonly) unsigned long long preferredGroupSize; 
@property (nonatomic,readonly) double thresholdForDeterminingEqualSize;              //@synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize - In the implementation block
@property (nonatomic,readonly) NSArray * transformationPasses; 
-(id)init;
-(long long)heuristics;
-(void)setHeuristics:(long long)arg1 ;
-(id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long*)arg2 ;
-(id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(char)arg2 ;
-(id)_applyTransformationPassesToRootGroup:(id)arg1 ;
-(id)_groupRemovingImpossibleGroups:(id)arg1 isRootLevel:(char)arg2 ;
-(unsigned long long)minimumGroupSize;
-(double)thresholdForDeterminingEqualSize;
-(unsigned long long)maximumGroupSize;
-(unsigned long long)preferredGroupSize;
-(id)_applyTransformationPass:(id)arg1 toGroup:(id)arg2 ;
-(NSArray *)transformationPasses;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithHeuristics:(long long)arg1 ;
-(id)groupElementsInRootGroup:(id)arg1 ;
-(char)_frame:(CGRect)arg1 isApproximatelySameSizeAsFrame:(CGRect)arg2 ;
@end

