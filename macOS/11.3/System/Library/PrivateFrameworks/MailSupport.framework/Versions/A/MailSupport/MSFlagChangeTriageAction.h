/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/Versions/A/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MSTriageAction.h>

@class ECMessageFlags;

@interface MSFlagChangeTriageAction : MSTriageAction {

	long long _reason;

}

@property (nonatomic,readonly) ECMessageFlags * messageFlags; 
@property (nonatomic,readonly) char flagState; 
@property (nonatomic,readonly) long long reason;                                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,__weak,readonly) id<MSFlagChangeTriageActionDelegate> delegate; 
-(long long)reason;
-(ECMessageFlags *)messageFlags;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 reason:(long long)arg3 ;
-(id)_changeAction;
-(void)_toggleFlagWithBuilder:(id)arg1 ;
-(char)flagState;
@end

