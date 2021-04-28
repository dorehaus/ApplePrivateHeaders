/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/Versions/A/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APCListenerResultData : NSObject {

	unsigned long long _completionTime;

}

@property (assign,nonatomic) unsigned long long completionTime;              //@synthesize completionTime=_completionTime - In the implementation block
-(char)isValid;
-(void)reset;
-(void)setCompletionTime:(unsigned long long)arg1 ;
-(unsigned long long)completionTime;
-(id)initWithPasscodeDurationNSec:(unsigned long long)arg1 ;
@end
