/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class NSMutableString, SMWelcomeController, SMMigrationCustomizeViewController;

@interface SMCustomizeDataController : NSViewController {

	char _isCustomizationReady;
	char _startedObserving;
	NSMutableString* _paneStory;
	SMWelcomeController* _parentController;
	unsigned long long _paneID;
	SMMigrationCustomizeViewController* _customizeViewController;

}

@property (retain) SMWelcomeController * parentController;                                    //@synthesize parentController=_parentController - In the implementation block
@property (assign) unsigned long long paneID;                                                 //@synthesize paneID=_paneID - In the implementation block
@property (retain) SMMigrationCustomizeViewController * customizeViewController;              //@synthesize customizeViewController=_customizeViewController - In the implementation block
@property (assign) char isCustomizationReady;                                                 //@synthesize isCustomizationReady=_isCustomizationReady - In the implementation block
@property (assign) char startedObserving;                                                     //@synthesize startedObserving=_startedObserving - In the implementation block
@property (retain) NSMutableString * paneStory;                                               //@synthesize paneStory=_paneStory - In the implementation block
@property (getter=isCollectingPasswords,readonly) char collectingPasswords; 
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)awakeFromNib;
-(void)viewWillAppear;
-(void)viewDidAppear;
-(void)startObserving;
-(void)stopObserving;
-(void)setParentController:(SMWelcomeController *)arg1 ;
-(SMWelcomeController *)parentController;
-(void)setPaneID:(unsigned long long)arg1 ;
-(unsigned long long)paneID;
-(void)setPaneStory:(NSMutableString *)arg1 ;
-(NSMutableString *)paneStory;
-(void)exitingThisPane;
-(char)startedObserving;
-(void)setStartedObserving:(char)arg1 ;
-(void)pressedLeftButton;
-(void)setCustomizeViewController:(SMMigrationCustomizeViewController *)arg1 ;
-(void)startObservingForIsCustomizationReady;
-(void)setupForSystem:(id)arg1 ;
-(SMMigrationCustomizeViewController *)customizeViewController;
-(void)setIsCustomizationReady:(char)arg1 ;
-(void)stopObservingForIsCustomizationReady;
-(id)initWithParentController:(id)arg1 forSystem:(id)arg2 shouldReCustomize:(char)arg3 ;
-(char)canProceed;
-(char)isCollectingPasswords;
-(char)isCustomizationReady;
@end
