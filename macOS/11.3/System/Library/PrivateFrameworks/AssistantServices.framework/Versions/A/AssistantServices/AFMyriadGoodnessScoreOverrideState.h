/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFMyriadGoodnessScoreOverrideState : NSObject <NSCopying, NSSecureCoding> {

	long long _overrideOption;
	NSString* _reason;

}

@property (nonatomic,readonly) long long overrideOption;              //@synthesize overrideOption=_overrideOption - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                //@synthesize reason=_reason - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithOverrideOption:(long long)arg1 reason:(id)arg2 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(long long)overrideOption;
@end

