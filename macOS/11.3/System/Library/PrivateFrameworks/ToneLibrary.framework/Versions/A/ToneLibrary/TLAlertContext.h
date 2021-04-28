/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface TLAlertContext : NSObject {

	char _beingInterrupted;
	long long _playbackBackEnd;
	NSObject*<OS_dispatch_source> _timeoutTimerSource;

}

@property (assign,nonatomic) long long playbackBackEnd;                                     //@synthesize playbackBackEnd=_playbackBackEnd - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimerSource;              //@synthesize timeoutTimerSource=_timeoutTimerSource - In the implementation block
@property (assign,getter=isBeingInterrupted,nonatomic) char beingInterrupted;               //@synthesize beingInterrupted=_beingInterrupted - In the implementation block
-(void)setPlaybackBackEnd:(long long)arg1 ;
-(void)setTimeoutTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(char)isBeingInterrupted;
-(void)setBeingInterrupted:(char)arg1 ;
-(long long)playbackBackEnd;
-(NSObject*<OS_dispatch_source>)timeoutTimerSource;
@end
