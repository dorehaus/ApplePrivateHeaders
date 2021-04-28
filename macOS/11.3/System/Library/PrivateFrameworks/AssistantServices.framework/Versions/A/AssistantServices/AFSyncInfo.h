/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, SASyncAppMetaData, NSSet;

@interface AFSyncInfo : NSObject <NSSecureCoding> {

	char _targetIsLocal;
	char _forVerification;
	NSString* _anchor;
	NSString* _validity;
	long long _count;
	NSString* _key;
	SASyncAppMetaData* _appMetadata;
	NSSet* _reasons;

}

@property (nonatomic,copy) NSString * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,copy) NSString * validity;                          //@synthesize validity=_validity - In the implementation block
@property (assign,nonatomic) long long count;                            //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) SASyncAppMetaData * appMetadata;              //@synthesize appMetadata=_appMetadata - In the implementation block
@property (assign,nonatomic) char targetIsLocal;                         //@synthesize targetIsLocal=_targetIsLocal - In the implementation block
@property (assign,nonatomic) char forVerification;                       //@synthesize forVerification=_forVerification - In the implementation block
@property (nonatomic,copy) NSSet * reasons;                              //@synthesize reasons=_reasons - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setCount:(long long)arg1 ;
-(NSSet *)reasons;
-(void)setReasons:(NSSet *)arg1 ;
-(NSString *)anchor;
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setAppMetadata:(SASyncAppMetaData *)arg1 ;
-(id)initWithAnchor:(id)arg1 forcingReset:(char)arg2 ;
-(SASyncAppMetaData *)appMetadata;
-(char)targetIsLocal;
-(void)setTargetIsLocal:(char)arg1 ;
-(char)forVerification;
-(void)setForVerification:(char)arg1 ;
@end

