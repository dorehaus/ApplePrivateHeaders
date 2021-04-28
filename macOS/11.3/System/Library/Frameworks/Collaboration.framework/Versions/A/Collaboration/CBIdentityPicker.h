/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Collaboration.framework/Versions/A/Collaboration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CBIdentityPicker : NSObject {

	id _reserved[2];

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) char allowsMultipleSelection; 
@property (nonatomic,readonly) NSArray * identities; 
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(long long)runModal;
-(NSString *)title;
-(NSArray *)identities;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(id)defaultButtonTitle;
-(void)setDefaultButtonTitle:(id)arg1 ;
-(void)runModalForWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setShowsHiddenIdentities:(char)arg1 ;
-(char)showsHiddenIdentities;
-(void)setShowsLocalUsers:(char)arg1 ;
-(char)showsLocalUsers;
-(void)setShowsLocalGroups:(char)arg1 ;
-(char)showsLocalGroups;
-(void)setShowsNetworkUsers:(char)arg1 ;
-(char)showsNetworkUsers;
-(void)setShowsNetworkGroups:(char)arg1 ;
-(char)showsNetworkGroups;
-(void)setShowsGroups:(char)arg1 ;
-(char)showsGroups;
-(void)setShowsUsers:(char)arg1 ;
-(char)showsUsers;
-(void)setShowsLocalIdentities:(char)arg1 ;
-(char)showsLocalIdentities;
-(void)setShowsSharingOnlyUsers:(char)arg1 ;
-(char)showsSharingOnlyUsers;
-(void)setShowsNetworkIdentities:(char)arg1 ;
-(char)showsNetworkIdentities;
-(void)setShowsNewPersonButton:(char)arg1 ;
-(char)showsNewPersonButton;
-(void)setShowsAddressBook:(char)arg1 ;
-(char)showsAddressBook;
-(void)setShowsAddressBookGroups:(char)arg1 ;
-(char)showsAddressBookGroups;
-(void)setDisabledIdentities:(id)arg1 ;
-(id)disabledIdentities;
-(void)runModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
@end

