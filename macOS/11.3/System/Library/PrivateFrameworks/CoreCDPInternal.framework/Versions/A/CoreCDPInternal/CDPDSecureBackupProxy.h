/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CDPContext;


@protocol CDPDSecureBackupProxy <NSObject>
@property (nonatomic,retain) CDPContext * cdpContext; 
@required
-(id)initWithContext:(id)arg1;
-(CDPContext *)cdpContext;
-(void)setCdpContext:(id)arg1;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(id)accountInfoWithInfo:(id)arg1 error:(id*)arg2;
-(char)disableWithInfo:(id)arg1 error:(id*)arg2;
-(char)enableWithInfo:(id)arg1 error:(id*)arg2;
-(id)recoverWithInfo:(id)arg1 error:(id*)arg2;
-(void)cacheRecoveryKey:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)uncacheAllSecrets;
-(void)recoveryKeyAvailabilityWithCompletion:(/*^block*/id)arg1;
-(void)setDataPrivacyEnabled:(char)arg1 completion:(/*^block*/id)arg2;
-(void)dataPrivacyStatusWithCompletion:(/*^block*/id)arg1;
-(void)canUpdateDataPrivacyStatusWithCompletion:(/*^block*/id)arg1;

@end

