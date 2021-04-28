/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABAccount, ABGroup, NSString;

@interface ABGroupBrowsingContext : NSObject {

	ABAccount* _account;
	ABGroup* _group;
	NSString* _groupLabel;
	char _canCreateGroups;

}

@property (retain,readonly) ABAccount * account;              //@synthesize account=_account - In the implementation block
@property (retain,readonly) ABGroup * group;                  //@synthesize group=_group - In the implementation block
@property (copy,readonly) NSString * groupLabel;              //@synthesize groupLabel=_groupLabel - In the implementation block
@property (readonly) char canCreateGroups;                    //@synthesize canCreateGroups=_canCreateGroups - In the implementation block
-(void)dealloc;
-(ABGroup *)group;
-(ABAccount *)account;
-(char)canCreateGroups;
-(id)initWithAccount:(id)arg1 group:(id)arg2 groupLabel:(id)arg3 canCreateGroups:(char)arg4 ;
-(NSString *)groupLabel;
@end
