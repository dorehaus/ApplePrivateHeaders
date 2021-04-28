/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Versions/A/Sentry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class STYWakeDetectorDebugInfo;

@interface STYWakeEvent : NSObject {

	unsigned long long _wakeType;
	unsigned long long _sleepType;
	unsigned long long _endType;
	unsigned long long _wakeStart;
	unsigned long long _kernelStart;
	unsigned long long _graphicsReady;
	unsigned long long _loginWindowWakeEnd;
	STYWakeDetectorDebugInfo* _debugInfo;

}

@property (assign,nonatomic) unsigned long long wakeType;                        //@synthesize wakeType=_wakeType - In the implementation block
@property (assign,nonatomic) unsigned long long sleepType;                       //@synthesize sleepType=_sleepType - In the implementation block
@property (assign,nonatomic) unsigned long long endType;                         //@synthesize endType=_endType - In the implementation block
@property (assign,nonatomic) unsigned long long wakeStart;                       //@synthesize wakeStart=_wakeStart - In the implementation block
@property (assign,nonatomic) unsigned long long kernelStart;                     //@synthesize kernelStart=_kernelStart - In the implementation block
@property (assign,nonatomic) unsigned long long graphicsReady;                   //@synthesize graphicsReady=_graphicsReady - In the implementation block
@property (assign,nonatomic) unsigned long long loginWindowWakeEnd;              //@synthesize loginWindowWakeEnd=_loginWindowWakeEnd - In the implementation block
@property (readonly) unsigned long long wakeEnd; 
@property (nonatomic,retain) STYWakeDetectorDebugInfo * debugInfo;               //@synthesize debugInfo=_debugInfo - In the implementation block
-(id)description;
-(unsigned long long)endType;
-(STYWakeDetectorDebugInfo *)debugInfo;
-(void)setDebugInfo:(STYWakeDetectorDebugInfo *)arg1 ;
-(unsigned long long)wakeType;
-(unsigned long long)wakeStart;
-(unsigned long long)wakeEnd;
-(unsigned long long)kernelStart;
-(unsigned long long)loginWindowWakeEnd;
-(unsigned long long)graphicsReady;
-(void)setWakeType:(unsigned long long)arg1 ;
-(unsigned long long)sleepType;
-(void)setSleepType:(unsigned long long)arg1 ;
-(void)setEndType:(unsigned long long)arg1 ;
-(void)setWakeStart:(unsigned long long)arg1 ;
-(void)setKernelStart:(unsigned long long)arg1 ;
-(void)setGraphicsReady:(unsigned long long)arg1 ;
-(void)setLoginWindowWakeEnd:(unsigned long long)arg1 ;
@end
