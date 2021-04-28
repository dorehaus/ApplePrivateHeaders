/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAP2AccessoryServerDiscoveryDelegate <NSObject>
@optional
-(void)discovery:(id)arg1 didStartDiscoveringWithError:(id)arg2;
-(void)discovery:(id)arg1 didStopDiscoveringWithError:(id)arg2;
-(void)discovery:(id)arg1 didLoseAccessory:(id)arg2 error:(id)arg3;

@required
-(void)discovery:(id)arg1 didDiscoverAccessory:(id)arg2;

@end
