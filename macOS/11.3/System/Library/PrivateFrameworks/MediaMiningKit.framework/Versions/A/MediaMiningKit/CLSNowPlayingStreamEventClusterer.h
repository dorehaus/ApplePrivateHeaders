/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CLSNowPlayingStreamEventClusteringParameters;

@interface CLSNowPlayingStreamEventClusterer : NSObject {

	NSArray* _sessions;
	CLSNowPlayingStreamEventClusteringParameters* _clusteringParameters;

}

@property (nonatomic,readonly) CLSNowPlayingStreamEventClusteringParameters * clusteringParameters;              //@synthesize clusteringParameters=_clusteringParameters - In the implementation block
@property (nonatomic,readonly) NSArray * sessions;                                                               //@synthesize sessions=_sessions - In the implementation block
-(id)init;
-(NSArray *)sessions;
-(void)clusterEvents:(id)arg1 ;
-(CLSNowPlayingStreamEventClusteringParameters *)clusteringParameters;
-(id)initWithClusteringParameters:(id)arg1 ;
-(void)naiveClusterEvents:(id)arg1 ;
-(void)dbScanClusterEvents:(id)arg1 ;
-(id)_dbScanClusterEvents:(id)arg1 ;
-(id)_populateSessionsWithClusters:(id)arg1 ;
@end
