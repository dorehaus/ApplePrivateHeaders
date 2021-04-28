/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSURL, NSString;

@interface GKAuthenticateResponse : GKInternalRepresentation {

	char _loginDisabled;
	char _passwordChangeRequired;
	char _shouldShowLinkAccountsUI;
	char _useNewDashboardUI;
	char _accessPointIsOnAutomatically;
	char _accessPointShowHighlights;
	GKPlayerCredential* _credential;
	NSURL* _passwordChangeURL;
	NSString* _alertTitle;
	NSString* _alertMessage;
	NSString* _lastPersonalizationVersionDisplayed;
	unsigned long long _lastPrivacyNoticeVersionDisplayed;
	NSString* _lastProfilePrivacyVersionDisplayed;
	long long _accessPointLocation;

}

@property (nonatomic,retain) GKPlayerCredential * credential;                                   //@synthesize credential=_credential - In the implementation block
@property (assign,nonatomic) char loginDisabled;                                                //@synthesize loginDisabled=_loginDisabled - In the implementation block
@property (assign,nonatomic) char passwordChangeRequired;                                       //@synthesize passwordChangeRequired=_passwordChangeRequired - In the implementation block
@property (nonatomic,retain) NSURL * passwordChangeURL;                                         //@synthesize passwordChangeURL=_passwordChangeURL - In the implementation block
@property (assign,nonatomic) char shouldShowLinkAccountsUI;                                     //@synthesize shouldShowLinkAccountsUI=_shouldShowLinkAccountsUI - In the implementation block
@property (nonatomic,retain) NSString * alertTitle;                                             //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,retain) NSString * alertMessage;                                           //@synthesize alertMessage=_alertMessage - In the implementation block
@property (nonatomic,retain) NSString * lastPersonalizationVersionDisplayed;                    //@synthesize lastPersonalizationVersionDisplayed=_lastPersonalizationVersionDisplayed - In the implementation block
@property (assign,nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;              //@synthesize lastPrivacyNoticeVersionDisplayed=_lastPrivacyNoticeVersionDisplayed - In the implementation block
@property (nonatomic,retain) NSString * lastProfilePrivacyVersionDisplayed;                     //@synthesize lastProfilePrivacyVersionDisplayed=_lastProfilePrivacyVersionDisplayed - In the implementation block
@property (assign,nonatomic) char useNewDashboardUI;                                            //@synthesize useNewDashboardUI=_useNewDashboardUI - In the implementation block
@property (assign,nonatomic) char accessPointIsOnAutomatically;                                 //@synthesize accessPointIsOnAutomatically=_accessPointIsOnAutomatically - In the implementation block
@property (assign,nonatomic) char accessPointShowHighlights;                                    //@synthesize accessPointShowHighlights=_accessPointShowHighlights - In the implementation block
@property (assign,nonatomic) long long accessPointLocation;                                     //@synthesize accessPointLocation=_accessPointLocation - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)init;
-(GKPlayerCredential *)credential;
-(void)setCredential:(GKPlayerCredential *)arg1 ;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
-(NSString *)alertTitle;
-(void)setAlertTitle:(NSString *)arg1 ;
-(char)accessPointIsOnAutomatically;
-(void)setAccessPointIsOnAutomatically:(char)arg1 ;
-(char)accessPointShowHighlights;
-(void)setAccessPointShowHighlights:(char)arg1 ;
-(long long)accessPointLocation;
-(void)setAccessPointLocation:(long long)arg1 ;
-(char)loginDisabled;
-(void)setUseNewDashboardUI:(char)arg1 ;
-(void)setLoginDisabled:(char)arg1 ;
-(char)passwordChangeRequired;
-(void)setPasswordChangeRequired:(char)arg1 ;
-(NSURL *)passwordChangeURL;
-(void)setPasswordChangeURL:(NSURL *)arg1 ;
-(char)shouldShowLinkAccountsUI;
-(void)setShouldShowLinkAccountsUI:(char)arg1 ;
-(NSString *)lastPersonalizationVersionDisplayed;
-(void)setLastPersonalizationVersionDisplayed:(NSString *)arg1 ;
-(unsigned long long)lastPrivacyNoticeVersionDisplayed;
-(void)setLastPrivacyNoticeVersionDisplayed:(unsigned long long)arg1 ;
-(NSString *)lastProfilePrivacyVersionDisplayed;
-(void)setLastProfilePrivacyVersionDisplayed:(NSString *)arg1 ;
-(char)useNewDashboardUI;
@end

