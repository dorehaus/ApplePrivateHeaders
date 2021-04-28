/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiAwareSubscriberDelegate <NSObject>
@optional
-(void)subscriber:(id)arg1 receivedMessage:(id)arg2 fromPublishID:(unsigned char)arg3 address:(id)arg4;

@required
-(void)subscriberStarted:(id)arg1;
-(void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2;
-(void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
-(void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;

@end

