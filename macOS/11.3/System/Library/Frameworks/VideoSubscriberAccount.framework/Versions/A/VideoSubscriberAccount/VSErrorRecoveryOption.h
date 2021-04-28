/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSErrorRecoveryOption : NSObject {

	char _destructive;
	NSString* _localizedAlertButtonTitle;
	/*^block*/id _attemptHandler;

}

@property (nonatomic,copy) NSString * localizedAlertButtonTitle;                 //@synthesize localizedAlertButtonTitle=_localizedAlertButtonTitle - In the implementation block
@property (nonatomic,copy) id attemptHandler;                                    //@synthesize attemptHandler=_attemptHandler - In the implementation block
@property (assign,getter=isDestructive,nonatomic) char destructive;              //@synthesize destructive=_destructive - In the implementation block
-(char)isDestructive;
-(void)setDestructive:(char)arg1 ;
-(id)attemptHandler;
-(NSString *)localizedAlertButtonTitle;
-(void)setLocalizedAlertButtonTitle:(NSString *)arg1 ;
-(void)setAttemptHandler:(id)arg1 ;
@end

