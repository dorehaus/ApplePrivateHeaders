/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSImmediateActionAnimationController.h>
#import <libobjc.A.dylib/NSMenuItem.h>

@protocol NSMenuItem <NSObject,NSCopying,NSCoding,NSValidatedUserInterfaceItem>
@required
+(id)separatorItem;
+(char)usesUserKeyEquivalents;
+(void)setUsesUserKeyEquivalents:(char)arg1;
-(long long)state;
-(void)setTarget:(id)arg1;
-(id)target;
-(void)setEnabled:(char)arg1;
-(char)isEnabled;
-(SEL)action;
-(void)setState:(long long)arg1;
-(id)keyEquivalent;
-(unsigned long long)keyEquivalentModifierMask;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;
-(void)setAttributedTitle:(id)arg1;
-(void)setImage:(id)arg1;
-(void)setTag:(long long)arg1;
-(void)setRepresentedObject:(id)arg1;
-(void)setSubmenu:(id)arg1;
-(void)setAction:(SEL)arg1;
-(void)setTitle:(id)arg1;
-(id)menu;
-(id)attributedTitle;
-(id)title;
-(long long)tag;
-(char)hasSubmenu;
-(id)image;
-(id)toolTip;
-(void)setToolTip:(id)arg1;
-(id)submenu;
-(char)isAlternate;
-(char)isSeparatorItem;
-(void)setKeyEquivalentModifierMask:(unsigned long long)arg1;
-(void)setAlternate:(char)arg1;
-(void)setKeyEquivalent:(id)arg1;
-(long long)indentationLevel;
-(void)setMenu:(id)arg1;
-(id)representedObject;
-(void)setTitleWithMnemonic:(id)arg1;
-(id)mnemonic;
-(id)onStateImage;
-(id)offStateImage;
-(id)mixedStateImage;
-(id)userKeyEquivalent;
-(unsigned long long)userKeyEquivalentModifierMask;
-(void)setMnemonicLocation:(unsigned long long)arg1;
-(unsigned long long)mnemonicLocation;
-(void)setOnStateImage:(id)arg1;
-(void)setOffStateImage:(id)arg1;
-(void)setMixedStateImage:(id)arg1;
-(void)setIndentationLevel:(long long)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSValidatedUserInterfaceItem.h>
#import <libobjc.A.dylib/NSUserInterfaceItemIdentification.h>
#import <libobjc.A.dylib/NSAccessibilityElement.h>
#import <libobjc.A.dylib/NSAccessibility.h>

@class NSMenu, NSString, NSAttributedString, NSImage, NSView, NSURL, NSArray;

@interface NSMenuItem : NSObject <NSImmediateActionAnimationController, NSMenuItem, NSCopying, NSCoding, NSValidatedUserInterfaceItem, NSUserInterfaceItemIdentification, NSAccessibilityElement, NSAccessibility> {

	NSMenu* _menu;
	NSString* _title;
	NSString* _keyEquivalent;
	NSString* _uiid;
	id _repObject;
	NSMenu* _submenu;
	id _extraData;
	id _target;
	SEL _action;
	long long _tag;
	unsigned char _keyEquivalentModifierMask;
	struct {
		unsigned keGenerationCount : 8;
		unsigned disabled : 1;
		unsigned isSeparator : 1;
		unsigned hidden : 1;
		unsigned alternate : 1;
		unsigned moreAlternate : 1;
		unsigned singleAlternate : 1;
		unsigned indent : 4;
		unsigned keShareMode : 3;
		unsigned state : 2;
		unsigned destructive : 1;
		unsigned reserved : 2;
		unsigned limitedView : 1;
		unsigned drawingOnlyView : 1;
		unsigned nextItemIsAlternate : 1;
		unsigned blockKE : 1;
		unsigned ignoredForAccessibility : 1;
		unsigned hiddenActiveKE : 1;
		unsigned noRepeatKEs : 1;
		unsigned blockedByScreenTime : 1;
		unsigned submenuParentUnchoosable : 1;
		unsigned allowedForLimitedAppMode : 1;
		unsigned isGroupHeader : 1;
	}  _miFlags;

}

