/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FPItemID : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _providerID;
	NSString* _domainIdentifier;

}

@property (getter=isDiskIdentifier,nonatomic,readonly) char diskIdentifier; 
@property (nonatomic,readonly) char isPlaceholder; 
@property (nonatomic,readonly) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * providerDomainID; 
@property (nonatomic,readonly) NSString * providerID;                                    //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;                              //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * providerIdentifier; 
+(char)supportsSecureCoding;
+(id)rootItemIDWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(id)rootItemIDWithProviderDomainID:(id)arg1 ;
+(id)fpIdentifierFromCoreSpotlightIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(id)csIdentifierFromFPIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(id)coreSpotlightEncodedDomainIdentifier:(id)arg1 ;
+(id)stringByRemovingPrefix:(id)arg1 fromIdentifier:(id)arg2 ;
+(void)getDomainIdentifier:(id*)arg1 andIdentifier:(id*)arg2 fromCoreSpotlightIdentifier:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)domainIdentifier;
-(NSString *)identifier;
-(char)isPlaceholder;
-(NSString *)providerIdentifier;
-(id)initWithProviderDomainID:(id)arg1 itemIdentifier:(id)arg2 ;
-(NSString *)providerDomainID;
-(id)initWithSearchableItem:(id)arg1 ;
-(NSString *)providerID;
-(char)isEqualToItemID:(id)arg1 ;
-(id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 ;
-(void)setProviderDomainID:(NSString *)arg1 ;
-(char)isDiskIdentifier;
-(id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 coreSpotlightIdentifier:(id)arg3 ;
-(id)coreSpotlightIdentifier;
@end

