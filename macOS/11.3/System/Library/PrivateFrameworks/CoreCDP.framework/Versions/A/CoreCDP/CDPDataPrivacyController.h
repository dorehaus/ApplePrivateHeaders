/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/Versions/A/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDPDataPrivacyController : NSObject
-(void)statusForDataPrivacyWithCompletion:(/*^block*/id)arg1 ;
-(void)_checkUseConsentForContext:(id)arg1 shouldContinue:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_logDataPrivacyStatUpdateError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateDataPrivacyWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateDataPrivacyWithContext:(id)arg1 shouldContinue:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end
