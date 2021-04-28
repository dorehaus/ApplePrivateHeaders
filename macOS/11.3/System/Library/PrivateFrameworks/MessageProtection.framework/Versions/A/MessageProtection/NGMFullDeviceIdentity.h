/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SigningKey, NSMutableArray;

@interface NGMFullDeviceIdentity : NSObject {

	SigningKey* _deviceSigningKey;
	NSMutableArray* _devicePrekeys;

}

@property (nonatomic,retain) SigningKey * deviceSigningKey;               //@synthesize deviceSigningKey=_deviceSigningKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * devicePrekeys;              //@synthesize devicePrekeys=_devicePrekeys - In the implementation block
+(id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)identityWithAccess:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicDeviceIdentityWithError:(id*)arg1 ;
-(char)eraseFromKeyChain:(id*)arg1 ;
-(id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id*)arg3 ;
-(void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(/*^block*/id)arg3 ;
-(char)shouldRollEncryptionIdentity;
-(id)keyRollingTicketWithError:(id*)arg1 ;
-(char)updateWithRegisteredTicket:(id)arg1 error:(id*)arg2 ;
-(SigningKey *)deviceSigningKey;
-(NSMutableArray *)devicePrekeys;
-(char)deleteKeyWithTag:(id)arg1 ;
-(char)requiresMigration;
-(void)postMigrationKeychainCleanup;
-(id)signDataWithFormatter:(id)arg1 error:(id*)arg2 ;
-(void)setDeviceSigningKey:(SigningKey *)arg1 ;
-(void)setDevicePrekeys:(NSMutableArray *)arg1 ;
-(id)initWithSigningKey:(id)arg1 devicePrekeys:(id)arg2 ;
-(void)unsealMessageAndAttributes:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(/*^block*/id)arg3 ;
@end

