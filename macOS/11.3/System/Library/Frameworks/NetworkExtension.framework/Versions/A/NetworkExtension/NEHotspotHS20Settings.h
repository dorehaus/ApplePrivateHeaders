/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NEHotspotHS20Settings : NSObject <NSCopying, NSSecureCoding> {

	char _roamingEnabled;
	NSString* _domainName;
	NSArray* _roamingConsortiumOIs;
	NSArray* _naiRealmNames;
	NSArray* _MCCAndMNCs;

}

@property (readonly) NSString * domainName;                           //@synthesize domainName=_domainName - In the implementation block
@property (getter=isRoamingEnabled) char roamingEnabled;              //@synthesize roamingEnabled=_roamingEnabled - In the implementation block
@property (copy) NSArray * roamingConsortiumOIs;                      //@synthesize roamingConsortiumOIs=_roamingConsortiumOIs - In the implementation block
@property (copy) NSArray * naiRealmNames;                             //@synthesize naiRealmNames=_naiRealmNames - In the implementation block
@property (copy) NSArray * MCCAndMNCs;                                //@synthesize MCCAndMNCs=_MCCAndMNCs - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithDomainName:(id)arg1 roamingEnabled:(char)arg2 ;
-(void)setRoamingConsortiumOIs:(NSArray *)arg1 ;
-(void)setNaiRealmNames:(NSArray *)arg1 ;
-(void)setMCCAndMNCs:(NSArray *)arg1 ;
-(NSArray *)roamingConsortiumOIs;
-(NSArray *)naiRealmNames;
-(NSArray *)MCCAndMNCs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)domainName;
-(char)isRoamingEnabled;
-(void)setRoamingEnabled:(char)arg1 ;
@end

