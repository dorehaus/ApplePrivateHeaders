/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/Versions/A/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort {

	char _localPDelayLogMeanInterval;
	char _remotePDelayLogMeanInterval;
	char _multipleRemotes;
	char _measuringPDelay;
	TSgPTPPortStatistics* _statistics;

}

@property (nonatomic,retain) TSgPTPPortStatistics * statistics;              //@synthesize statistics=_statistics - In the implementation block
@property (assign,nonatomic) char localPDelayLogMeanInterval;                //@synthesize localPDelayLogMeanInterval=_localPDelayLogMeanInterval - In the implementation block
@property (assign,nonatomic) char remotePDelayLogMeanInterval;               //@synthesize remotePDelayLogMeanInterval=_remotePDelayLogMeanInterval - In the implementation block
@property (assign,nonatomic) char multipleRemotes;                           //@synthesize multipleRemotes=_multipleRemotes - In the implementation block
@property (assign,nonatomic) char measuringPDelay;                           //@synthesize measuringPDelay=_measuringPDelay - In the implementation block
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
-(TSgPTPPortStatistics *)statistics;
-(void)setStatistics:(TSgPTPPortStatistics *)arg1 ;
-(id)_statistics;
-(char)_commonInitWithService:(id)arg1 ;
-(void)updateProperties;
-(char)_localPDelayLogMeanInterval;
-(char)_remotePDelayLogMeanInterval;
-(char)_multipleRemotes;
-(char)_measuringPDelay;
-(char)localPDelayLogMeanInterval;
-(void)setLocalPDelayLogMeanInterval:(char)arg1 ;
-(char)remotePDelayLogMeanInterval;
-(void)setRemotePDelayLogMeanInterval:(char)arg1 ;
-(char)multipleRemotes;
-(void)setMultipleRemotes:(char)arg1 ;
-(char)measuringPDelay;
-(void)setMeasuringPDelay:(char)arg1 ;
@end
