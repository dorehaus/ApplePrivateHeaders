/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CharacterPicker.framework/Versions/A/CharacterPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CharacterPicker/CharacterPicker-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSPopoverDelegate.h>

@protocol CPKEmojiIMViewControllerDelegateNSObject;
@class CPKEmojiIMViewController, CPKEmojiIMPreviewWindow, CPKEmojiIMCategoryView, CPKEmojiIMEmojiListView, CPKEmojiIMContentCoverView, NSDictionary, NSString;

@interface CPKEmojiIMContentView : NSView <NSPopoverDelegate> {

	char _shownInCharacterPicker;
	char _secondaryInitializationDone;
	char _needsReset;
	CPKEmojiIMViewController* _viewController;
	id<CPKEmojiIMViewControllerDelegate><NSObject> _delegate;
	CPKEmojiIMPreviewWindow* _previewWindow;
	/*^block*/id _getWindowInfoBlock;
	CPKEmojiIMCategoryView* _categoryView;
	CPKEmojiIMEmojiListView* _emojiListView;
	CPKEmojiIMContentCoverView* _coverView;
	double _defaultGapContainerAndList;
	NSDictionary* _emojiBarState;

}

@property (assign) CPKEmojiIMViewController * viewController;                            //@synthesize viewController=_viewController - In the implementation block
@property (assign) id<CPKEmojiIMViewControllerDelegate><NSObject> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) CPKEmojiIMPreviewWindow * previewWindow;                              //@synthesize previewWindow=_previewWindow - In the implementation block
@property (nonatomic,copy) id getWindowInfoBlock;                                        //@synthesize getWindowInfoBlock=_getWindowInfoBlock - In the implementation block
@property (assign) CPKEmojiIMCategoryView * categoryView;                                //@synthesize categoryView=_categoryView - In the implementation block
@property (assign) CPKEmojiIMEmojiListView * emojiListView;                              //@synthesize emojiListView=_emojiListView - In the implementation block
@property (assign) CPKEmojiIMContentCoverView * coverView;                               //@synthesize coverView=_coverView - In the implementation block
@property (assign) double defaultGapContainerAndList;                                    //@synthesize defaultGapContainerAndList=_defaultGapContainerAndList - In the implementation block
@property (retain) NSDictionary * emojiBarState;                                         //@synthesize emojiBarState=_emojiBarState - In the implementation block
@property (assign) char shownInCharacterPicker;                                          //@synthesize shownInCharacterPicker=_shownInCharacterPicker - In the implementation block
@property (assign) char secondaryInitializationDone;                                     //@synthesize secondaryInitializationDone=_secondaryInitializationDone - In the implementation block
@property (assign) char needsReset;                                                      //@synthesize needsReset=_needsReset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CPKEmojiIMViewControllerDelegate><NSObject>)delegate;
-(void)setDelegate:(id<CPKEmojiIMViewControllerDelegate><NSObject>)arg1 ;
-(void)reset;
-(void)viewDidMoveToWindow;
-(void)drawRect:(CGRect)arg1 ;
-(void)setViewController:(CPKEmojiIMViewController *)arg1 ;
-(void)touchesEndedWithEvent:(id)arg1 ;
-(CPKEmojiIMViewController *)viewController;
-(id)initWithState:(id)arg1 ;
-(void)setSearchResults:(id)arg1 ;
-(id)getStateInfo;
-(void)setStateInfo:(id)arg1 ;
-(void)setEmojiBarState:(NSDictionary *)arg1 ;
-(void)setGetWindowInfoBlock:(id)arg1 ;
-(void)_secondaryInit;
-(void)setShownInCharacterPicker:(char)arg1 ;
-(void)_handleClickOnCoverView:(id)arg1 ;
-(void)_requestClose:(id)arg1 ;
-(void)_requestShowHideCover:(id)arg1 ;
-(void)_requestShowHideCloseButton:(id)arg1 ;
-(void)_requestExpandCollapseCategory:(id)arg1 ;
-(void)_pullingOutCategory:(id)arg1 ;
-(void)_didCharacterSelected:(id)arg1 ;
-(void)_didScrolledToCategory:(id)arg1 ;
-(void)_needScrollToCategory:(id)arg1 ;
-(void)_showHidePreviewWindow:(id)arg1 ;
-(void)_clickedSearchButton:(id)arg1 ;
-(void)_startFinishCategoryAnimation:(id)arg1 ;
-(void)_willOpenedForSearchingInOtherApp:(id)arg1 ;
-(char)secondaryInitializationDone;
-(void)setSecondaryInitializationDone:(char)arg1 ;
-(void)_initializeDeferredContents;
-(void)setNeedsReset:(char)arg1 ;
-(void)setPreviewWindow:(CPKEmojiIMPreviewWindow *)arg1 ;
-(char)needsReset;
-(void)_myClosePopover:(id)arg1 ;
-(void)_openCharacterPickerWindow;
-(CPKEmojiIMPreviewWindow *)previewWindow;
-(id)getWindowInfoBlock;
-(CPKEmojiIMCategoryView *)categoryView;
-(void)setCategoryView:(CPKEmojiIMCategoryView *)arg1 ;
-(CPKEmojiIMEmojiListView *)emojiListView;
-(void)setEmojiListView:(CPKEmojiIMEmojiListView *)arg1 ;
-(CPKEmojiIMContentCoverView *)coverView;
-(void)setCoverView:(CPKEmojiIMContentCoverView *)arg1 ;
-(double)defaultGapContainerAndList;
-(void)setDefaultGapContainerAndList:(double)arg1 ;
-(NSDictionary *)emojiBarState;
-(char)shownInCharacterPicker;
@end

