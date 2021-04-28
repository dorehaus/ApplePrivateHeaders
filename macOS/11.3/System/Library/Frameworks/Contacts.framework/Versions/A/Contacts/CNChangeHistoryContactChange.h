/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact, NSArray, CNChangeHistoryAnchor, NSNumber;

@interface CNChangeHistoryContactChange : NSObject <NSSecureCoding> {

	NSString* _contactIdentifier;
	long long _changeType;
	CNContact* _contact;
	NSArray* _linkedContactIdentifiers;
	CNChangeHistoryAnchor* _changeAnchor;
	NSNumber* _changeID;
	NSString* _externalID;
	NSNumber* _imagesChanged;
	NSString* _externalURI;
	NSString* _externalModificationTag;

}

@property (assign,nonatomic) long long changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) CNContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSArray * linkedContactIdentifiers;                  //@synthesize linkedContactIdentifiers=_linkedContactIdentifiers - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * changeAnchor;              //@synthesize changeAnchor=_changeAnchor - In the implementation block
@property (nonatomic,retain) NSNumber * changeID;                               //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,retain) NSString * externalID;                             //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,retain) NSNumber * imagesChanged;                          //@synthesize imagesChanged=_imagesChanged - In the implementation block
@property (nonatomic,retain) NSString * externalURI;                            //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,retain) NSString * externalModificationTag;                //@synthesize externalModificationTag=_externalModificationTag - In the implementation block
@property (nonatomic,readonly) NSString * contactIdentifier;                    //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)contactIdentifier;
-(NSString *)externalModificationTag;
-(NSString *)externalURI;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(CNChangeHistoryAnchor *)changeAnchor;
-(NSNumber *)changeID;
-(NSString *)externalID;
-(void)setChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(void)setChangeID:(NSNumber *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setExternalURI:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5 imagesChanged:(id)arg6 ;
-(NSNumber *)imagesChanged;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 ;
-(NSArray *)linkedContactIdentifiers;
-(void)setLinkedContactIdentifiers:(NSArray *)arg1 ;
-(void)setImagesChanged:(NSNumber *)arg1 ;
@end

