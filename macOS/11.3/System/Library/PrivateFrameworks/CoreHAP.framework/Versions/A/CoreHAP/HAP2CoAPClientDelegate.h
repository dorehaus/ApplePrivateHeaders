/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAP2CoAPClientDelegate <NSObject>
@optional
-(void)clientDidGetRegistered:(id)arg1;
-(void)clientDidGetUnregistered:(id)arg1;

@required
-(void)clientDidDisconnect:(id)arg1 error:(id)arg2;
-(void)client:(id)arg1 didReceiveEvent:(id)arg2;

@end

