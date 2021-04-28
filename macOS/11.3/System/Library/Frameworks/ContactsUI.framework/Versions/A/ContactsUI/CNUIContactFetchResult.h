/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact, CNContainer, NSArray;

@interface CNUIContactFetchResult : NSObject {

	CNContact* _contact;
	CNContainer* _parentConrtainer;
	NSArray* _linkedParentContainers;

}

@property (nonatomic,readonly) CNContact * contact;                           //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContainer * parentConrtainer;                //@synthesize parentConrtainer=_parentConrtainer - In the implementation block
@property (nonatomic,readonly) NSArray * linkedParentContainers;              //@synthesize linkedParentContainers=_linkedParentContainers - In the implementation block
-(id)description;
-(CNContact *)contact;
-(CNContainer *)parentConrtainer;
-(NSArray *)linkedParentContainers;
-(id)initWithContact:(id)arg1 parentContainer:(id)arg2 linkedParentContainers:(id)arg3 ;
@end
