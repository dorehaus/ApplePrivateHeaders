/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/Versions/A/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface ECDKIMPublicKey : NSObject {

	NSString* _version;
	unsigned long long _hashingAlgorithm;
	unsigned long long _signingAlgorithm;
	NSString* _notes;
	NSData* _publicKeyData;
	NSString* _serviceType;
	NSString* _flags;

}

@property (nonatomic,copy,readonly) NSString * version;                          //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long hashingAlgorithm;              //@synthesize hashingAlgorithm=_hashingAlgorithm - In the implementation block
@property (nonatomic,readonly) unsigned long long signingAlgorithm;              //@synthesize signingAlgorithm=_signingAlgorithm - In the implementation block
@property (nonatomic,copy,readonly) NSString * notes;                            //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy,readonly) NSData * publicKeyData;                      //@synthesize publicKeyData=_publicKeyData - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                      //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * flags;                            //@synthesize flags=_flags - In the implementation block
-(NSString *)flags;
-(id)description;
-(NSString *)version;
-(NSString *)serviceType;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)notes;
-(NSData *)publicKeyData;
-(unsigned long long)signingAlgorithm;
-(unsigned long long)hashingAlgorithm;
-(void)_parseVersionFromDictionary:(id)arg1 ;
-(void)_parseAcceptableHashingAlgorithmsFromDictionary:(id)arg1 ;
-(void)_parseSigningAlgorithmFromDictionary:(id)arg1 ;
-(void)_parseNotesFromDictionary:(id)arg1 ;
-(void)_parsePublicKeyDataFromDictionary:(id)arg1 ;
-(void)_parseServiceTypeFromDictionary:(id)arg1 ;
-(void)_parseFlagsFromDictionary:(id)arg1 ;
-(id)initWithKeyValueDictionary:(id)arg1 ;
-(id)initWithVersion:(id)arg1 hashingAlgorithm:(unsigned long long)arg2 signingAlgorithm:(unsigned long long)arg3 notes:(id)arg4 publicKeyData:(id)arg5 serviceType:(id)arg6 flags:(id)arg7 ;
@end
