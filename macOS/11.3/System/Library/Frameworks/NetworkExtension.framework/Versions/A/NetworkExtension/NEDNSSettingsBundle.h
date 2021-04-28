/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NEDNSSettings;

@interface NEDNSSettingsBundle : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	char _enabled;
	NSArray* _onDemandRules;
	NEDNSSettings* _settings;

}

@property (getter=isEnabled) char enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSArray * onDemandRules;               //@synthesize onDemandRules=_onDemandRules - In the implementation block
@property (copy) NEDNSSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NEDNSSettings *)settings;
-(void)setSettings:(NEDNSSettings *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)onDemandRules;
-(void)setOnDemandRules:(NSArray *)arg1 ;
@end

