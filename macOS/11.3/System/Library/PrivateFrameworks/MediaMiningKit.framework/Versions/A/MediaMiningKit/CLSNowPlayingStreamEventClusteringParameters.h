/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSNowPlayingStreamEventClusteringParameters : NSObject {

	double _minimumClusteringTimeInSeconds;
	unsigned long long _algorithm;

}

@property (assign,nonatomic) double minimumClusterTimeInSeconds;              //@synthesize minimumClusteringTimeInSeconds=_minimumClusteringTimeInSeconds - In the implementation block
@property (assign,nonatomic) unsigned long long algorithm;                    //@synthesize algorithm=_algorithm - In the implementation block
-(id)init;
-(unsigned long long)algorithm;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(double)minimumClusterTimeInSeconds;
-(void)setMinimumClusterTimeInSeconds:(double)arg1 ;
@end

