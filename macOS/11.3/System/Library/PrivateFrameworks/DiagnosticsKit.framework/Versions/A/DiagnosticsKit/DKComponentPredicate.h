/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/Versions/A/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DKComponentPredicate : NSObject {

	char _exactMatch;
	NSString* _type;
	NSString* _identifier;
	NSString* _domain;

}

@property (nonatomic,readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) char exactMatch;                    //@synthesize exactMatch=_exactMatch - In the implementation block
+(id)componentPredicateWithDomain:(id)arg1 exactMatch:(char)arg2 ;
+(id)componentPredicateWithType:(id)arg1 identifier:(id)arg2 ;
+(id)componentPredicateMatchingComponentIdentity:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)domain;
-(NSString *)type;
-(NSString *)identifier;
-(char)exactMatch;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(id)initWithDomain:(id)arg1 exactMatch:(char)arg2 ;
-(char)isEqualToComponentPredicate:(id)arg1 ;
-(char)matchesComponentIdentity:(id)arg1 ;
@end

