/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IOBluetoothDaemonNSXPCDelegate <NSObject>
@optional
-(void)switchEvent:(unsigned)arg1;
-(void)aacpCustomDataEvent:(unsigned)arg1 withData:(id)arg2 forDevice:(id)arg3;
-(void)aacpStreamingStateEvent:(unsigned char)arg1 forDevice:(id)arg2 accessory:(id)arg3;
-(void)aacpRelayMessageEvent:(id)arg1 forDevice:(id)arg2 source:(id)arg3;
-(void)aacpRelayMessageEvent:(id)arg1 type:(unsigned char)arg2 forDevice:(id)arg3 source:(id)arg4;
-(void)aacpCommandStatusEvent:(unsigned short)arg1 reason:(unsigned short)arg2 forDevice:(id)arg3;

@end

