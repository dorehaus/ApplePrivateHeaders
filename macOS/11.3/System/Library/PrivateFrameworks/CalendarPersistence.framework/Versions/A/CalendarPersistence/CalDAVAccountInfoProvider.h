/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalDAVBasicAccountInfoProvider.h>

@class NSURL, NSString, NSManagedObjectID, CalDAVPrincipalSearchPropertySet;

@interface CalDAVAccountInfoProvider : CalDAVBasicAccountInfoProvider {

	NSURL* _overrideBaseURL;
	char _useKerberos;
	char _isDelegate;
	char _isManagedAttachmentSupported;
	NSString* _fullName;
	NSString* _mainPrincipalUID;
	NSManagedObjectID* _mainPrincipalID;
	NSString* _accountCollectionSetName;
	CalDAVPrincipalSearchPropertySet* _accountSearchPropertySet;

}

@property (retain) NSURL * overrideBaseURL;                                                  //@synthesize overrideBaseURL=_overrideBaseURL - In the implementation block
@property (assign) char useKerberos;                                                         //@synthesize useKerberos=_useKerberos - In the implementation block
@property (assign) char isDelegate;                                                          //@synthesize isDelegate=_isDelegate - In the implementation block
@property (assign) char isManagedAttachmentSupported;                                        //@synthesize isManagedAttachmentSupported=_isManagedAttachmentSupported - In the implementation block
@property (retain) NSString * fullName;                                                      //@synthesize fullName=_fullName - In the implementation block
@property (retain) NSManagedObjectID * mainPrincipalID;                                      //@synthesize mainPrincipalID=_mainPrincipalID - In the implementation block
@property (retain) NSString * mainPrincipalUID;                                              //@synthesize mainPrincipalUID=_mainPrincipalUID - In the implementation block
@property (retain) NSString * accountCollectionSetName;                                      //@synthesize accountCollectionSetName=_accountCollectionSetName - In the implementation block
@property (retain) CalDAVPrincipalSearchPropertySet * accountSearchPropertySet;              //@synthesize accountSearchPropertySet=_accountSearchPropertySet - In the implementation block
+(id)providerFromPrincipal:(id)arg1 ;
+(id)searchPropertySetForAccount:(id)arg1 ;
-(NSString *)fullName;
-(void)setFullName:(NSString *)arg1 ;
-(char)isDelegate;
-(void)setIsDelegate:(char)arg1 ;
-(id)principalURL;
-(char)useKerberos;
-(void)setUseKerberos:(char)arg1 ;
-(id)additionalHeaderValues;
-(id)absoluteURLForPath:(id)arg1 ;
-(NSURL *)overrideBaseURL;
-(void)setOverrideBaseURL:(NSURL *)arg1 ;
-(void)setMainPrincipalUID:(NSString *)arg1 ;
-(void)updateAccountPropertiesFromPrincipal:(id)arg1 ;
-(void)setMainPrincipalID:(NSManagedObjectID *)arg1 ;
-(void)setAccountCollectionSetName:(NSString *)arg1 ;
-(void)setAccountSearchPropertySet:(CalDAVPrincipalSearchPropertySet *)arg1 ;
-(char)isManagedAttachmentSupported;
-(NSString *)mainPrincipalUID;
-(NSString *)accountCollectionSetName;
-(CalDAVPrincipalSearchPropertySet *)accountSearchPropertySet;
-(void)setIsManagedAttachmentSupported:(char)arg1 ;
-(id)absoluteURLForPath:(id)arg1 overrideBaseURL:(id)arg2 ;
-(char)isEqualToProvider:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)handleTrustChallenge:(id)arg1 ;
-(char)handleShouldUseCredentialStorage;
-(char)handleAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(char)shouldTurnModalOnBadPassword;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(void)noteCollectionSetNameChange:(id)arg1 ;
-(void)noteSearchPropertySetChange:(id)arg1 ;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(NSManagedObjectID *)mainPrincipalID;
@end

