/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSString, NSArray, NSNumber;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {

	NSString* _accountName;
	NSArray* _emailAddresses;
	NSString* _facebookUserID;
	NSNumber* _iCloudUserID;
	unsigned short _numberOfRequests;
	unsigned short _numberOfTurns;
	unsigned short _numberOfChallenges;
	unsigned long long _loginStatus;

}

@property (assign) unsigned long long loginStatus;              //@synthesize loginStatus=_loginStatus - In the implementation block
+(char)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(id)accountName;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(void)setAccountName:(id)arg1 ;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(unsigned short)numberOfRequests;
-(unsigned long long)loginStatus;
-(char)isUnderage;
-(id)minimalInternal;
-(char)isLocalPlayer;
-(char)isDefaultNickname;
-(void)setDefaultNickname:(char)arg1 ;
-(char)isDefaultPrivacyVisibility;
-(void)setDefaultPrivacyVisibility:(char)arg1 ;
-(void)setUnderage:(char)arg1 ;
-(unsigned short)numberOfTurns;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(id)facebookUserID;
-(long long)globalFriendListAccess;
-(unsigned short)numberOfChallenges;
-(int)defaultFamiliarity;
-(char)isFriend;
-(void)setLoginStatus:(unsigned long long)arg1 ;
-(char)isPurpleBuddyAccount;
-(char)isFindable;
-(char)isPhotoPending;
-(void)setGlobalFriendListAccess:(long long)arg1 ;
-(void)setFacebookUserID:(id)arg1 ;
-(void)setPurpleBuddyAccount:(char)arg1 ;
-(void)setFindable:(char)arg1 ;
-(void)setPhotoPending:(char)arg1 ;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
@end

