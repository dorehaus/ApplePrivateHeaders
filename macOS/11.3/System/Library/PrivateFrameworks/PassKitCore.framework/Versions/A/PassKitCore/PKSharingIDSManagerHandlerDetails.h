/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKFamilyMember, PKAccountUser;

@interface PKSharingIDSManagerHandlerDetails : NSObject {

	PKFamilyMember* _familyMember;
	PKAccountUser* _accountUser;

}

@property (nonatomic,readonly) PKFamilyMember * familyMember;              //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,readonly) PKAccountUser * accountUser;                //@synthesize accountUser=_accountUser - In the implementation block
-(id)description;
-(id)primaryAppleID;
-(id)initWithFamilyMember:(id)arg1 ;
-(PKFamilyMember *)familyMember;
-(PKAccountUser *)accountUser;
-(id)addressableHandles;
-(id)initWithFamilyMember:(id)arg1 accountUser:(id)arg2 ;
@end

