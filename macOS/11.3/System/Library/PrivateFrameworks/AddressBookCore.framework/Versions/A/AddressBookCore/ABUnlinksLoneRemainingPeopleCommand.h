/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABBookCommand.h>

@protocol ABLinkingInfoDataSource;
@class NSArray;

@interface ABUnlinksLoneRemainingPeopleCommand : ABBookCommand {

	NSArray* _linkIds;
	id<ABLinkingInfoDataSource> _adapter;

}
+(id)commandWithLinkIds:(id)arg1 adapter:(id)arg2 ;
-(void)dealloc;
-(void)execute;
-(id)initWithLinkIds:(id)arg1 adapter:(id)arg2 ;
-(id)remainingPeople;
-(id)peopleFilteredForNoRemainingLinkedPeople:(id)arg1 ;
-(void)unlinkPeople:(id)arg1 ;
@end