@property (readonly) char _wantsDeepAnimationCallbacks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SEL action; 
@property (readonly) long long tag; 
@property (assign) NSMenu * menu; 
@property (readonly) char hasSubmenu; 
@property (retain) NSMenu * submenu; 
@property (readonly) NSMenuItem * parentItem; 
@property (copy) NSString * title; 
@property (copy) NSAttributedString * attributedTitle; 
@property (getter=isSeparatorItem,readonly) char separatorItem; 
@property (copy) NSString * keyEquivalent; 
@property (assign) unsigned long long keyEquivalentModifierMask; 
@property (copy,readonly) NSString * userKeyEquivalent; 
@property (assign) char allowsKeyEquivalentWhenHidden; 
@property (retain) NSImage * image; 
@property (assign) long long state; 
@property (retain) NSImage * onStateImage; 
@property (retain) NSImage * offStateImage; 
@property (retain) NSImage * mixedStateImage; 
@property (getter=isEnabled) char enabled; 
@property (getter=isAlternate) char alternate; 
@property (assign) long long indentationLevel; 
@property (__weak) id target; 
@property (assign) SEL action; 
@property (assign) long long tag; 
@property (retain) id representedObject; 
@property (retain) NSView * view; 
@property (getter=isHighlighted,readonly) char highlighted; 
@property (getter=isHidden) char hidden; 
@property (getter=isHiddenOrHasHiddenAncestor,readonly) char hiddenOrHasHiddenAncestor; 
@property (copy) NSString * toolTip; 
@property (copy) NSString * identifier; 
@property (getter=isAccessibilityElement) char accessibilityElement; 
@property (assign) CGRect accessibilityFrame; 
@property (getter=isAccessibilityFocused) char accessibilityFocused; 
@property (assign) CGPoint accessibilityActivationPoint; 
@property (__weak) id accessibilityTopLevelUIElement; 
@property (copy) NSURL * accessibilityURL; 
@property (retain) id accessibilityValue; 
@property (copy) NSString * accessibilityValueDescription; 
@property (copy) NSArray * accessibilityVisibleChildren; 
@property (copy) NSString * accessibilitySubrole; 
@property (copy) NSString * accessibilityTitle; 
@property (__weak) id accessibilityTitleUIElement; 
@property (copy) NSArray * accessibilityNextContents; 
@property (assign) long long accessibilityOrientation; 
@property (retain) id accessibilityOverflowButton; 
@property (__weak) id accessibilityParent; 
@property (copy) NSString * accessibilityPlaceholderValue; 
@property (copy) NSArray * accessibilityPreviousContents; 
@property (copy) NSString * accessibilityRole; 
@property (copy) NSString * accessibilityRoleDescription; 
@property (retain) id accessibilitySearchButton; 
@property (retain) id accessibilitySearchMenu; 
@property (getter=isAccessibilitySelected) char accessibilitySelected; 
@property (copy) NSArray * accessibilitySelectedChildren; 
@property (copy) NSArray * accessibilityServesAsTitleForUIElements; 
@property (retain) id accessibilityShownMenu; 
@property (retain) id accessibilityMinValue; 
@property (retain) id accessibilityMaxValue; 
@property (copy) NSArray * accessibilityLinkedUIElements; 
@property (__weak) id accessibilityWindow; 
@property (copy) NSString * accessibilityIdentifier; 
@property (copy) NSString * accessibilityHelp; 
@property (copy) NSString * accessibilityFilename; 
@property (getter=isAccessibilityExpanded) char accessibilityExpanded; 
@property (getter=isAccessibilityEdited) char accessibilityEdited; 
@property (getter=isAccessibilityEnabled) char accessibilityEnabled; 
@property (copy) NSArray * accessibilityChildren; 
@property (copy) NSArray * accessibilityChildrenInNavigationOrder; 
@property (retain) id accessibilityClearButton; 
@property (retain) id accessibilityCancelButton; 
@property (getter=isAccessibilityProtectedContent) char accessibilityProtectedContent; 
@property (copy) NSArray * accessibilityContents; 
@property (copy) NSString * accessibilityLabel; 
@property (getter=isAccessibilityAlternateUIVisible) char accessibilityAlternateUIVisible; 
@property (copy) NSArray * accessibilitySharedFocusElements; 
@property (getter=isAccessibilityRequired) char accessibilityRequired; 
@property (copy) NSArray * accessibilityCustomRotors; 
@property (retain) id accessibilityApplicationFocusedUIElement; 
@property (retain) id accessibilityMainWindow; 
@property (getter=isAccessibilityHidden) char accessibilityHidden; 
@property (getter=isAccessibilityFrontmost) char accessibilityFrontmost; 
@property (retain) id accessibilityFocusedWindow; 
@property (copy) NSArray * accessibilityWindows; 
@property (__weak) id accessibilityExtrasMenuBar; 
@property (__weak) id accessibilityMenuBar; 
@property (copy) NSArray * accessibilityColumnTitles; 
@property (getter=isAccessibilityOrderedByRow) char accessibilityOrderedByRow; 
@property (assign) long long accessibilityHorizontalUnits; 
@property (assign) long long accessibilityVerticalUnits; 
@property (copy) NSString * accessibilityHorizontalUnitDescription; 
@property (copy) NSString * accessibilityVerticalUnitDescription; 
@property (copy) NSArray * accessibilityHandles; 
@property (retain) id accessibilityWarningValue; 
@property (retain) id accessibilityCriticalValue; 
@property (getter=isAccessibilityDisclosed) char accessibilityDisclosed; 
@property (__weak) id accessibilityDisclosedByRow; 
@property (retain) id accessibilityDisclosedRows; 
@property (assign) long long accessibilityDisclosureLevel; 
@property (copy) NSArray * accessibilityMarkerUIElements; 
@property (retain) id accessibilityMarkerValues; 
@property (retain) id accessibilityMarkerGroupUIElement; 
@property (assign) long long accessibilityUnits; 
@property (copy) NSString * accessibilityUnitDescription; 
@property (assign) long long accessibilityRulerMarkerType; 
@property (copy) NSString * accessibilityMarkerTypeDescription; 
@property (retain) id accessibilityHorizontalScrollBar; 
@property (retain) id accessibilityVerticalScrollBar; 
@property (copy) NSArray * accessibilityAllowedValues; 
@property (copy) NSArray * accessibilityLabelUIElements; 
@property (assign) float accessibilityLabelValue; 
@property (copy) NSArray * accessibilitySplitters; 
@property (retain) id accessibilityDecrementButton; 
@property (retain) id accessibilityIncrementButton; 
@property (copy) NSArray * accessibilityTabs; 
@property (retain) id accessibilityHeader; 
@property (assign) long long accessibilityColumnCount; 
@property (assign) long long accessibilityRowCount; 
@property (assign) long long accessibilityIndex; 
@property (copy) NSArray * accessibilityColumns; 
@property (copy) NSArray * accessibilityRows; 
@property (copy) NSArray * accessibilityVisibleRows; 
@property (copy) NSArray * accessibilitySelectedRows; 
@property (copy) NSArray * accessibilityVisibleColumns; 
@property (copy) NSArray * accessibilitySelectedColumns; 
@property (assign) long long accessibilitySortDirection; 
@property (copy) NSArray * accessibilityRowHeaderUIElements; 
@property (copy) NSArray * accessibilitySelectedCells; 
@property (copy) NSArray * accessibilityVisibleCells; 
@property (copy) NSArray * accessibilityColumnHeaderUIElements; 
@property (assign) NSRange accessibilityRowIndexRange; 
@property (assign) NSRange accessibilityColumnIndexRange; 
@property (assign) long long accessibilityInsertionPointLineNumber; 
@property (assign) NSRange accessibilitySharedCharacterRange; 
@property (copy) NSArray * accessibilitySharedTextUIElements; 
@property (assign) NSRange accessibilityVisibleCharacterRange; 
@property (assign) long long accessibilityNumberOfCharacters; 
@property (copy) NSString * accessibilitySelectedText; 
@property (assign) NSRange accessibilitySelectedTextRange; 
@property (copy) NSArray * accessibilitySelectedTextRanges; 
@property (retain) id accessibilityToolbarButton; 
@property (getter=isAccessibilityModal) char accessibilityModal; 
@property (retain) id accessibilityProxy; 
@property (getter=isAccessibilityMain) char accessibilityMain; 
@property (retain) id accessibilityFullScreenButton; 
@property (retain) id accessibilityGrowArea; 
@property (copy) NSString * accessibilityDocument; 
@property (retain) id accessibilityDefaultButton; 
@property (retain) id accessibilityCloseButton; 
@property (retain) id accessibilityZoomButton; 
@property (retain) id accessibilityMinimizeButton; 
@property (getter=isAccessibilityMinimized) char accessibilityMinimized; 
@property (copy) NSArray * accessibilityCustomActions; 
+(void)initialize;
+(id)separatorItem;
+(char)_hasTitlePathBasedUserKeyEquivalent;
+(id)standardImportFromDeviceMenuItem;
+(id)_sidecarServicesMenuItemWithOptions:(unsigned long long)arg1 ;
+(id)_sidecarServicesMenuItemWithTarget:(id)arg1 action:(SEL)arg2 options:(unsigned long long)arg3 ;
+(unsigned)_firstUTF32CharFromString:(id)arg1 ;
+(char)usesUserKeyEquivalents;
+(id)standardShareMenuItemForItems:(id)arg1 ;
+(void)_updateUserKEsNowForLocalChange:(char)arg1 globalChange:(char)arg2 ;
+(id)_defaultWindowMenuStateImageMinimizedWindow;
+(id)_defaultWindowMenuStateImageKeyWindow;
+(id)_defaultWindowMenuStateImageDirtyWindow;
+(void)setUsesUserKeyEquivalents:(char)arg1 ;
+(id)standardCopyMenuItem;
+(id)standardPasteMenuItem;
+(id)standardDeleteMenuItem;
+(id)standardShareMenuItemWithItems:(id)arg1 ;
+(id)standardQuickLookMenuItem;
+(void)_updateUserKEsAfterActivation:(id)arg1 ;
+(const CFStringRef)_menuItemViewerHIViewClassName;
+(void)_dispatchActionBlockFor:(id)arg1 ;
+(id)_menuItemForItem:(id)arg1 view:(id)arg2 itemFrame:(CGRect)arg3 aimFrame:(CGRect)arg4 options:(id)arg5 ;
+(char)menu:(id)arg1 containsMenuItem:(id)arg2 ;
+(id)currentAppLanguage;
+(id)readKeyboardShortcutLocalizationEquivalentsForInputLanguageID:(id)arg1 ;
+(id)filterKeyboardShortcutLocalizationEquivalentsIn:(id)arg1 forBundleID:(id)arg2 ;
+(id)findLocalizationForKeyboardShortcut:(id)arg1 withModifiers:(unsigned long long)arg2 inApplicableOverrides:(id)arg3 ;
+(char)shouldMenuItemBeUpdatedDueToNotification:(id)arg1 ;
+(void)updateKeyboardAwareShortcutsForMenu:(id)arg1 ofCurrentSource:(TISInputSourceRef)arg2 withLanguageID:(id)arg3 ;
+(id)folderNameForKeyboardAdjustmentFileUsingInputSource:(TISInputSourceRef)arg1 ;
+(id)_menuItemWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(char)_isHidden;
-(long long)state;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setEnabled:(char)arg1 ;
-(NSString *)identifier;
-(char)isEnabled;
-(SEL)action;
-(void)setState:(long long)arg1 ;
-(OpaqueIconRefRef)_iconRef;
-(NSString *)keyEquivalent;
-(unsigned long long)keyEquivalentModifierMask;
-(void)_setShowsBlockedByScreenTime:(char)arg1 ;
-(id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(void)setTag:(long long)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setSubmenu:(NSMenu *)arg1 ;
-(void)setAction:(SEL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSView *)view;
-(NSMenu *)menu;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(NSString *)title;
-(char)_isEnabled;
-(void)setView:(NSView *)arg1 ;
-(long long)tag;
-(char)_viewWantsHIView;
-(char)_viewIsDrawingOnly;
-(char)hasSubmenu;
-(id)_menuItemViewer;
-(NSImage *)image;
-(void)setAccessibilitySubrole:(NSString *)arg1 ;
-(NSString *)accessibilitySubrole;
-(id)accessibilityDecrementButton;
-(id)accessibilityIncrementButton;
-(id)accessibilityParent;
-(NSArray *)accessibilityChildren;
-(NSString *)accessibilityRole;
-(NSString *)accessibilityLabel;
-(long long)accessibilityIndex;
-(char)isHighlighted;
-(NSArray *)accessibilityCustomActions;
-(char)isHiddenOrHasHiddenAncestor;
-(CGRect)accessibilityFrame;
-(char)accessibilityIsIgnored;
-(NSArray *)accessibilityChildrenInNavigationOrder;
-(char)isAccessibilityElement;
-(NSString *)toolTip;
-(void)setToolTip:(NSString *)arg1 ;
-(NSMenu *)submenu;
-(char)isAlternate;
-(id)_startingWindowForSendAction:(SEL)arg1 ;
-(char)isSeparatorItem;
-(void)setKeyEquivalentModifierMask:(unsigned long long)arg1 ;
-(void)_setRespectsKeyEquivalentWhileHidden:(char)arg1 ;
-(void)setAlternate:(char)arg1 ;
-(long long)accessibilityRowCount;
-(NSArray *)accessibilityVisibleChildren;
-(void)setAccessibilityIndex:(long long)arg1 ;
-(NSString *)accessibilityRoleDescription;
-(long long)accessibilityColumnCount;
-(NSArray *)accessibilitySelectedChildren;
-(void)setAccessibilitySelectedChildren:(NSArray *)arg1 ;
-(NSArray *)accessibilitySelectedCells;
-(id)controlView;
-(char)accessibilitySupportsOverriddenAttributes;
-(char)accessibilitySetOverrideValue:(id)arg1 forAttribute:(id)arg2 ;
-(void)setControlView:(id)arg1 ;
-(void)setKeyEquivalent:(NSString *)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)font;
-(void)setFont:(id)arg1 ;
-(id)userInterfaceItemIdentifier;
-(void)_recursivelyUpdateKeyEquivalents;
-(long long)_currentStateImageEnumeration;
-(long long)indentationLevel;
-(char)isAccessibilityFocused;
-(NSString *)accessibilityIdentifier;
-(CGPoint)accessibilityLayoutPointForScreenPoint:(CGPoint)arg1 ;
-(CGSize)accessibilityLayoutSizeForScreenSize:(CGSize)arg1 ;
-(CGPoint)accessibilityScreenPointForLayoutPoint:(CGPoint)arg1 ;
-(CGSize)accessibilityScreenSizeForLayoutSize:(CGSize)arg1 ;
-(id)accessibilityCellForColumn:(long long)arg1 row:(long long)arg2 ;
-(id)accessibilityAttributedStringForRange:(NSRange)arg1 ;
-(NSRange)accessibilityRangeForLine:(long long)arg1 ;
-(id)accessibilityStringForRange:(NSRange)arg1 ;
-(NSRange)accessibilityRangeForPosition:(CGPoint)arg1 ;
-(NSRange)accessibilityRangeForIndex:(long long)arg1 ;
-(CGRect)accessibilityFrameForRange:(NSRange)arg1 ;
-(id)accessibilityRTFForRange:(NSRange)arg1 ;
-(NSRange)accessibilityStyleRangeForIndex:(long long)arg1 ;
-(long long)accessibilityLineForIndex:(long long)arg1 ;
-(char)accessibilityPerformCancel;
-(char)accessibilityPerformConfirm;
-(char)accessibilityPerformDecrement;
-(char)accessibilityPerformDelete;
-(char)accessibilityPerformIncrement;
-(char)accessibilityPerformPick;
-(char)accessibilityPerformPress;
-(char)accessibilityPerformRaise;
-(char)accessibilityPerformShowAlternateUI;
-(char)accessibilityPerformShowDefaultUI;
-(char)accessibilityPerformShowMenu;
-(char)isAccessibilitySelectorAllowed:(SEL)arg1 ;
-(void)setAccessibilityElement:(char)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityFocused:(char)arg1 ;
-(CGPoint)accessibilityActivationPoint;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1 ;
-(id)accessibilityTopLevelUIElement;
-(void)setAccessibilityTopLevelUIElement:(id)arg1 ;
-(NSURL *)accessibilityURL;
-(void)setAccessibilityURL:(NSURL *)arg1 ;
-(id)accessibilityValue;
-(void)setAccessibilityValue:(id)arg1 ;
-(NSString *)accessibilityValueDescription;
-(void)setAccessibilityValueDescription:(NSString *)arg1 ;
-(void)setAccessibilityVisibleChildren:(NSArray *)arg1 ;
-(NSString *)accessibilityTitle;
-(void)setAccessibilityTitle:(NSString *)arg1 ;
-(id)accessibilityTitleUIElement;
-(void)setAccessibilityTitleUIElement:(id)arg1 ;
-(NSArray *)accessibilityNextContents;
-(void)setAccessibilityNextContents:(NSArray *)arg1 ;
-(long long)accessibilityOrientation;
-(void)setAccessibilityOrientation:(long long)arg1 ;
-(id)accessibilityOverflowButton;
-(void)setAccessibilityOverflowButton:(id)arg1 ;
-(void)setAccessibilityParent:(id)arg1 ;
-(NSString *)accessibilityPlaceholderValue;
-(void)setAccessibilityPlaceholderValue:(NSString *)arg1 ;
-(NSArray *)accessibilityPreviousContents;
-(void)setAccessibilityPreviousContents:(NSArray *)arg1 ;
-(void)setAccessibilityRole:(NSString *)arg1 ;
-(void)setAccessibilityRoleDescription:(NSString *)arg1 ;
-(id)accessibilitySearchButton;
-(void)setAccessibilitySearchButton:(id)arg1 ;
-(id)accessibilitySearchMenu;
-(void)setAccessibilitySearchMenu:(id)arg1 ;
-(char)isAccessibilitySelected;
-(void)setAccessibilitySelected:(char)arg1 ;
-(NSArray *)accessibilityServesAsTitleForUIElements;
-(void)setAccessibilityServesAsTitleForUIElements:(NSArray *)arg1 ;
-(id)accessibilityShownMenu;
-(void)setAccessibilityShownMenu:(id)arg1 ;
-(id)accessibilityMinValue;
-(void)setAccessibilityMinValue:(id)arg1 ;
-(id)accessibilityMaxValue;
-(void)setAccessibilityMaxValue:(id)arg1 ;
-(NSArray *)accessibilityLinkedUIElements;
-(void)setAccessibilityLinkedUIElements:(NSArray *)arg1 ;
-(id)accessibilityWindow;
-(void)setAccessibilityWindow:(id)arg1 ;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)accessibilityHelp;
-(void)setAccessibilityHelp:(NSString *)arg1 ;
-(NSString *)accessibilityFilename;
-(void)setAccessibilityFilename:(NSString *)arg1 ;
-(char)isAccessibilityExpanded;
-(void)setAccessibilityExpanded:(char)arg1 ;
-(char)isAccessibilityEdited;
-(void)setAccessibilityEdited:(char)arg1 ;
-(char)isAccessibilityEnabled;
-(void)setAccessibilityEnabled:(char)arg1 ;
-(void)setAccessibilityChildren:(NSArray *)arg1 ;
-(void)setAccessibilityChildrenInNavigationOrder:(NSArray *)arg1 ;
-(id)accessibilityClearButton;
-(void)setAccessibilityClearButton:(id)arg1 ;
-(id)accessibilityCancelButton;
-(void)setAccessibilityCancelButton:(id)arg1 ;
-(char)isAccessibilityProtectedContent;
-(void)setAccessibilityProtectedContent:(char)arg1 ;
-(NSArray *)accessibilityContents;
-(void)setAccessibilityContents:(NSArray *)arg1 ;
-(char)isAccessibilityAlternateUIVisible;
-(void)setAccessibilityAlternateUIVisible:(char)arg1 ;
-(NSArray *)accessibilitySharedFocusElements;
-(void)setAccessibilitySharedFocusElements:(NSArray *)arg1 ;
-(char)isAccessibilityRequired;
-(void)setAccessibilityRequired:(char)arg1 ;
-(NSArray *)accessibilityCustomRotors;
-(void)setAccessibilityCustomRotors:(NSArray *)arg1 ;
-(id)accessibilityApplicationFocusedUIElement;
-(void)setAccessibilityApplicationFocusedUIElement:(id)arg1 ;
-(id)accessibilityMainWindow;
-(void)setAccessibilityMainWindow:(id)arg1 ;
-(char)isAccessibilityHidden;
-(void)setAccessibilityHidden:(char)arg1 ;
-(char)isAccessibilityFrontmost;
-(void)setAccessibilityFrontmost:(char)arg1 ;
-(id)accessibilityFocusedWindow;
-(void)setAccessibilityFocusedWindow:(id)arg1 ;
-(NSArray *)accessibilityWindows;
-(void)setAccessibilityWindows:(NSArray *)arg1 ;
-(id)accessibilityExtrasMenuBar;
-(void)setAccessibilityExtrasMenuBar:(id)arg1 ;
-(id)accessibilityMenuBar;
-(void)setAccessibilityMenuBar:(id)arg1 ;
-(NSArray *)accessibilityColumnTitles;
-(void)setAccessibilityColumnTitles:(NSArray *)arg1 ;
-(char)isAccessibilityOrderedByRow;
-(void)setAccessibilityOrderedByRow:(char)arg1 ;
-(long long)accessibilityHorizontalUnits;
-(void)setAccessibilityHorizontalUnits:(long long)arg1 ;
-(long long)accessibilityVerticalUnits;
-(void)setAccessibilityVerticalUnits:(long long)arg1 ;
-(NSString *)accessibilityHorizontalUnitDescription;
-(void)setAccessibilityHorizontalUnitDescription:(NSString *)arg1 ;
-(NSString *)accessibilityVerticalUnitDescription;
-(void)setAccessibilityVerticalUnitDescription:(NSString *)arg1 ;
-(NSArray *)accessibilityHandles;
-(void)setAccessibilityHandles:(NSArray *)arg1 ;
-(id)accessibilityWarningValue;
-(void)setAccessibilityWarningValue:(id)arg1 ;
-(id)accessibilityCriticalValue;
-(void)setAccessibilityCriticalValue:(id)arg1 ;
-(char)isAccessibilityDisclosed;
-(void)setAccessibilityDisclosed:(char)arg1 ;
-(id)accessibilityDisclosedByRow;
-(void)setAccessibilityDisclosedByRow:(id)arg1 ;
-(id)accessibilityDisclosedRows;
-(void)setAccessibilityDisclosedRows:(id)arg1 ;
-(long long)accessibilityDisclosureLevel;
-(void)setAccessibilityDisclosureLevel:(long long)arg1 ;
-(NSArray *)accessibilityMarkerUIElements;
-(void)setAccessibilityMarkerUIElements:(NSArray *)arg1 ;
-(id)accessibilityMarkerValues;
-(void)setAccessibilityMarkerValues:(id)arg1 ;
-(id)accessibilityMarkerGroupUIElement;
-(void)setAccessibilityMarkerGroupUIElement:(id)arg1 ;
-(long long)accessibilityUnits;
-(void)setAccessibilityUnits:(long long)arg1 ;
-(NSString *)accessibilityUnitDescription;
-(void)setAccessibilityUnitDescription:(NSString *)arg1 ;
-(long long)accessibilityRulerMarkerType;
-(void)setAccessibilityRulerMarkerType:(long long)arg1 ;
-(NSString *)accessibilityMarkerTypeDescription;
-(void)setAccessibilityMarkerTypeDescription:(NSString *)arg1 ;
-(id)accessibilityHorizontalScrollBar;
-(void)setAccessibilityHorizontalScrollBar:(id)arg1 ;
-(id)accessibilityVerticalScrollBar;
-(void)setAccessibilityVerticalScrollBar:(id)arg1 ;
-(NSArray *)accessibilityAllowedValues;
-(void)setAccessibilityAllowedValues:(NSArray *)arg1 ;
-(NSArray *)accessibilityLabelUIElements;
-(void)setAccessibilityLabelUIElements:(NSArray *)arg1 ;
-(float)accessibilityLabelValue;
-(void)setAccessibilityLabelValue:(float)arg1 ;
-(NSArray *)accessibilitySplitters;
-(void)setAccessibilitySplitters:(NSArray *)arg1 ;
-(void)setAccessibilityDecrementButton:(id)arg1 ;
-(void)setAccessibilityIncrementButton:(id)arg1 ;
-(NSArray *)accessibilityTabs;
-(void)setAccessibilityTabs:(NSArray *)arg1 ;
-(id)accessibilityHeader;
-(void)setAccessibilityHeader:(id)arg1 ;
-(void)setAccessibilityColumnCount:(long long)arg1 ;
-(void)setAccessibilityRowCount:(long long)arg1 ;
-(NSArray *)accessibilityColumns;
-(void)setAccessibilityColumns:(NSArray *)arg1 ;
-(NSArray *)accessibilityRows;
-(void)setAccessibilityRows:(NSArray *)arg1 ;
-(NSArray *)accessibilityVisibleRows;
-(void)setAccessibilityVisibleRows:(NSArray *)arg1 ;
-(NSArray *)accessibilitySelectedRows;
-(void)setAccessibilitySelectedRows:(NSArray *)arg1 ;
-(NSArray *)accessibilityVisibleColumns;
-(void)setAccessibilityVisibleColumns:(NSArray *)arg1 ;
-(NSArray *)accessibilitySelectedColumns;
-(void)setAccessibilitySelectedColumns:(NSArray *)arg1 ;
-(long long)accessibilitySortDirection;
-(void)setAccessibilitySortDirection:(long long)arg1 ;
-(NSArray *)accessibilityRowHeaderUIElements;
-(void)setAccessibilityRowHeaderUIElements:(NSArray *)arg1 ;
-(void)setAccessibilitySelectedCells:(NSArray *)arg1 ;
-(NSArray *)accessibilityVisibleCells;
-(void)setAccessibilityVisibleCells:(NSArray *)arg1 ;
-(NSArray *)accessibilityColumnHeaderUIElements;
-(void)setAccessibilityColumnHeaderUIElements:(NSArray *)arg1 ;
-(NSRange)accessibilityRowIndexRange;
-(void)setAccessibilityRowIndexRange:(NSRange)arg1 ;
-(NSRange)accessibilityColumnIndexRange;
-(void)setAccessibilityColumnIndexRange:(NSRange)arg1 ;
-(long long)accessibilityInsertionPointLineNumber;
-(void)setAccessibilityInsertionPointLineNumber:(long long)arg1 ;
-(NSRange)accessibilitySharedCharacterRange;
-(void)setAccessibilitySharedCharacterRange:(NSRange)arg1 ;
-(NSArray *)accessibilitySharedTextUIElements;
-(void)setAccessibilitySharedTextUIElements:(NSArray *)arg1 ;
-(NSRange)accessibilityVisibleCharacterRange;
-(void)setAccessibilityVisibleCharacterRange:(NSRange)arg1 ;
-(long long)accessibilityNumberOfCharacters;
-(void)setAccessibilityNumberOfCharacters:(long long)arg1 ;
-(NSString *)accessibilitySelectedText;
-(void)setAccessibilitySelectedText:(NSString *)arg1 ;
-(NSRange)accessibilitySelectedTextRange;
-(void)setAccessibilitySelectedTextRange:(NSRange)arg1 ;
-(NSArray *)accessibilitySelectedTextRanges;
-(void)setAccessibilitySelectedTextRanges:(NSArray *)arg1 ;
-(id)accessibilityToolbarButton;
-(void)setAccessibilityToolbarButton:(id)arg1 ;
-(char)isAccessibilityModal;
-(void)setAccessibilityModal:(char)arg1 ;
-(id)accessibilityProxy;
-(void)setAccessibilityProxy:(id)arg1 ;
-(char)isAccessibilityMain;
-(void)setAccessibilityMain:(char)arg1 ;
-(id)accessibilityFullScreenButton;
-(void)setAccessibilityFullScreenButton:(id)arg1 ;
-(id)accessibilityGrowArea;
-(void)setAccessibilityGrowArea:(id)arg1 ;
-(NSString *)accessibilityDocument;
-(void)setAccessibilityDocument:(NSString *)arg1 ;
-(id)accessibilityDefaultButton;
-(void)setAccessibilityDefaultButton:(id)arg1 ;
-(id)accessibilityCloseButton;
-(void)setAccessibilityCloseButton:(id)arg1 ;
-(id)accessibilityZoomButton;
-(void)setAccessibilityZoomButton:(id)arg1 ;
-(id)accessibilityMinimizeButton;
-(void)setAccessibilityMinimizeButton:(id)arg1 ;
-(char)isAccessibilityMinimized;
-(void)setAccessibilityMinimized:(char)arg1 ;
-(void)setAccessibilityCustomActions:(NSArray *)arg1 ;
-(void)setMenu:(NSMenu *)arg1 ;
-(void)_setDefaultKeyEquivalentPriority:(unsigned long long)arg1 ;
-(void)_setIgnoredForAccessibility:(char)arg1 ;
-(void)_setKeyEquivalentVirtualKeyCode:(unsigned short)arg1 ;
-(void)setUserInterfaceItemIdentifier:(id)arg1 ;
-(void)_setRespectsKeyEquivalentForRepeatKeys:(char)arg1 ;
-(void)_setIsAlternateDespiteNonmatchingModifiers:(char)arg1 ;
-(id)_bindingAdaptor;
-(id)representedObject;
-(void)_setBindingAdaptor:(id)arg1 ;
-(void)setTitleWithMnemonic:(id)arg1 ;
-(long long)backgroundStyle;
-(id)mnemonic;
-(char)isDestructive;
-(void)setDestructive:(char)arg1 ;
-(CGSize)_imageSize;
-(void)_corePerformAction;
-(id)_alternateImageForItemImage:(id)arg1 scale:(long long)arg2 weight:(double)arg3 ;
-(void)_sendItemSelectedNote;
-(void)_internalPerformActionThroughMenuIfPossible;
-(CGSize)_cachedAttributedTitleSizeForMeasuring:(char)arg1 hasAttachment:(char*)arg2 ;
-(id)_imageForState:(long long)arg1 ;
-(id)_alternateImageForItemStateImage:(id)arg1 ;
-(unsigned short)_keyEquivalentVirtualKeyCode;
-(unsigned long long)_applicableKeyEquivalentModifierMask;
-(unsigned long long)_newItemsCount;
-(char)_isHelpMenuAppKitOnly;
-(id)_applicableImage;
-(char)_submenuParentItemUnchoosable;
-(char)_nextItemIsAlternate;
-(char)_respectsKeyEquivalentWhileHidden;
-(char)_ignoredForAccessibility;
-(char)_isAlternateDespiteNonmatchingModifiers;
-(char)_requiresModifiersToBeVisible;
-(char)_showsBlockedByScreenTime;
-(char)_isGroupHeader;
-(id)accessibilityResultsForSearchPredicate:(id)arg1 ;
-(id)accessibilityHeaderForColumnIndex:(long long)arg1 ;
-(id)accessibilityHeaderForRowIndex:(long long)arg1 ;
-(id)accessibilityAuditIssues;
-(void)setAccessibilityAuditIssues:(id)arg1 ;
-(char)isAccessibilityAutoInteractable;
-(void)setAccessibilityAutoInteractable:(char)arg1 ;
-(long long)accessibilityContainerType;
-(void)setAccessibilityContainerType:(long long)arg1 ;
-(id)accessibilityUserInputLabels;
-(void)setAccessibilityUserInputLabels:(id)arg1 ;
-(id)accessibilityAttributedUserInputLabels;
-(void)setAccessibilityAttributedUserInputLabels:(id)arg1 ;
-(id)accessibilityCustomChoosers;
-(void)setAccessibilityCustomChoosers:(id)arg1 ;
-(id)_accessibilityLabel;
-(char)isAccessibilityEnhancedUserInterface;
-(void)setAccessibilityEnhancedUserInterface:(char)arg1 ;
-(id)accessibilityFunctionRowTopLevelElements;
-(void)setAccessibilityFunctionRowTopLevelElements:(id)arg1 ;
-(char)isAccessibilityMimicNativeView;
-(void)setAccessibilityMimicNativeView:(char)arg1 ;
-(id)accessibilitySections;
-(void)setAccessibilitySections:(id)arg1 ;
-(id)accessibilityHeaderGroup;
-(void)setAccessibilityHeaderGroup:(id)arg1 ;
-(CGRect)accessibilityFrameInParentSpace;
-(void)setAccessibilityFrameInParentSpace:(CGRect)arg1 ;
-(id)accessibilityPreviousContentSibling;
-(void)setPreviousContentSibling:(id)arg1 ;
-(id)accessibilityNextContentSibling;
-(void)setNextContentSibling:(id)arg1 ;
-(id)accessibilityContentSiblingAbove;
-(void)setAccessibilityContentSiblingAbove:(id)arg1 ;
-(id)accessibilityContentSiblingBelow;
-(void)setAccessibilityContentSiblingBelow:(id)arg1 ;
-(char)accessibilityOverridesAlwaysTakePrecedence;
-(void)setAccessibilityOverridesAlwaysTakePrecedence:(char)arg1 ;
-(void)_setNextItemIsAlternate:(char)arg1 ;
-(char)_menuTitleMayBeInvolvedInMenuPaths;
-(char)_respectsKeyEquivalentForRepeatKeys;
-(char)_shouldBeDisabledForLimitedAppMode;
-(void)_setMenuItemBelongsToContextualMenu:(char)arg1 ;
-(char)_canBeHighlighted;
-(char)_usesUserKeyEquivalents;
-(NSImage *)onStateImage;
-(NSImage *)offStateImage;
-(NSImage *)mixedStateImage;
-(void)_configureAsSeparatorItem;
-(id)copyNormalizedTitle:(id)arg1 ;
-(char)_isSelectorAllowedForLimitedAppMode:(SEL)arg1 ;
-(id)_rawKeyEquivalent;
-(void)_setImageSize:(CGSize)arg1 ;
-(void)_setKeyEquivalentInputSourceIdentifier:(id)arg1 ;
-(id)_superitem;
-(id)_titleForUserKeyEquivalents;
-(CGSize)_computeBoundingRectSizeForTitle:(id)arg1 hasAttachment:(char*)arg2 ;
-(NSString *)userKeyEquivalent;
-(id)_rawKeyboardAwareEquivalent;
-(unsigned long long)_keyboardAwareEquivalentModifierMask;
-(unsigned long long)_rawKeyEquivalentModifierMask;
-(id)_titlePathForUserKeyEquivalents;
-(id)_desiredKeyEquivalent;
-(char)_requiresKERegistration;
-(unsigned long long)_desiredKeyEquivalentModifierMask;
-(char)_canSendAction:(SEL)arg1 ;
-(NSMenuUserKeyEquivalentInfo_t)_fetchFreshUserKeyEquivalentInfo;
-(void)_cacheUserKeyEquivalentInfo:(NSMenuUserKeyEquivalentInfo_t)arg1 ;
-(id)_keyboardAwareEquivalent;
-(unsigned long long)userKeyEquivalentModifierMask;
-(void)_recacheUserKeyEquivalentOnlyIfStale:(char)arg1 ;
-(long long)keyEquivalentSharingMode;
-(char)_allowedForLimitedAppMode;
-(char)_submenuParentItemChoosable;
-(char)_isHelpMenu;
-(char)_viewHandlesEvents;
-(NSMenuItem *)parentItem;
-(void)_setSubmenu:(id)arg1 ;
-(void)_setHidden:(char)arg1 ;
-(void)_unconfigureAsSeparatorItem;
-(void)_setNewItemsCount:(unsigned long long)arg1 ;
-(id)_keyEquivalentInputSourceIdentifier;
-(void)_setKeyboardAwareEquivalent:(id)arg1 modifiers:(unsigned long long)arg2 ;
-(void)_setKeyboardAwareEquivalentModifierMask:(unsigned long long)arg1 ;
-(void)setAllowsKeyEquivalentWhenHidden:(char)arg1 ;
-(char)allowsKeyEquivalentWhenHidden;
-(char)_shouldForceShiftModifierWithKeyEquivalent:(id)arg1 ;
-(char)_mayBeInvolvedInMenuItemPath;
-(void)_setBlockKE:(char)arg1 ;
-(char)_blockKE;
-(unsigned long long)_defaultKeyEquivalentPriority;
-(unsigned long long)_keyEquivalentPriority;
-(void)setKeyEquivalentSharingMode:(long long)arg1 ;
-(char)_canShareKeyEquivalentWithItem:(id)arg1 ;
-(void)setMnemonicLocation:(unsigned long long)arg1 ;
-(unsigned long long)mnemonicLocation;
-(void)_setIconRef:(OpaqueIconRefRef)arg1 ;
-(void)setOnStateImage:(NSImage *)arg1 ;
-(void)setOffStateImage:(NSImage *)arg1 ;
-(void)setMixedStateImage:(NSImage *)arg1 ;
-(void)_setSubmenuParentItemUnchoosable:(char)arg1 ;
-(void)_setAllowedForLimitedAppMode:(char)arg1 ;
-(void)_setIsGroupHeader:(char)arg1 ;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)_setChangedFlags:(long long)arg1 ;
-(long long)_changedFlags;
-(void)_setViewNeedsDisplayInRect:(CGRect)arg1 ;
-(void)_setViewHandlesEvents:(char)arg1 ;
-(void)_setViewIsDrawingOnly:(char)arg1 ;
-(void)_setRequiresModifiersToBeVisible:(char)arg1 ;
-(void)_beginPredeepAnimationAgainstPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_doPredeepAnimationWithProgress:(double)arg1 ;
-(void)_cancelPredeepAnimation;
-(void)_completeDeepAnimation;
-(void)_releaseDeepAnimation;
-(char)_wantsDeepAnimationCallbacks;
-(void)recognizerWillBeginAnimation:(id)arg1 ;
-(void)recognizerDidUpdateAnimation:(id)arg1 ;
-(void)recognizerDidCancelAnimation:(id)arg1 ;
-(void)recognizerDidCompleteAnimation:(id)arg1 ;
-(void)recognizerDidDismissAnimation:(id)arg1 ;
-(void)invokeActionBlock:(id)arg1 ;
-(void)setActionBlock:(/*^block*/id)arg1 ;
@end

