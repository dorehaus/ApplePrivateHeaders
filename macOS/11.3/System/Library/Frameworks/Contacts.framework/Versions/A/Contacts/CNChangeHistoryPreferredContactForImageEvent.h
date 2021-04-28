/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent {

	CNContact* _preferredContact;
	CNContact* _unifiedContact;

}

@property (nonatomic,readonly) CNContact * preferredContact;              //@synthesize preferredContact=_preferredContact - In the implementation block
@property (nonatomic,readonly) CNContact * unifiedContact;                //@synthesize unifiedContact=_unifiedContact - In the implementation block
+(char)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(id)initWithPreferredContact:(id)arg1 unifiedContact:(id)arg2 ;
-(CNContact *)preferredContact;
-(CNContact *)unifiedContact;
@end

