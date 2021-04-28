/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSRealTimeEncryptionProxy;

@interface IDSRealTimeEncryptionProxy : NSObject {

	_IDSRealTimeEncryptionProxy* _internal;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
-(void)sendPrekeyToGroup:(id)arg1 ;
-(void)requestPublicKeys;
-(void)sendMasterKeyMaterialToGroup:(id)arg1 ;
-(void)sendMKMRecoveryRequestToGroup:(id)arg1 ;
-(void)requestMasterKeyMaterialForGroup:(id)arg1 ;
-(void)resetKeysForGroup:(id)arg1 ;
@end
