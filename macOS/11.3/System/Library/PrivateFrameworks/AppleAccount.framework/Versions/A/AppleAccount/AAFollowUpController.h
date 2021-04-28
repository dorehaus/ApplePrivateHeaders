/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/Versions/A/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAFollowUpProtocol.h>

@interface AAFollowUpController : NSObject <AAFollowUpProtocol>
-(id)_followupActionUserInfo:(id)arg1 ;
-(char)_shouldPostRenewFollowup:(id)arg1 ;
-(id)followUpItemForIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)_followUpController;
-(void)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pendingFollowUpWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissFollowUpWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_followUpItemForStartUsing:(id)arg1 ;
-(id)_followUpItemForVerifyTerms:(id)arg1 ;
-(id)_followUpItemForRenewCredentials:(id)arg1 ;
-(void)_dismissFollowUpWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pendingFollowUpsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)followUpItemForIdentifier:(id)arg1 ;
-(void)postFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 userInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissFollowUpsForAccount:(id)arg1 identifiers:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

