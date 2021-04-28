/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/Versions/A/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BKEnrollOperation.h>

@class BKIdentity;

@interface BKEnrollPearlOperation : BKEnrollOperation {

	char _clientToComplete;
	BKIdentity* _augmentedIdentity;

}

@property (assign,nonatomic,__weak) id<BKEnrollPearlOperationDelegate> delegate; 
@property (assign,nonatomic) char clientToComplete;                                           //@synthesize clientToComplete=_clientToComplete - In the implementation block
@property (nonatomic,retain) BKIdentity * augmentedIdentity;                                  //@synthesize augmentedIdentity=_augmentedIdentity - In the implementation block
-(char)completeWithError:(id*)arg1 ;
-(char)suspendWithError:(id*)arg1 ;
-(char)resumeWithError:(id*)arg1 ;
-(char)clientToComplete;
-(void)setClientToComplete:(char)arg1 ;
-(BKIdentity *)augmentedIdentity;
-(void)setAugmentedIdentity:(BKIdentity *)arg1 ;
@end
