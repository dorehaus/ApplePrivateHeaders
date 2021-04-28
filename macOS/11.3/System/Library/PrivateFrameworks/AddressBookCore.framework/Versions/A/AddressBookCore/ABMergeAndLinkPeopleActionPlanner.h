/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ABMergeAndLinkPeopleActionPlanner : NSObject {

	NSArray* _people;

}

@property (readonly) int plannedActions; 
-(void)dealloc;
-(id)peopleByStoreURL;
-(char)thereArePeopleInMoreThanOneAccount:(id)arg1 ;
-(char)anyAccountHasMoreThanOneWritablePerson:(id)arg1 ;
-(id)initWithPeople:(id)arg1 ;
-(int)plannedActions;
-(char)anyPersonIsReadOnly;
-(id)menuTitleForPlannedActions:(int)arg1 ;
@end
