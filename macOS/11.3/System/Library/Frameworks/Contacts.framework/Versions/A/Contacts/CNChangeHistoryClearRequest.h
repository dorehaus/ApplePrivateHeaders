/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNChangeHistoryAnchor, NSArray;

@interface CNChangeHistoryClearRequest : NSObject <NSSecureCoding> {

	NSString* _clientIdentifier;
	CNChangeHistoryAnchor* _toChangeAnchor;
	NSArray* _contactChangeIDs;
	NSArray* _groupChangeIDs;
	NSString* _containerIdentifier;

}

@property (nonatomic,retain) NSArray * contactChangeIDs;                          //@synthesize contactChangeIDs=_contactChangeIDs - In the implementation block
@property (nonatomic,retain) NSArray * groupChangeIDs;                            //@synthesize groupChangeIDs=_groupChangeIDs - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                      //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * clientIdentifier;                       //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * toChangeAnchor;              //@synthesize toChangeAnchor=_toChangeAnchor - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)initWithClientIdentifier:(id)arg1 ;
-(CNChangeHistoryAnchor *)toChangeAnchor;
-(NSArray *)contactChangeIDs;
-(NSArray *)groupChangeIDs;
-(void)setToChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(void)setContactChangeIDs:(NSArray *)arg1 ;
-(void)setGroupChangeIDs:(NSArray *)arg1 ;
@end
