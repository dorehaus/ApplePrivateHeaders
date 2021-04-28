/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INCodableAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSValueTransformer;

@interface INCodableObjectAttribute : INCodableAttribute <NSSecureCoding> {

	NSString* _originalTypeName;
	NSString* _typeName;

}

@property (setter=_setOriginalTypeName:,nonatomic,copy) NSString * _originalTypeName;              //@synthesize originalTypeName=_originalTypeName - In the implementation block
@property (nonatomic,copy) NSString * typeName;                                                    //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,readonly) NSValueTransformer * valueTransformer; 
@property (nonatomic,copy,readonly) NSString * className; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)className;
-(NSValueTransformer *)valueTransformer;
-(void)setClassName:(NSString *)arg1 ;
-(Class)objectClass;
-(long long)valueType;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(id)__INCodableDescriptionKey;
-(id)__INIntentResponseCodableDescriptionKey;
-(id)__INTypeCodableDescriptionKey;
-(id)__INCodableDescriptionTypeKey;
-(id)__INIntentResponseCodableDescriptionTypeKey;
-(id)__INTypeCodableDescriptionTypeKey;
-(NSString *)_originalTypeName;
-(Class)resolutionResultClass;
-(Class)_relationshipValueTransformerClass;
-(void)_setOriginalTypeName:(id)arg1 ;
@end

