/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Assistant/Plugins/Contacts.assistantBundle/Contents/MacOS/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAABPersonSearch.h>
#import <libobjc.A.dylib/CNAssistantCommand.h>

@class CNContactStore, NSString;

@interface CNAssistantCommandSearchPerson : SAABPersonSearch <CNAssistantCommand> {

	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactStore * contactStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)meContact:(id*)arg1 ;
-(id)searchLocal:(id*)arg1 ;
-(id)searchRemote:(id*)arg1 ;
-(id)searchByName:(id*)arg1 ;
-(id)validate;
-(id)perform;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

