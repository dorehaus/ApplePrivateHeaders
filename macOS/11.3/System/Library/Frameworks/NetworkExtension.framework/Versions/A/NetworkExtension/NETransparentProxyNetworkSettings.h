/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings {

	char _isFullyTransparent;
	NSArray* _includedNetworkRules;
	NSArray* _excludedNetworkRules;

}

@property (assign) char isFullyTransparent;                   //@synthesize isFullyTransparent=_isFullyTransparent - In the implementation block
@property (copy) NSArray * includedNetworkRules;              //@synthesize includedNetworkRules=_includedNetworkRules - In the implementation block
@property (copy) NSArray * excludedNetworkRules;              //@synthesize excludedNetworkRules=_excludedNetworkRules - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(void)setIncludedNetworkRules:(NSArray *)arg1 ;
-(void)setExcludedNetworkRules:(NSArray *)arg1 ;
-(void)setIsFullyTransparent:(char)arg1 ;
-(char)validateNetworkRule:(id)arg1 collectErrors:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(char)isFullyTransparent;
-(NSArray *)includedNetworkRules;
-(NSArray *)excludedNetworkRules;
@end
