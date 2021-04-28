/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/Versions/A/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPRemoteDeviceSecretValidatorProtocol
@property (assign,nonatomic) unsigned long long supportedEscapeOfferMask; 
@required
-(unsigned long long)supportedEscapeOfferMask;
-(void)cancelValidationWithError:(id)arg1;
-(void)validateSecret:(id)arg1 devices:(id)arg2 type:(unsigned long long)arg3 withCompletion:(/*^block*/id)arg4;
-(void)approveFromAnotherDeviceWithCompletion:(/*^block*/id)arg1;
-(void)cancelApproveFromAnotherDevice;
-(void)validateRecoveryKey:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resetAccountCDPState;
-(void)supportedEscapeOfferMaskCompletion:(/*^block*/id)arg1;
-(void)setSupportedEscapeOfferMask:(unsigned long long)arg1;

@end

