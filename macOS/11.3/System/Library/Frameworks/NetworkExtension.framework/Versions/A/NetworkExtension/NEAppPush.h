/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSString;

@interface NEAppPush : NSObject <NSSecureCoding, NSCopying> {

	char _enabled;
	NSDictionary* _providerConfiguration;
	NSArray* _matchSSIDs;
	NSString* _pluginType;
	NSString* _providerBundleIdentifier;

}

@property (getter=isEnabled) char enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSDictionary * providerConfiguration;              //@synthesize providerConfiguration=_providerConfiguration - In the implementation block
@property (copy) NSArray * matchSSIDs;                              //@synthesize matchSSIDs=_matchSSIDs - In the implementation block
@property (copy) NSString * pluginType;                             //@synthesize pluginType=_pluginType - In the implementation block
@property (copy) NSString * providerBundleIdentifier;               //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(char)overlapsWithConfiguration:(id)arg1 ;
-(void)setMatchSSIDs:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setPluginType:(NSString *)arg1 ;
-(NSString *)providerBundleIdentifier;
-(void)setProviderConfiguration:(NSDictionary *)arg1 ;
-(NSString *)pluginType;
-(NSArray *)matchSSIDs;
-(NSDictionary *)providerConfiguration;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
@end
