/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class KTPatInclusionProofVerifier, TransparencyManagedDataStore, NSDictionary, LogEntry;

@interface PatInclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTPatInclusionProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) unsigned long long patLogBeginningMs; 
@property (readonly) unsigned long long tltLogBeginningMs; 
@property (readonly) NSDictionary * metadata; 
@property (nonatomic,retain) LogEntry * perApplicationTreeEntry; 
@property (assign,nonatomic) char hasPerApplicationTreeEntry; 
@property (nonatomic,retain) LogEntry * topLevelTreeEntry; 
@property (assign,nonatomic) char hasTopLevelTreeEntry; 
+(id)descriptor;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(KTPatInclusionProofVerifier *)verifier;
-(void)setVerifier:(KTPatInclusionProofVerifier *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
-(unsigned long long)patLogBeginningMs;
-(id)vrfPublicKeyWithError:(id*)arg1 ;
-(unsigned long long)tltLogBeginningMs;
-(id)patSigningKeyWithError:(id*)arg1 ;
@end
