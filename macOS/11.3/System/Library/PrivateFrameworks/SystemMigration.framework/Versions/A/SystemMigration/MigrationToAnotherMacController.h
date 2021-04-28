/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSMutableString, NSTextField, NSString, NSNumber, SMWelcomeController, SMMigrationFrom_Client, NSAlert;

@interface MigrationToAnotherMacController : NSViewController {

	char _gearShouldAnimate;
	char _showStatus;
	char _pairAccepted;
	char _serving;
	NSMutableString* _paneStory;
	NSTextField* _descriptionLabel;
	NSTextField* _passcodeField;
	NSString* _selectedTabIdentifier;
	NSNumber* _passcode;
	NSString* _handoffPeerName;
	NSString* _currentWirelessNetworkName;
	NSString* _currentWirelessBSSName;
	SMWelcomeController* _parentController;
	unsigned long long _paneID;
	SMMigrationFrom_Client* _fromClient;
	NSAlert* _serverFailureAlert;

}

@property (retain) SMWelcomeController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (assign) unsigned long long paneID;                           //@synthesize paneID=_paneID - In the implementation block
@property (retain) SMMigrationFrom_Client * fromClient;                 //@synthesize fromClient=_fromClient - In the implementation block
@property (retain) NSAlert * serverFailureAlert;                        //@synthesize serverFailureAlert=_serverFailureAlert - In the implementation block
@property (retain) NSString * currentWirelessNetworkName;               //@synthesize currentWirelessNetworkName=_currentWirelessNetworkName - In the implementation block
@property (retain) NSMutableString * paneStory;                         //@synthesize paneStory=_paneStory - In the implementation block
@property (__weak) NSTextField * descriptionLabel;                      //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (__weak) NSTextField * passcodeField;                         //@synthesize passcodeField=_passcodeField - In the implementation block
@property (assign) char gearShouldAnimate;                              //@synthesize gearShouldAnimate=_gearShouldAnimate - In the implementation block
@property (assign) char showStatus;                                     //@synthesize showStatus=_showStatus - In the implementation block
@property (assign) char pairAccepted;                                   //@synthesize pairAccepted=_pairAccepted - In the implementation block
@property (retain) NSString * selectedTabIdentifier;                    //@synthesize selectedTabIdentifier=_selectedTabIdentifier - In the implementation block
@property (readonly) NSString * statusText; 
@property (retain) NSNumber * passcode;                                 //@synthesize passcode=_passcode - In the implementation block
@property (assign) char serving;                                        //@synthesize serving=_serving - In the implementation block
@property (retain) NSString * handoffPeerName;                          //@synthesize handoffPeerName=_handoffPeerName - In the implementation block
@property (readonly) char shouldShowWirelessNetworkName; 
@property (readonly) NSString * currentWirelessBSSName;                 //@synthesize currentWirelessBSSName=_currentWirelessBSSName - In the implementation block
+(id)keyPathsForValuesAffectingStatusText;
+(id)keyPathsForValuesAffectingShouldShowWirelessNetworkName;
+(id)localizedPasscode:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSString *)statusText;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(void)startObserving;
-(void)stopObserving;
-(void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1 ;
-(NSNumber *)passcode;
-(void)setPasscode:(NSNumber *)arg1 ;
-(void)setDescriptionLabel:(NSTextField *)arg1 ;
-(NSTextField *)descriptionLabel;
-(void)setParentController:(SMWelcomeController *)arg1 ;
-(SMWelcomeController *)parentController;
-(char)showStatus;
-(NSTextField *)passcodeField;
-(void)setPasscodeField:(NSTextField *)arg1 ;
-(id)initWithParentController:(id)arg1 ;
-(void)setPaneID:(unsigned long long)arg1 ;
-(unsigned long long)paneID;
-(void)setPaneStory:(NSMutableString *)arg1 ;
-(NSMutableString *)paneStory;
-(NSString *)currentWirelessNetworkName;
-(char)shouldShowWirelessNetworkName;
-(void)setCurrentWirelessNetworkName:(NSString *)arg1 ;
-(NSString *)currentWirelessBSSName;
-(void)exitingThisPane;
-(void)pressedRightButton;
-(void)setSelectedTabIdentifier:(NSString *)arg1 ;
-(SMMigrationFrom_Client *)fromClient;
-(void)switchUI:(char)arg1 ;
-(char)pairAccepted;
-(void)setFromClient:(SMMigrationFrom_Client *)arg1 ;
-(void)doBindings;
-(char)serving;
-(void)showServerAlert;
-(void)setShowStatus:(char)arg1 ;
-(void)setGearShouldAnimate:(char)arg1 ;
-(NSString *)handoffPeerName;
-(void)dismissServerAlert;
-(void)setServerFailureAlert:(NSAlert *)arg1 ;
-(NSAlert *)serverFailureAlert;
-(void)updateCurrentWiFiNetworkName;
-(NSString *)selectedTabIdentifier;
-(void)pressedRejectPasscode:(id)arg1 ;
-(void)undoBindings;
-(void)pressedAcceptPasscode:(id)arg1 ;
-(char)gearShouldAnimate;
-(void)setPairAccepted:(char)arg1 ;
-(void)setServing:(char)arg1 ;
-(void)setHandoffPeerName:(NSString *)arg1 ;
@end

