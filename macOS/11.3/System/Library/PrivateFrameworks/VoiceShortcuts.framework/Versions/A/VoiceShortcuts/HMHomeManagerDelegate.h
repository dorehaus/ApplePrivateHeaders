/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/Versions/A/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMHomeManagerDelegate <NSObject>
@optional
-(void)homeManager:(id)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2;
-(void)homeManagerDidUpdateHomes:(id)arg1;
-(void)homeManagerDidUpdatePrimaryHome:(id)arg1;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
-(void)homeManager:(id)arg1 didReceiveAddAccessoryRequest:(id)arg2;

@end
