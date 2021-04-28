/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PBCodable;

@interface WANWActivityStatistics : NSObject {

	char _fromInitWithPBCodableData;
	unsigned _awdMetricID;
	NSArray* _activityUUIDs;
	NSArray* _externallyVisibleActivityUUIDs;
	PBCodable* _awdReport;

}

@property (nonatomic,retain) PBCodable * awdReport;                       //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                        //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (retain) NSArray * activityUUIDs;                               //@synthesize activityUUIDs=_activityUUIDs - In the implementation block
@property (retain) NSArray * externallyVisibleActivityUUIDs;              //@synthesize externallyVisibleActivityUUIDs=_externallyVisibleActivityUUIDs - In the implementation block
-(void)setAwdMetricID:(unsigned)arg1 ;
-(unsigned)awdMetricID;
-(PBCodable *)awdReport;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(NSArray *)externallyVisibleActivityUUIDs;
-(id)initWithPBCodableData:(id)arg1 ;
-(id)initWithWAActivityReport:(const void*)arg1 length:(unsigned long long)arg2 ;
-(NSArray *)activityUUIDs;
-(void)setActivityUUIDs:(NSArray *)arg1 ;
-(void)setExternallyVisibleActivityUUIDs:(NSArray *)arg1 ;
@end

