/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, INImage, NSArray, NSString;

@interface INShortcutOverview : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakableString* _name;
	INSpeakableString* _voiceCommand;
	INImage* _icon;
	INSpeakableString* _descriptiveText;
	NSArray* _steps;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) INSpeakableString * name;                         //@synthesize name=_name - In the implementation block
@property (copy,readonly) INSpeakableString * voiceCommand;                 //@synthesize voiceCommand=_voiceCommand - In the implementation block
@property (copy,readonly) INImage * icon;                                   //@synthesize icon=_icon - In the implementation block
@property (copy,readonly) INSpeakableString * descriptiveText;              //@synthesize descriptiveText=_descriptiveText - In the implementation block
@property (copy,readonly) NSArray * steps;                                  //@synthesize steps=_steps - In the implementation block
+(char)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(INSpeakableString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INImage *)icon;
-(id)_dictionaryRepresentation;
-(NSArray *)steps;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INSpeakableString *)descriptiveText;
-(INSpeakableString *)voiceCommand;
-(id)initWithName:(id)arg1 voiceCommand:(id)arg2 icon:(id)arg3 descriptiveText:(id)arg4 steps:(id)arg5 ;
@end

