/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSWindow, NSMenu, NSPopUpButton, IMAccount;

@interface SOAccountValidationSheetController : NSObject {

	NSWindow* _window;
	NSMenu* _regionsMenu;
	NSPopUpButton* _locationsPopup;
	IMAccount* _account;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSWindow * window;                           //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) NSMenu * regionsMenu;                        //@synthesize regionsMenu=_regionsMenu - In the implementation block
@property (nonatomic,retain) NSPopUpButton * locationsPopup;              //@synthesize locationsPopup=_locationsPopup - In the implementation block
@property (assign,nonatomic,__weak) IMAccount * account;                  //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) id completionBlock;                            //@synthesize completionBlock=_completionBlock - In the implementation block
-(NSWindow *)window;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(void)setWindow:(NSWindow *)arg1 ;
-(IMAccount *)account;
-(void)setAccount:(IMAccount *)arg1 ;
-(void)_regionListFinishedLoading:(id)arg1 ;
-(void)_ensureValidAccountProfile;
-(void)ensureValidiMessageAccountProfileWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)ensureValidFaceTimeAccountProfileWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSMenu *)regionsMenu;
-(void)setRegionsMenu:(NSMenu *)arg1 ;
-(NSPopUpButton *)locationsPopup;
-(void)setLocationsPopup:(NSPopUpButton *)arg1 ;
@end

