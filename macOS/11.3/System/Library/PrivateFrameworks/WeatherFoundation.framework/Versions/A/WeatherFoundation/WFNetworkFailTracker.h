/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFNetworkFailTracker : NSObject {

	int _numConsecutiveFails;
	double _lastFailTimeInSeconds;

}

@property (nonatomic,readonly) int numConsecutiveFails;                   //@synthesize numConsecutiveFails=_numConsecutiveFails - In the implementation block
@property (nonatomic,readonly) double lastFailTimeInSeconds;              //@synthesize lastFailTimeInSeconds=_lastFailTimeInSeconds - In the implementation block
-(double)lastFailTimeInSeconds;
-(void)incrementFailCount;
-(char)lastFailTimeExpiredForSettings:(id)arg1 ;
-(int)numConsecutiveFails;
@end
