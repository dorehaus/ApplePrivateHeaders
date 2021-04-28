/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMEMessageDatagramClientDelegate <HMERouterClientDelegate>
@required
-(void)clientDidDisconnect:(id)arg1;
-(void)client:(id)arg1 sendKeepAliveWithCompletion:(/*^block*/id)arg2;
-(void)client:(id)arg1 sendConnectWithAddedFilters:(id)arg2 completion:(/*^block*/id)arg3;
-(void)client:(id)arg1 sendChangeRegistrationsWithAddedFilters:(id)arg2 removedFilters:(id)arg3 completion:(/*^block*/id)arg4;
-(void)client:(id)arg1 sendDisconnectWithCompletion:(/*^block*/id)arg2;
-(void)clientDidConnect:(id)arg1 serverIdentifier:(id)arg2;

@end

