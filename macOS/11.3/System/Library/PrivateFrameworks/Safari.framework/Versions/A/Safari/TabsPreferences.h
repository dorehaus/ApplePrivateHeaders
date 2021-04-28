/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/PreferencesModule.h>

@class NSArray, NSButton, NSView, NSStackView, NSPopUpButton, NSTextField;

@interface TabsPreferences : PreferencesModule {

	NSArray* _finePrintConstraints;
	NSButton* _showIconsInTabsCheckbox;
	char _didAwakeFromNib;
	NSView* _mainContentView;
	NSStackView* _checkBoxStackView;
	NSView* _tabCreationPolicyView;
	NSPopUpButton* _tabCreationPolicyPopUp;
	NSButton* _commandClickMakesTabsCheckbox;
	NSButton* _selectNewTabsCheckbox;
	NSButton* _command1Through9SwitchesTabsCheckbox;
	NSView* _finePrintContainerView;
	NSTextField* _commandClickLabel;
	NSTextField* _commandShiftClickLabel;
	NSTextField* _commandOptionClickLabel;
	NSTextField* _commandOptionShiftClickLabel;
	NSTextField* _openInNewActiveTabLabel;
	NSTextField* _openInNewTabLabel;
	NSTextField* _openInNewActiveWindowLabel;
	NSTextField* _openInNewWindowLabel;

}

@property (assign,nonatomic,__weak) NSView * mainContentView;                                     //@synthesize mainContentView=_mainContentView - In the implementation block
@property (assign,nonatomic,__weak) NSStackView * checkBoxStackView;                              //@synthesize checkBoxStackView=_checkBoxStackView - In the implementation block
@property (assign,nonatomic,__weak) NSView * tabCreationPolicyView;                               //@synthesize tabCreationPolicyView=_tabCreationPolicyView - In the implementation block
@property (assign,nonatomic,__weak) NSPopUpButton * tabCreationPolicyPopUp;                       //@synthesize tabCreationPolicyPopUp=_tabCreationPolicyPopUp - In the implementation block
@property (assign,nonatomic,__weak) NSButton * commandClickMakesTabsCheckbox;                     //@synthesize commandClickMakesTabsCheckbox=_commandClickMakesTabsCheckbox - In the implementation block
@property (assign,nonatomic,__weak) NSButton * selectNewTabsCheckbox;                             //@synthesize selectNewTabsCheckbox=_selectNewTabsCheckbox - In the implementation block
@property (assign,nonatomic,__weak) NSButton * command1Through9SwitchesTabsCheckbox;              //@synthesize command1Through9SwitchesTabsCheckbox=_command1Through9SwitchesTabsCheckbox - In the implementation block
@property (assign,nonatomic,__weak) NSView * finePrintContainerView;                              //@synthesize finePrintContainerView=_finePrintContainerView - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * commandClickLabel;                              //@synthesize commandClickLabel=_commandClickLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * commandShiftClickLabel;                         //@synthesize commandShiftClickLabel=_commandShiftClickLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * commandOptionClickLabel;                        //@synthesize commandOptionClickLabel=_commandOptionClickLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * commandOptionShiftClickLabel;                   //@synthesize commandOptionShiftClickLabel=_commandOptionShiftClickLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * openInNewActiveTabLabel;                        //@synthesize openInNewActiveTabLabel=_openInNewActiveTabLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * openInNewTabLabel;                              //@synthesize openInNewTabLabel=_openInNewTabLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * openInNewActiveWindowLabel;                     //@synthesize openInNewActiveWindowLabel=_openInNewActiveWindowLabel - In the implementation block
@property (assign,nonatomic,__weak) NSTextField * openInNewWindowLabel;                           //@synthesize openInNewWindowLabel=_openInNewWindowLabel - In the implementation block
-(void)awakeFromNib;
-(id)preferencesNibName;
-(id)imageForPreferenceNamed:(id)arg1 ;
-(void)initializeFromDefaults;
-(void)updateViews;
-(id)safariHelpAnchor;
-(NSView *)mainContentView;
-(void)setMainContentView:(NSView *)arg1 ;
-(void)toggleShowIconsInTabs:(id)arg1 ;
-(void)_updatePopUp:(id)arg1 toMatchPreferenceWithKey:(id)arg2 ;
-(void)_updateTabCreationPolicyPopUp;
-(void)takeTabCreationPolicyFrom:(id)arg1 ;
-(void)toggleCommandClickMakesTabs:(id)arg1 ;
-(void)toggleSelectNewTabs:(id)arg1 ;
-(void)toggleCommand1Through9SwitchesTabs:(id)arg1 ;
-(NSStackView *)checkBoxStackView;
-(void)setCheckBoxStackView:(NSStackView *)arg1 ;
-(NSView *)tabCreationPolicyView;
-(void)setTabCreationPolicyView:(NSView *)arg1 ;
-(NSPopUpButton *)tabCreationPolicyPopUp;
-(void)setTabCreationPolicyPopUp:(NSPopUpButton *)arg1 ;
-(NSButton *)commandClickMakesTabsCheckbox;
-(void)setCommandClickMakesTabsCheckbox:(NSButton *)arg1 ;
-(NSButton *)selectNewTabsCheckbox;
-(void)setSelectNewTabsCheckbox:(NSButton *)arg1 ;
-(NSButton *)command1Through9SwitchesTabsCheckbox;
-(void)setCommand1Through9SwitchesTabsCheckbox:(NSButton *)arg1 ;
-(NSView *)finePrintContainerView;
-(void)setFinePrintContainerView:(NSView *)arg1 ;
-(NSTextField *)commandClickLabel;
-(void)setCommandClickLabel:(NSTextField *)arg1 ;
-(NSTextField *)commandShiftClickLabel;
-(void)setCommandShiftClickLabel:(NSTextField *)arg1 ;
-(NSTextField *)commandOptionClickLabel;
-(void)setCommandOptionClickLabel:(NSTextField *)arg1 ;
-(NSTextField *)commandOptionShiftClickLabel;
-(void)setCommandOptionShiftClickLabel:(NSTextField *)arg1 ;
-(NSTextField *)openInNewActiveTabLabel;
-(void)setOpenInNewActiveTabLabel:(NSTextField *)arg1 ;
-(NSTextField *)openInNewTabLabel;
-(void)setOpenInNewTabLabel:(NSTextField *)arg1 ;
-(NSTextField *)openInNewActiveWindowLabel;
-(void)setOpenInNewActiveWindowLabel:(NSTextField *)arg1 ;
-(NSTextField *)openInNewWindowLabel;
-(void)setOpenInNewWindowLabel:(NSTextField *)arg1 ;
@end
