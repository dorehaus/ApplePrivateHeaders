/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGMeaningfulEventCriteria.h>

@class PGGraphMomentNode;

@interface PGMeaningfulEventMatchingCriteria : PGMeaningfulEventCriteria {

	char _interestingForMeaningInference;
	PGGraphMomentNode* _momentNode;

}

@property (assign,nonatomic) char interestingForMeaningInference;              //@synthesize interestingForMeaningInference=_interestingForMeaningInference - In the implementation block
@property (nonatomic,readonly) PGGraphMomentNode * momentNode;                 //@synthesize momentNode=_momentNode - In the implementation block
-(id)debugDescription;
-(id)initWithMoment:(id)arg1 ;
-(id)matchingResultWithCriteria:(id)arg1 ;
-(double)matchingScoreWithCriteria:(id)arg1 failed:(char*)arg2 isReliable:(char*)arg3 ;
-(void)_calculateMatchingScoreForScenesWithRequiredCriteria:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)_calculateMatchingScoreForPOIROIWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(void)_calculateMatchingScoreForLocationsWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 result:(/*^block*/id)arg3 ;
-(double)_calculateMatchingScoreForPartOfDayWithMatchingTrait:(id)arg1 requiredTrait:(id)arg2 requiresStrictMatching:(char)arg3 ;
-(PGGraphMomentNode *)momentNode;
-(char)interestingForMeaningInference;
-(void)setInterestingForMeaningInference:(char)arg1 ;
@end

