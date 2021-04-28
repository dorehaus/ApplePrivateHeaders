/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface AMRemoveQuarantineRecoveryAttempter : NSObject {

	unsigned long long __recoveryOptionIndex;
	NSURL* __url;

}

@property (assign,nonatomic) unsigned long long _recoveryOptionIndex;              //@synthesize _recoveryOptionIndex=__recoveryOptionIndex - In the implementation block
@property (nonatomic,retain) NSURL * _url;                                         //@synthesize _url=__url - In the implementation block
+(id)removeQuarantineRecoveryAttempterWithRecoveryOptionIndex:(unsigned long long)arg1 url:(id)arg2 ;
-(NSURL *)_url;
-(char)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(unsigned long long)_recoveryOptionIndex;
-(void)set_recoveryOptionIndex:(unsigned long long)arg1 ;
-(id)initWithRecoveryOptionIndex:(unsigned long long)arg1 url:(id)arg2 ;
-(void)set_url:(NSURL *)arg1 ;
-(char)_removeQuarantine;
@end
