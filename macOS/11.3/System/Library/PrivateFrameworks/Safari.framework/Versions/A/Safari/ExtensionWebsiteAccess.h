/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface ExtensionWebsiteAccess : NSObject <NSSecureCoding> {

	char _hasInjectedContent;
	char _specifiedPresenceOfInjectedContent;
	int _accessLevel;
	NSArray* _allowedDomains;
	NSArray* _allowedDomainsForHeaderInjection;

}

@property (nonatomic,readonly) int accessLevel;                                                                            //@synthesize accessLevel=_accessLevel - In the implementation block
@property (nonatomic,readonly) NSArray * allowedDomains;                                                                   //@synthesize allowedDomains=_allowedDomains - In the implementation block
@property (nonatomic,readonly) Vector<Safari::ExtensionDomainPattern allowedDomainPatterns; 
@property (nonatomic,readonly) NSArray * allowedDomainsForHeaderInjection;                                                 //@synthesize allowedDomainsForHeaderInjection=_allowedDomainsForHeaderInjection - In the implementation block
@property (nonatomic,readonly) Vector<Safari::ExtensionDomainPattern allowedDomainPatternsForHeaderInjection; 
@property (nonatomic,readonly) char hasInjectedContent;                                                                    //@synthesize hasInjectedContent=_hasInjectedContent - In the implementation block
@property (nonatomic,readonly) char specifiedPresenceOfInjectedContent;                                                    //@synthesize specifiedPresenceOfInjectedContent=_specifiedPresenceOfInjectedContent - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(int)accessLevel;
-(char)canAccessURL:(id)arg1 ;
-(id)initWithAccessLevel:(int)arg1 allowedDomainPatterns:(Vector<Safari::ExtensionDomainPattern, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>*)arg2 hasInjectedContent:(char)arg3 ;
-(char)hasInjectedContent;
-(char)specifiedPresenceOfInjectedContent;
-(NSArray *)allowedDomainsForHeaderInjection;
-(NSArray *)allowedDomains;
-(Vector<Safari::ExtensionDomainPattern)allowedDomainPatterns;
-(Vector<Safari::ExtensionDomainPattern)allowedDomainPatternsForHeaderInjection;
-(char)requiresAccessToAdditionalWebsitesThan:(id)arg1 ;
@end
