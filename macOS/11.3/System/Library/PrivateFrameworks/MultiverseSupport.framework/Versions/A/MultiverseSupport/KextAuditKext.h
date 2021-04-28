/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MultiverseSupport.framework/Versions/A/MultiverseSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface KextAuditKext : NSObject <NSSecureCoding> {

	NSData* _cdHash;
	NSData* _bundleIDHash;
	NSString* _teamID;
	NSString* _version;

}

@property (retain) NSData * cdHash;                    //@synthesize cdHash=_cdHash - In the implementation block
@property (retain) NSData * bundleIDHash;              //@synthesize bundleIDHash=_bundleIDHash - In the implementation block
@property (retain) NSString * teamID;                  //@synthesize teamID=_teamID - In the implementation block
@property (retain) NSString * version;                 //@synthesize version=_version - In the implementation block
+(id)kextWithCDHash:(id)arg1 andBundleIDHash:(id)arg2 andTeamID:(id)arg3 andVersion:(id)arg4 ;
+(char)supportsSecureCoding;
-(BOOL)xpcDictionary:(id*)arg1 ;
-(id)initWithCDHash:(id)arg1 andBundleIDHash:(id)arg2 andTeamID:(id)arg3 andVersion:(id)arg4 ;
-(void)setCdHash:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)version;
-(NSString *)teamID;
-(void)setTeamID:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)setBundleIDHash:(NSData *)arg1 ;
-(NSData *)bundleIDHash;
-(NSData *)cdHash;
@end

