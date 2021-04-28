/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/Versions/A/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreLinkRecommendationInfo : NSObject {

	char _btPreference;
	char _wifiPreference;
	double _timeTaken;

}
-(id)initWithQueue:(id)arg1 ;
-(void)setTimeTaken:(double)arg1 ;
-(double)timeTaken;
-(id)initWithPreferences:(char)arg1 wifiPreference:(char)arg2 timeTaken:(double)arg3 metrics:(id)arg4 ;
-(char)btPreference;
-(void)setBTPreference:(char)arg1 ;
-(char)wifiPreference;
-(void)setWiFiPreference:(char)arg1 ;
-(void)setLinkMetrics:(id)arg1 ;
-(id)linkMetrics;
-(void)resetLinkMetrics;
-(void)fetchLinkMetrics:(/*^block*/id)arg1 ;
@end

