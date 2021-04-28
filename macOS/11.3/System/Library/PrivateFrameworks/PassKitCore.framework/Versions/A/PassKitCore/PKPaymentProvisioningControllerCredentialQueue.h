/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject {

	NSMutableArray* _credentials;
	NSMutableArray* _completedCredentials;
	unsigned long long _currentIndex;

}
-(id)init;
-(unsigned long long)count;
-(unsigned long long)completedCount;
-(void)setCredentialsToProvision:(id)arg1 ;
-(void)removeCredential:(id)arg1 ;
-(id)nextCredentialToProvision;
-(void)setCurrentCredential:(id)arg1 ;
-(unsigned long long)remaining;
-(id)credentials;
-(id)completedCredentials;
@end

