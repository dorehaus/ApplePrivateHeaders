/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionListConsumer.h>
#import <libobjc.A.dylib/CNUIUserActionListConsumerDelegate.h>
#import <libobjc.A.dylib/NSTouchBarProvider.h>

@protocol CNUIUserActionContext;
@class NSArray, CNContact, NSTouchBar, NSStackView, NSPopoverTouchBarItem, CNUIUserActionListDataSource, NSDictionary, NSMutableDictionary, NSButton, NSString;

@interface CNUserActionTouchBar : NSObject <CNUIUserActionListConsumer, CNUIUserActionListConsumerDelegate, NSTouchBarProvider> {

	unsigned long long _displayStyle;
	unsigned long long _titleOptions;
	NSArray* _actionTypes;
	CNContact* _contact;
	NSTouchBar* _touchBar;
	NSStackView* _userActionStackView;
	NSPopoverTouchBarItem* _userActionPopoverTouchBarItem;
	NSStackView* _allActionsPopoverStackView;
	id<CNUIUserActionContext> _userActionContext;
	CNUIUserActionListDataSource* _userActionDataSource;
	NSDictionary* _buttonsByActionType;
	NSMutableDictionary* _modelsByActionType;
	NSArray* _tokens;
	NSButton* _actionTypeTextButton;

}

@property (retain) NSTouchBar * touchBar;                                              //@synthesize touchBar=_touchBar - In the implementation block
@property (retain) NSStackView * userActionStackView;                                  //@synthesize userActionStackView=_userActionStackView - In the implementation block
@property (retain) NSPopoverTouchBarItem * userActionPopoverTouchBarItem;              //@synthesize userActionPopoverTouchBarItem=_userActionPopoverTouchBarItem - In the implementation block
@property (retain) NSStackView * allActionsPopoverStackView;                           //@synthesize allActionsPopoverStackView=_allActionsPopoverStackView - In the implementation block
@property (retain) id<CNUIUserActionContext> userActionContext;                        //@synthesize userActionContext=_userActionContext - In the implementation block
@property (retain) CNUIUserActionListDataSource * userActionDataSource;                //@synthesize userActionDataSource=_userActionDataSource - In the implementation block
@property (retain) NSDictionary * buttonsByActionType;                                 //@synthesize buttonsByActionType=_buttonsByActionType - In the implementation block
@property (retain) NSMutableDictionary * modelsByActionType;                           //@synthesize modelsByActionType=_modelsByActionType - In the implementation block
@property (retain) NSArray * tokens;                                                   //@synthesize tokens=_tokens - In the implementation block
@property (retain) NSButton * actionTypeTextButton;                                    //@synthesize actionTypeTextButton=_actionTypeTextButton - In the implementation block
@property (assign,nonatomic) unsigned long long displayStyle;                          //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign,nonatomic) unsigned long long titleOptions;                          //@synthesize titleOptions=_titleOptions - In the implementation block
@property (nonatomic,retain) NSArray * actionTypes;                                    //@synthesize actionTypes=_actionTypes - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                      //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)displayNameFromContact:(id)arg1 style:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(id)dataSource;
-(void)setTouchBar:(NSTouchBar *)arg1 ;
-(NSTouchBar *)touchBar;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSArray *)tokens;
-(unsigned long long)displayStyle;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(void)setTokens:(NSArray *)arg1 ;
-(void)updateTouchBar;
-(id)initWithUserActionListDataSource:(id)arg1 ;
-(id)createUserActionStackView;
-(id)createUserActionPopoverTouchBarItem;
-(void)userActionDefaultButtonSelected:(id)arg1 ;
-(id)createHoldGestureRecognizer;
-(void)setActionTypeTextButton:(NSButton *)arg1 ;
-(void)setButtonsByActionType:(NSDictionary *)arg1 ;
-(void)touchBarButtonFrameChanged:(id)arg1 ;
-(NSArray *)actionTypes;
-(NSDictionary *)buttonsByActionType;
-(NSStackView *)allActionsPopoverStackView;
-(NSStackView *)userActionStackView;
-(void)userActionDefaultButtonHeld:(id)arg1 ;
-(void)_rebuildTouchBar;
-(void)setUserActionStackView:(NSStackView *)arg1 ;
-(NSPopoverTouchBarItem *)userActionPopoverTouchBarItem;
-(id)updateTouchBarForActionType:(id)arg1 ;
-(void)updateTouchBarTitle;
-(NSButton *)actionTypeTextButton;
-(unsigned long long)titleOptions;
-(char)_shouldUseShorterTitleForButton:(id)arg1 ;
-(NSMutableDictionary *)modelsByActionType;
-(void)userActionPopoverButtonSelected:(id)arg1 ;
-(void)executeUserActionButton:(id)arg1 preferDefault:(char)arg2 ;
-(void)consumer:(id)arg1 didSelectAction:(id)arg2 ;
-(void)updateAllUserActionsViewWithModel:(id)arg1 ;
-(CNUIUserActionListDataSource *)userActionDataSource;
-(id<CNUIUserActionContext>)userActionContext;
-(void)setTitleOptions:(unsigned long long)arg1 ;
-(void)setActionTypes:(NSArray *)arg1 ;
-(void)setABPerson:(id)arg1 ;
-(void)disableUserActionButtons;
-(void)setUserActionPopoverTouchBarItem:(NSPopoverTouchBarItem *)arg1 ;
-(void)setAllActionsPopoverStackView:(NSStackView *)arg1 ;
-(void)setUserActionContext:(id<CNUIUserActionContext>)arg1 ;
-(void)setUserActionDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(void)setModelsByActionType:(NSMutableDictionary *)arg1 ;
@end
