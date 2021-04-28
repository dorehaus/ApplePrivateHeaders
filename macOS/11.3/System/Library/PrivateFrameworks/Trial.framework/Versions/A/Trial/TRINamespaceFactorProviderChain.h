/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Versions/A/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRINamespaceFactorProviding.h>

@protocol TRINamespaceFactorProviding;
@class NSArray, NSString;

@interface TRINamespaceFactorProviderChain : NSObject <TRINamespaceFactorProviding> {

	NSArray* _directoryChain;
	NSArray* _providerChain;
	id<TRINamespaceFactorProviding> _installedProvider;
	id<TRINamespaceFactorProviding> _rolloutProvider;
	id<TRINamespaceFactorProviding> _experimentProvider;
	unsigned _namespaceId;
	NSString* _namespaceName;

}

@property (nonatomic,readonly) NSString * namespaceName;              //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) unsigned namespaceId;                  //@synthesize namespaceId=_namespaceId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)factorProviderWithPaths:(id)arg1 namespaceName:(id)arg2 ;
+(id)factorProviderWithNamespaceName:(id)arg1 directoryChain:(id)arg2 treatmentLayers:(id)arg3 ;
+(id)factorProviderWithNamespaceName:(id)arg1 directoryChain:(id)arg2 ;
-(NSString *)namespaceName;
-(char)isRegistered;
-(id)treatmentId;
-(id)rolloutId;
-(unsigned)namespaceId;
-(unsigned)namespaceCompatibilityVersion;
-(unsigned)namespaceVersion;
-(id)factorLevels;
-(id)levelForFactor:(id)arg1 ;
-(char)hasAnyTreatmentInLayers:(unsigned long long)arg1 ;
-(id)initWithNamespaceName:(id)arg1 directoryChain:(id)arg2 treatmentLayers:(id)arg3 ;
-(id)treatmentIdForFactor:(id)arg1 ;
@end

