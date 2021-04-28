/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INSpeakableString;

@interface INWorkoutAssociatedItem : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _itemLabel;
	NSString* _itemID;
	long long _contentRating;
	INSpeakableString* _itemName;

}

@property (readonly) long long itemLabel;                            //@synthesize itemLabel=_itemLabel - In the implementation block
@property (copy,readonly) NSString * itemID;                         //@synthesize itemID=_itemID - In the implementation block
@property (readonly) long long contentRating;                        //@synthesize contentRating=_contentRating - In the implementation block
@property (copy,readonly) INSpeakableString * itemName;              //@synthesize itemName=_itemName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemID;
-(INSpeakableString *)itemName;
-(id)_dictionaryRepresentation;
-(long long)contentRating;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithItemLabel:(long long)arg1 itemID:(id)arg2 contentRating:(long long)arg3 itemName:(id)arg4 ;
-(long long)itemLabel;
@end
