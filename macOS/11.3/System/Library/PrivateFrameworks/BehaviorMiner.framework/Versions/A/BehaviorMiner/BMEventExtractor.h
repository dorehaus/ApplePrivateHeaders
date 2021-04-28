/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/Versions/A/BehaviorMiner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BMMiningTaskConfig;

@interface BMEventExtractor : NSObject {

	BOOL _shouldStop;
	BMMiningTaskConfig* _bmMiningTaskConfig;

}

@property (assign) BOOL shouldStop;                                      //@synthesize shouldStop=_shouldStop - In the implementation block
@property (retain) BMMiningTaskConfig * bmMiningTaskConfig;              //@synthesize bmMiningTaskConfig=_bmMiningTaskConfig - In the implementation block
-(id)init;
-(BOOL)shouldStop;
-(void)setShouldStop:(BOOL)arg1 ;
-(BMMiningTaskConfig *)bmMiningTaskConfig;
-(id)initWithBMMiningTaskConfig:(id)arg1 ;
-(id)extractEventsFilteredByTypes:(id)arg1 taskSpecificEventProviders:(id)arg2 error:(id*)arg3 ;
-(void)terminateEarly;
-(void)setBmMiningTaskConfig:(BMMiningTaskConfig *)arg1 ;
@end

