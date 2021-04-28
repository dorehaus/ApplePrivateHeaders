/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/Versions/A/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAP2AccessoryServerDiscovery <NSObject>
@property (assign,nonatomic,__weak) id<HAP2AccessoryServerDiscoveryDelegate> delegate; 
@property (getter=isDiscovering,nonatomic,readonly) char discovering; 
@required
-(id<HAP2AccessoryServerDiscoveryDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(char)isDiscovering;
-(void)startDiscovering;
-(void)stopDiscovering;
-(void)reconfirmAccessory:(id)arg1;

@end

