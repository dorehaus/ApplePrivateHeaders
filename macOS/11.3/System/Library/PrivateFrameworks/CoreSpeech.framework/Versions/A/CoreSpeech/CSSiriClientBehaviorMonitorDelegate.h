/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSiriClientBehaviorMonitorDelegate <NSObject>
@optional
-(void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(char)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;

@required
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(char)arg3 option:(id)arg4 withEventUUID:(id)arg5;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;

@end

