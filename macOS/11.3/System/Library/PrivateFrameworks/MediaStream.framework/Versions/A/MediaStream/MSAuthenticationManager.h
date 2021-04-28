/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Versions/A/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MSAlertManager, ACAccountStore;

@interface MSAuthenticationManager : NSObject {

	int _state;
	MSAlertManager* _alertManager;
	ACAccountStore* _acAccountStore;
	int _bagRefetchCount;
	char _isListeningToKeybagChanges;
	int _keybagChangeNotifyToken;

}

@property (assign,nonatomic) char isListeningToKeybagChanges;                            //@synthesize isListeningToKeybagChanges=_isListeningToKeybagChanges - In the implementation block
@property (assign,nonatomic) int keybagChangeNotifyToken;                                //@synthesize keybagChangeNotifyToken=_keybagChangeNotifyToken - In the implementation block
@property (getter=isWaitingForAuth,nonatomic,readonly) char waitingForAuth; 
+(id)sharedManager;
-(void)dealloc;
-(id)initWithAlertManager:(id)arg1 ;
-(void)_renewCredentialsForAccount:(id)arg1 ;
-(void)didEncounterAuthenticationFailureForPersonID:(id)arg1 ;
-(void)_didReceiveAccountConfigChangedNotification;
-(void)didEncounterAuthenticationSuccessForPersonID:(id)arg1 ;
-(void)rearmAuthenticationAlert;
-(char)isWaitingForAuth;
-(char)isListeningToKeybagChanges;
-(void)setIsListeningToKeybagChanges:(char)arg1 ;
-(int)keybagChangeNotifyToken;
-(void)setKeybagChangeNotifyToken:(int)arg1 ;
@end
