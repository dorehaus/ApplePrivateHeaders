/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNLSApplicationWorkspace, CNUIInteractionDonor;
@class CNContactStore;

@interface CNUIUserActivityManager : NSObject {

	CNContactStore* _contactStore;
	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNUIInteractionDonor> _interactionDonor;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNLSApplicationWorkspace> applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,readonly) id<CNUIInteractionDonor> interactionDonor;                      //@synthesize interactionDonor=_interactionDonor - In the implementation block
+(id)log;
+(id)descriptorForRequiredKeys;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 interactionDonor:(id)arg3 ;
-(id<CNUIInteractionDonor>)interactionDonor;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(void)publishRequestToCreateContact:(id)arg1 ;
-(void)publishRequestToEditContact:(id)arg1 ;
-(id)makeActivityAdvertisingViewingOfContact:(id)arg1 ;
-(void)updateUserActivityState:(id)arg1 withContentsOfContact:(id)arg2 ;
-(id)makeActivityAdvertisingViewingList;
@end

