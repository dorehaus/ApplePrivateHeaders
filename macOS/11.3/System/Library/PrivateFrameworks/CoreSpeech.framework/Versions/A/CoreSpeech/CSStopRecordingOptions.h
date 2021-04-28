/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSStopRecordingOptions : NSObject {

	unsigned long long _stopRecordingReason;
	unsigned long long _expectedStopHostTime;

}

@property (assign,nonatomic) unsigned long long stopRecordingReason;               //@synthesize stopRecordingReason=_stopRecordingReason - In the implementation block
@property (assign,nonatomic) unsigned long long expectedStopHostTime;              //@synthesize expectedStopHostTime=_expectedStopHostTime - In the implementation block
-(id)description;
-(unsigned long long)stopRecordingReason;
-(void)setStopRecordingReason:(unsigned long long)arg1 ;
-(unsigned long long)expectedStopHostTime;
-(void)setExpectedStopHostTime:(unsigned long long)arg1 ;
@end

