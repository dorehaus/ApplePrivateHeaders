/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNSuggested.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SGRecordId, NSString, CNLabelValuePair, NSDictionary, NSSet;

@interface CNLabeledValue : NSObject <CNSuggested, NSCopying, NSSecureCoding> {

	CNLabelValuePair* _labelValuePair;
	NSString* _identifier;
	NSString* _storeIdentifier;
	NSDictionary* _storeInfo;
	NSSet* _linkedIdentifiers;
	char _isValueMutable;
	int _iOSLegacyIdentifier;

}

@property (getter=isSuggested,nonatomic,readonly) char suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@property (nonatomic,readonly) NSString * suggestionFoundInBundleId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) CNLabelValuePair * labelValuePair;                           //@synthesize labelValuePair=_labelValuePair - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                            //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * linkedIdentifiers;                             //@synthesize linkedIdentifiers=_linkedIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * storeInfo;                              //@synthesize storeInfo=_storeInfo - In the implementation block
@property (assign,nonatomic) int iOSLegacyIdentifier;                             //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * label; 
@property (copy,readonly) id<NSCopying><NSSecureCoding> value; 
+(char)supportsSecureCoding;
+(id)localizedStringForLabel:(id)arg1 ;
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
+(id)entryWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
+(/*^block*/id)testMatchingIdentifier:(id)arg1 ;
+(id)entryForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)emptyEntries;
+(id)labelForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)valueForIdentifier:(id)arg1 inArray:(id)arg2 ;
+(char)isArrayOfEntries:(id)arg1 equalToArrayOfEntriesIgnoringIdentifiers:(id)arg2 ;
+(id)entriesByUnifyingEntryArrays:(id)arg1 forProperty:(id)arg2 ;
+(id)allValuesInArray:(id)arg1 ;
+(id)labeledValueWithIdentifier:(id)arg1 inArray:(id)arg2 ;
+(id)firstLabeledValueWithValue:(id)arg1 inArray:(id)arg2 ;
+(/*^block*/id)Value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id<NSCopying><NSSecureCoding>)value;
-(NSString *)label;
-(id)labeledValueBySettingValue:(id)arg1 ;
-(id)labeledValueBySettingLabel:(id)arg1 ;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
-(int)iOSLegacyIdentifier;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(CNLabelValuePair *)labelValuePair;
-(id)labeledValueBySettingLabel:(id)arg1 value:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(char)isEqualIgnoringIdentifiers:(id)arg1 ;
-(NSString *)storeIdentifier;
-(NSDictionary *)storeInfo;
-(id)primitiveInitWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3 ;
-(NSSet *)linkedIdentifiers;
-(void)setLinkedIdentifiers:(NSSet *)arg1 ;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(void)addStoreInfo:(id)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(char)isSuggested;
-(SGRecordId *)suggestionRecordId;
-(NSString *)suggestionFoundInBundleId;
-(id)valueOrigin;
@end

