/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/Versions/A/SiriPlaybackControlIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>

@class NSNumber;

@interface SetVolumeLevelIntentResponse : INIntentResponse {

	long long _code;

}

@property (assign) long long code;                              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) NSNumber * volumeLevel; 
-(long long)code;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
@end

