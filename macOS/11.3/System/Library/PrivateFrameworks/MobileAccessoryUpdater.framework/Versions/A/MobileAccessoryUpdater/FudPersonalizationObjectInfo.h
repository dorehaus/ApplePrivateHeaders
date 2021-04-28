/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Versions/A/MobileAccessoryUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface FudPersonalizationObjectInfo : NSObject <NSSecureCoding> {

	char _esecSet;
	char _eproSet;
	char _trustedSet;
	char _trusted;
	char _effectiveProductionMode;
	char _effectiveSecurityMode;
	NSString* _objectTag;
	NSData* _digest;

}

@property (nonatomic,copy,readonly) NSString * objectTag;               //@synthesize objectTag=_objectTag - In the implementation block
@property (nonatomic,retain) NSData * digest;                           //@synthesize digest=_digest - In the implementation block
@property (assign,nonatomic) char trusted;                              //@synthesize trusted=_trusted - In the implementation block
@property (assign,nonatomic) char effectiveProductionMode;              //@synthesize effectiveProductionMode=_effectiveProductionMode - In the implementation block
@property (assign,nonatomic) char effectiveSecurityMode;                //@synthesize effectiveSecurityMode=_effectiveSecurityMode - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTag:(id)arg1 ;
-(NSData *)digest;
-(void)setEffectiveProductionMode:(char)arg1 ;
-(void)setEffectiveSecurityMode:(char)arg1 ;
-(char)effectiveProductionMode;
-(char)effectiveSecurityMode;
-(void)setTrusted:(char)arg1 ;
-(char)trusted;
-(void)setDigest:(NSData *)arg1 ;
-(char)isTrustedSet;
-(char)isEffectiveProductionModeSet;
-(char)isEffectiveSecurityModeSet;
-(NSString *)objectTag;
@end

