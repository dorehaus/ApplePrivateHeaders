/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/WiFiUsageSession.h>

@interface WiFiUsageLinkSession : WiFiUsageSession {

	char _linkUp;

}
-(id)metricName;
-(id)initWithInterfaceName:(id)arg1 ;
-(void)linkStateDidChange:(char)arg1 isInvoluntary:(char)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5 ;
@end

