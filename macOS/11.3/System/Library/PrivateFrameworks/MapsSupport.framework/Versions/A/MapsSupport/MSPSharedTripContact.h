/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact, CNLabeledValue;

@interface MSPSharedTripContact : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSString* _originalHandle;
	CNContact* _contact;
	CNLabeledValue* _labeledValue;

}

@property (nonatomic,readonly) char isPhoneNumber; 
@property (nonatomic,retain) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNLabeledValue * labeledValue;              //@synthesize labeledValue=_labeledValue - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) NSString * handleForIDS; 
@property (nonatomic,readonly) NSString * displayName; 
+(char)supportsSecureCoding;
+(id)_propertiesForFetching;
+(id)contactsFromCNContact:(id)arg1 matchingHandles:(id)arg2 ;
+(id)contactsFromHandles:(id)arg1 ;
+(id)contactsFromCNContact:(id)arg1 ;
+(id)contactsFromIDSHandles:(id)arg1 ;
+(void)setAdditionalKeyDescriptorsForContactFetching:(id)arg1 ;
+(id)contactsFromCNContact:(id)arg1 andIdentifiers:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSString *)displayName;
-(id)_stringValue;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setLabeledValue:(CNLabeledValue *)arg1 ;
-(CNLabeledValue *)labeledValue;
-(char)isPhoneNumber;
-(id)initWithContactHandle:(id)arg1 ;
-(id)initWithContact:(id)arg1 handle:(id)arg2 ;
-(void)_populateFromContactUsingHandle:(id)arg1 ;
-(id)initWithContact:(id)arg1 labeledValue:(id)arg2 ;
-(NSString *)handleForIDS;
@end

