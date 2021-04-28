/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHaptics/CoreHaptics-Structs.h>
@interface CHMetricsManager : NSObject
+(id)sharedManager;
+(double)currentTime;
+(CAMutex*)getLock;
+(void)createSharedManagerWithEngine:(id)arg1 audioSessionID:(unsigned)arg2 SPI:(char)arg3 sessionIsShared:(char)arg4 ;
+(void)destroySharedManagerWithEngine:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)dispatchOnLocal:(/*^block*/id)arg1 ;
-(void)addForEngine:(id)arg1 audioSessionID:(unsigned)arg2 sessionIsShared:(char)arg3 SPI:(char)arg4 ;
-(void)destroyForEngine:(id)arg1 ;
-(void)handleServerRecovery:(id)arg1 audioSessionID:(unsigned)arg2 sessionIsShared:(char)arg3 ;
-(void)handleEngineStart:(id)arg1 ;
-(void)handleEngineStop:(id)arg1 ;
-(void)handlePlayerInit:(id)arg1 player:(id)arg2 events:(id)arg3 isAdvanced:(BOOL)arg4 ;
-(void)handlePlayerDealloc:(id)arg1 player:(id)arg2 ;
-(void)handleParamCurveEncountered:(id)arg1 ;
-(void)handlePlayerAction:(id)arg1 player:(id)arg2 action:(long long)arg3 time:(float)arg4 isAdvanced:(BOOL)arg5 ;
-(void)handlePlayerFinish:(id)arg1 endTime:(float)arg2 ;
-(void)setMetricsTestModeEnabled;
-(id)getMetricsForPlayer:(id)arg1 ;
@end

