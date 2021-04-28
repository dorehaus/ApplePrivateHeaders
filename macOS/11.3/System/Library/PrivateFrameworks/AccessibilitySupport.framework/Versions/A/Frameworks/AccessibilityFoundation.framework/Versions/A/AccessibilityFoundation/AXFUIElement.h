/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityFoundation/AccessibilityFoundation-Structs.h>
#import <libobjc.A.dylib/AXFUIElementProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol AXFUIElementDelegate;
@class NSString, NSArray, NSURL, AXFTextRange, NSMutableSet, _AXFUIElementDataProvider;

@interface AXFUIElement : NSObject <AXFUIElementProtocol, NSCopying> {

	char __shouldTryToUseMarkerBasedTextAPI;
	char __didCheckIfWeShouldTryToUseMarkerBasedTextAPI;
	id<AXFUIElementDelegate> _delegate;
	NSMutableSet* __supportedAttributes;
	_AXFUIElementDataProvider* __dataProvider;

}

@property (nonatomic,readonly) char isSelectable; 
@property (nonatomic,readonly) AXFUIElement * selectionExecutor; 
@property (nonatomic,readonly) AXFUIElement * selectionRepresentation; 
@property (nonatomic,readonly) NSArray * selectedElements; 
@property (nonatomic,__weak,readonly) AXFUIElement * topmostUIAncestor; 
@property (nonatomic,retain) NSMutableSet * _supportedAttributes;                                                        //@synthesize _supportedAttributes=__supportedAttributes - In the implementation block
@property (assign,nonatomic) char _shouldTryToUseMarkerBasedTextAPI;                                                     //@synthesize _shouldTryToUseMarkerBasedTextAPI=__shouldTryToUseMarkerBasedTextAPI - In the implementation block
@property (assign,nonatomic) char _didCheckIfWeShouldTryToUseMarkerBasedTextAPI;                                         //@synthesize _didCheckIfWeShouldTryToUseMarkerBasedTextAPI=__didCheckIfWeShouldTryToUseMarkerBasedTextAPI - In the implementation block
@property (nonatomic,readonly) _AXFUIElementDataProvider * _dataProvider;                                                //@synthesize _dataProvider=__dataProvider - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) int applicationProcessIdentifier; 
@property (nonatomic,readonly) ProcessSerialNumber applicationProcessSerialNumber; 
@property (nonatomic,copy,readonly) NSString * applicationIdentifier; 
@property (nonatomic,copy,readonly) AXFUIElement * applicationElement; 
@property (nonatomic,readonly) int realApplicationProcessIdentifier; 
@property (nonatomic,readonly) ProcessSerialNumber realApplicationProcessSerialNumber; 
@property (nonatomic,readonly) char isAccessibilityCatalystApplication; 
@property (assign,nonatomic,__weak) id<AXFUIElementDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isKeyboardFocusable; 
@property (nonatomic,readonly) CGRect visibleBounds; 
@property (nonatomic,readonly) AXFTextRange * totalContentRange; 
@property (assign,nonatomic,__weak) AXFUIElement * accessibilityParent; 
@property (nonatomic,copy) NSString * accessibilityRole; 
@property (nonatomic,copy) NSString * accessibilitySubrole; 
@property (nonatomic,copy) NSString * accessibilityRoleDescription; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (nonatomic,copy) NSString * accessibilityLabel; 
@property (nonatomic,copy) NSString * accessibilityTitle; 
@property (assign,nonatomic,__weak) AXFUIElement * accessibilityTitleUIElement; 
@property (nonatomic,copy) NSArray * accessibilityChildren; 
@property (nonatomic,copy) NSArray * accessibilityVisibleChildren; 
@property (nonatomic,copy) NSArray * accessibilitySelectedChildren; 
@property (nonatomic,__weak,readonly) AXFUIElement * accessibilityEditableAncestor; 
@property (nonatomic,retain) id accessibilityValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic) long long integerValue; 
@property (assign,nonatomic) unsigned long long unsignedIntegerValue; 
@property (nonatomic,copy) NSString * accessibilityValueDescription; 
@property (nonatomic,retain) id accessibilityMinValue; 
@property (assign,nonatomic) float floatMinValue; 
@property (assign,nonatomic) long long integerMinValue; 
@property (assign,nonatomic) unsigned long long unsignedIntegerMinValue; 
@property (nonatomic,retain) id accessibilityMaxValue; 
@property (assign,nonatomic) float floatMaxValue; 
@property (assign,nonatomic) long long integerMaxValue; 
@property (assign,nonatomic) unsigned long long unsignedIntegerMaxValue; 
@property (assign,nonatomic) CGPoint accessibilityActivationPoint; 
@property (assign,nonatomic) long long accessibilityOrientation; 
@property (nonatomic,copy) NSString * accessibilityPlaceholderValue; 
@property (nonatomic,retain) NSURL * accessibilityURL; 
@property (nonatomic,retain) AXFUIElement * accessibilitySearchButton; 
@property (nonatomic,retain) AXFUIElement * accessibilitySearchMenu; 
@property (nonatomic,copy) NSArray * accessibilityServesAsTitleForUIElements; 
@property (nonatomic,retain) AXFUIElement * accessibilityShownMenu; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
@property (nonatomic,copy) NSString * accessibilityHelp; 
@property (nonatomic,copy) NSString * accessibilityFilename; 
@property (assign,getter=isAccessibilityAlternateUIVisible,nonatomic) char accessibilityAlternateUIVisible; 
@property (assign,getter=isAccessibilityEdited,nonatomic) char accessibilityEdited; 
@property (assign,getter=isAccessibilityEnabled,nonatomic) char accessibilityEnabled; 
@property (assign,getter=isAccessibilityExpanded,nonatomic) char accessibilityExpanded; 
@property (assign,getter=isAccessibilityFocused,nonatomic) char accessibilityFocused; 
@property (assign,getter=isAccessibilityProtectedContent,nonatomic) char accessibilityProtectedContent; 
@property (assign,getter=isAccessibilitySelected,nonatomic) char accessibilitySelected; 
@property (nonatomic,retain) AXFUIElement * accessibilityClearButton; 
@property (nonatomic,retain) AXFUIElement * accessibilityCancelButton; 
@property (nonatomic,retain) AXFUIElement * accessibilityOverflowButton; 
@property (assign,nonatomic,__weak) AXFUIElement * accessibilityTopLevelUIElement; 
@property (assign,nonatomic,__weak) AXFUIElement * accessibilityWindow; 
@property (nonatomic,copy) NSArray * accessibilityContents; 
@property (nonatomic,copy) NSArray * accessibilityLinkedUIElements; 
@property (nonatomic,copy) NSArray * accessibilityNextContents; 
@property (nonatomic,copy) NSArray * accessibilityPreviousContents; 
@property (nonatomic,copy) NSArray * accessibilitySharedFocusElements; 
@property (nonatomic,readonly) char isAccessibilityCatalystElement; 
@property (nonatomic,retain) AXFUIElement * accessibilityApplicationFocusedUIElement; 
@property (nonatomic,retain) AXFUIElement * accessibilityMainWindow; 
@property (assign,getter=isAccessibilityHidden,nonatomic) char accessibilityHidden; 
@property (assign,getter=isAccessibilityFrontmost,nonatomic) char accessibilityFrontmost; 
@property (nonatomic,retain) AXFUIElement * accessibilityFocusedWindow; 
@property (nonatomic,copy) NSArray * accessibilityWindows; 
@property (assign,nonatomic,__weak) AXFUIElement * accessibilityExtrasMenuBar; 
@property (assign,nonatomic,__weak) AXFUIElement * accessibilityMenuBar; 
@property (nonatomic,copy) NSArray * accessibilityColumnTitles; 
@property (assign,getter=isAccessibilityOrderedByRow,nonatomic) char accessibilityOrderedByRow; 
@property (assign,nonatomic) long long accessibilityHorizontalUnits; 
@property (assign,nonatomic) long long accessibilityVerticalUnits; 
@property (nonatomic,copy) NSString * accessibilityHorizontalUnitDescription; 
@property (nonatomic,copy) NSString * accessibilityVerticalUnitDescription; 
@property (nonatomic,copy) NSArray * accessibilityHandles; 
@property (nonatomic,retain) id accessibilityWarningValue; 
@property (nonatomic,retain) id accessibilityCriticalValue; 
@property (nonatomic,copy,readonly) NSString * accessibilityMenuItemCmdChar; 
@property (nonatomic,readonly) long long accessibilityMenuItemCmdGlyph; 
@property (nonatomic,readonly) long long accessibilityMenuItemCmdModifiers; 
@property (nonatomic,readonly) long long accessibilityMenuItemCmdVirtualKey; 
@property (nonatomic,copy,readonly) NSString * accessibilityMenuItemMarkChar; 
@property (assign,getter=isAccessibilityDisclosed,nonatomic) char accessibilityDisclosed; 
@property (assign,nonatomic,__weak) AXFUIElement * accessibilityDisclosedByRow; 
@property (nonatomic,retain) NSArray * accessibilityDisclosedRows; 
@property (assign,nonatomic) long long accessibilityDisclosureLevel; 
@property (nonatomic,copy) NSArray * accessibilityMarkerUIElements; 
@property (nonatomic,retain) id accessibilityMarkerValues; 
@property (nonatomic,retain) AXFUIElement * accessibilityMarkerGroupUIElement; 
@property (assign,nonatomic) long long accessibilityUnits; 
@property (nonatomic,copy) NSString * accessibilityUnitDescription; 
@property (assign,nonatomic) long long accessibilityRulerMarkerType; 
@property (nonatomic,copy) NSString * accessibilityMarkerTypeDescription; 
@property (nonatomic,retain) AXFUIElement * accessibilityHorizontalScrollBar; 
@property (nonatomic,retain) AXFUIElement * accessibilityVerticalScrollBar; 
@property (nonatomic,copy) NSArray * accessibilityAllowedValues; 
@property (nonatomic,copy) NSArray * accessibilityLabelUIElements; 
@property (assign) float accessibilityLabelValue; 
@property (nonatomic,copy) NSArray * accessibilitySplitters; 
@property (nonatomic,retain) AXFUIElement * accessibilityDecrementButton; 
@property (nonatomic,retain) AXFUIElement * accessibilityIncrementButton; 
@property (nonatomic,copy) NSArray * accessibilityTabs; 
@property (nonatomic,retain) AXFUIElement * accessibilityHeader; 
@property (nonatomic,readonly) long long accessibilityColumnCount; 
@property (nonatomic,readonly) long long accessibilityRowCount; 
@property (nonatomic,readonly) long long accessibilityIndex; 
@property (nonatomic,copy) NSArray * accessibilityColumns; 
@property (nonatomic,copy) NSArray * accessibilityRows; 
@property (nonatomic,copy) NSArray * accessibilityVisibleRows; 
@property (nonatomic,copy) NSArray * accessibilitySelectedRows; 
@property (nonatomic,copy) NSArray * accessibilityVisibleColumns; 
@property (nonatomic,copy) NSArray * accessibilitySelectedColumns; 
@property (assign,nonatomic) long long accessibilitySortDirection; 
@property (nonatomic,copy) NSArray * accessibilityRowHeaderUIElements; 
@property (nonatomic,copy) NSArray * accessibilitySelectedCells; 
@property (nonatomic,copy) NSArray * accessibilityVisibleCells; 
@property (nonatomic,copy) NSArray * accessibilityColumnHeaderUIElements; 
@property (assign,nonatomic) NSRange accessibilityRowIndexRange; 
@property (assign,nonatomic) NSRange accessibilityColumnIndexRange; 
@property (assign,nonatomic) long long accessibilityInsertionPointLineNumber; 
@property (assign,nonatomic) long long accessibilityNumberOfCharacters; 
@property (nonatomic,copy) NSString * accessibilitySelectedText; 
@property (nonatomic,retain) AXFTextRange * accessibilitySelectedTextRange; 
@property (nonatomic,copy) NSArray * accessibilitySelectedTextRanges; 
@property (assign,nonatomic) NSRange accessibilitySharedCharacterRange; 
@property (nonatomic,copy) NSArray * accessibilitySharedTextUIElements; 
@property (nonatomic,retain) AXFTextRange * accessibilityVisibleCharacterRange; 
@property (nonatomic,readonly) AXFTextRange * accessibilityTextInputMarkedRange; 
@property (assign,getter=isAccessibilityMain,nonatomic) char accessibilityMain; 
@property (assign,getter=isAccessibilityMinimized,nonatomic) char accessibilityMinimized; 
@property (assign,getter=isAccessibilityModal,nonatomic) char accessibilityModal; 
@property (nonatomic,copy) NSString * accessibilityDocument; 
@property (nonatomic,retain) AXFUIElement * accessibilityCloseButton; 
@property (nonatomic,retain) AXFUIElement * accessibilityDefaultButton; 
@property (nonatomic,retain) AXFUIElement * accessibilityFullScreenButton; 
@property (nonatomic,retain) AXFUIElement * accessibilityGrowArea; 
@property (nonatomic,retain) AXFUIElement * accessibilityMinimizeButton; 
@property (nonatomic,retain) AXFUIElement * accessibilityProxy; 
@property (nonatomic,retain) AXFUIElement * accessibilityToolbarButton; 
@property (nonatomic,retain) AXFUIElement * accessibilityZoomButton; 
@property (nonatomic,copy,readonly) NSArray * accessibilityCustomRotors; 
@property (nonatomic,readonly) NSArray * accessibilitySupportedActions; 
@property (nonatomic,readonly) char isAccessibilityEnabledAttributeSet; 
@property (nonatomic,readonly) char shouldTryToUseMarkerBasedTextAPI; 
@property (nonatomic,readonly) char canSetAccessibilityValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessibilityHitTest:(CGPoint)arg1 includeIgnored:(char)arg2 ;
+(id)elementWithTransportRepresentation:(id)arg1 ;
+(id)rowBasedContainerRoles;
+(id)allowableActionContainerRoles;
+(id)accessibilityHitTest:(CGPoint)arg1 ;
+(id)systemWideElement;
-(AXTextMarkerRef)_copyAccessibilityStartTextMarker;
-(AXTextMarkerRef)_copyAccessibilityEndTextMarker;
-(id)_accessibilityElementsForSearchPredicate:(id)arg1 ;
-(id)initWithApplicationRef:(AXUIElementRef)arg1 applicationProcessIdentifier:(int)arg2 applicationProcessSerialNumber:(ProcessSerialNumber)arg3 applicationIdentifier:(id)arg4 ;
-(id)_titleLabelTitleUIElement;
-(char)_supportsAttribute:(id)arg1 ;
-(int)realApplicationProcessIdentifier;
-(ProcessSerialNumber)realApplicationProcessSerialNumber;
-(id)accessibilityHitTest:(CGPoint)arg1 includeIgnored:(char)arg2 ;
-(id)_copyAXFUIElementForAttribute:(id)arg1 ;
-(void)_setAttribute:(id)arg1 withAXFUIElementValue:(id)arg2 ;
-(id)_copyStringForAttribute:(id)arg1 ;
-(void)_setAttribute:(id)arg1 withStringValue:(id)arg2 ;
-(CGRect)_rectForAttribute:(id)arg1 ;
-(CGPoint)_pointForAttribute:(id)arg1 ;
-(CGSize)_sizeForAttribute:(id)arg1 ;
-(void)_setAttribute:(id)arg1 withRectValue:(CGRect)arg2 ;
-(void)_setAttribute:(id)arg1 withPointValue:(CGPoint)arg2 ;
-(void)_setAttribute:(id)arg1 withSizeValue:(CGSize)arg2 ;
-(id)_copyAXFUIElementsForAttribute:(id)arg1 ;
-(void)_setAttribute:(id)arg1 withAXFUIElementValues:(id)arg2 ;
-(void)_setAttribute:(id)arg1 withValue:(void*)arg2 ;
-(float)_floatForAttribute:(id)arg1 ;
-(void)_setAttribute:(id)arg1 withNumberValue:(id)arg2 ;
-(long long)_integerForAttribute:(id)arg1 ;
-(unsigned long long)_unsignedIntegerForAttribute:(id)arg1 ;
-(void)_setAttribute:(id)arg1 withObjectValue:(id)arg2 ;
-(id)_copyURLForAttribute:(id)arg1 ;
-(void)_setAttribute:(id)arg1 withURLValue:(id)arg2 ;
-(char)_boolForAttribute:(id)arg1 ;
-(void)_setAttribute:(id)arg1 withBoolValue:(char)arg2 ;
-(CGSize)_sizeForAttribute:(id)arg1 withSizeParameter:(CGSize)arg2 ;
-(id)_numberForAttribute:(id)arg1 ;
-(char)_scrollToVisibleWithinScrollAreaAncestor:(id)arg1 ;
-(id)_copyObjectForAttribute:(id)arg1 expectedType:(unsigned long long)arg2 ;
-(id)_copyAXFUIElementForParameterizedAttribute:(id)arg1 parameter:(void*)arg2 ;
-(NSRange)_rangeForAttribute:(id)arg1 ;
-(void)_setAttribute:(id)arg1 withRangeValue:(NSRange)arg2 ;
-(char)_shouldTryToUseMarkerBasedTextAPI;
-(id)_copyObjectForAttribute:(id)arg1 range:(NSRange)arg2 expectedType:(unsigned long long)arg3 ;
-(long long)_integerForParameterizedAttribute:(id)arg1 withIntegerParameter:(long long)arg2 ;
-(NSRange)_rangeForAttribute:(id)arg1 withIntegerParameter:(long long)arg2 ;
-(CGRect)_rectForAttribute:(id)arg1 withRangeParameter:(NSRange)arg2 ;
-(NSRange)_rangeForAttribute:(id)arg1 withPointParameter:(CGPoint)arg2 ;
-(id)_copyObjectForAttribute:(id)arg1 parameter:(void*)arg2 expectedType:(unsigned long long)arg3 ;
-(id)_copyAXFUIElementAtPoint:(CGPoint)arg1 includeIgnored:(char)arg2 ;
-(id)_copyArrayForAttribute:(id)arg1 expectedType:(unsigned long long)arg2 ;
-(void*)_copyCFTypeValueForAttribute:(id)arg1 expectedType:(unsigned long long)arg2 ;
-(void*)_copyCFTypeValueForAttribute:(id)arg1 parameter:(void*)arg2 expectedType:(unsigned long long)arg3 ;
-(char)_didCheckIfWeShouldTryToUseMarkerBasedTextAPI;
-(void)set_didCheckIfWeShouldTryToUseMarkerBasedTextAPI:(char)arg1 ;
-(id)__textRangeForAttribute:(id)arg1 position:(id)arg2 ;
-(id)__textPositionForAttribute:(id)arg1 position:(id)arg2 ;
-(id)_copyAXFUIElementsForParameterizedAttribute:(id)arg1 parameter:(void*)arg2 ;
-(id)_filteredArray:(id)arg1 expectedType:(unsigned long long)arg2 ;
-(id)_copyArrayForAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)_setValueForAttribute:(id)arg1 valueType:(unsigned)arg2 value:(void*)arg3 ;
-(id)_numberForParameterizedAttribute:(id)arg1 withIntegerParameter:(long long)arg2 ;
-(id)_titlLabelTitleUIElementWithVisitedSet:(id)arg1 ;
-(char)accessibilityPerformActivate;
-(id)accessibilityConfirmAction;
-(id)accessibilityDeleteAction;
-(id)accessibilityPickAction;
-(id)accessibilityRaiseAction;
-(id)accessibilityShowAlternateUIAction;
-(id)accessibilityShowDefaultUIAction;
-(id)accessibilityShowMenuAction;
-(float)floatMinValue;
-(void)setFloatMinValue:(float)arg1 ;
-(long long)integerMinValue;
-(void)setIntegerMinValue:(long long)arg1 ;
-(unsigned long long)unsignedIntegerMinValue;
-(void)setUnsignedIntegerMinValue:(unsigned long long)arg1 ;
-(float)floatMaxValue;
-(void)setFloatMaxValue:(float)arg1 ;
-(long long)integerMaxValue;
-(void)setIntegerMaxValue:(long long)arg1 ;
-(unsigned long long)unsignedIntegerMaxValue;
-(void)setUnsignedIntegerMaxValue:(unsigned long long)arg1 ;
-(char)isAccessibilityCatalystElement;
-(id)compactArchiveRepresentation;
-(char)isAccessibilityCatalystApplication;
-(char)_isAccessibilityEnhancedUserInterface;
-(id)_accessibilityAccessKey;
-(id)_accessibilityInvalid;
-(char)_isAccessibilityRequired;
-(id)_accessibilityContentSiblingAbove;
-(id)_accessibilityContentSiblingBelow;
-(id)_accessibilityNextContentSibling;
-(id)_accessibilityPreviousContentSibling;
-(id)_accessibilityAuditIssues;
-(id)_accessibilityUnignoredParent;
-(id)_accessibilityUnignoredChildren;
-(long long)_accessibilityIndexForTextMarker:(AXTextMarkerRef)arg1 ;
-(long long)_accessibilityLengthForTextMarkerRange:(AXTextMarkerRangeRef)arg1 ;
-(AXTextMarkerRangeRef)_copyAccessibilityTextMarkerRangeForUnorderedTextMarkers:(id)arg1 ;
-(AXTextMarkerRef)_copyAccessibilityNextTextMarkerForTextMaker:(AXTextMarkerRef)arg1 ;
-(AXTextMarkerRef)_copyAccessibilityPreviousTextMarkerForTextMaker:(AXTextMarkerRef)arg1 ;
-(id)_accessibilityDomIdentifier;
-(long long)_accessibilityBlockQuoteLevel;
-(id)_accessibilitySelectedTextMarkerRange;
-(void)_setAccessibilitySelectedTextMarkerRange:(id)arg1 ;
-(id)_accessibilityNextSentenceEndTextMarkerForTextPosition:(id)arg1 ;
-(id)_accessibilityPreviousSentenceStartTextmarkerForTextPosition:(id)arg1 ;
-(id)_accessibilityTextRangeWithUnorderedTextPosition:(id)arg1 otherPosition:(id)arg2 ;
-(long long)_accessibilityLengthForTextRange:(id)arg1 ;
-(unsigned long long)_countForAttribute:(id)arg1 ;
-(id)_copyArrayForAttribute:(id)arg1 range:(NSRange)arg2 expectedType:(unsigned long long)arg3 ;
-(void)set_supportedAttributes:(NSMutableSet *)arg1 ;
-(void)set_shouldTryToUseMarkerBasedTextAPI:(char)arg1 ;
-(AXFUIElement *)selectionExecutor;
-(long long)distanceBelowElement:(id)arg1 ;
-(id)ancestorWithDistance:(long long)arg1 ;
-(AXFUIElement *)selectionRepresentation;
-(id)_firstDescendantWithinDistance:(long long)arg1 predicate:(/*^block*/id)arg2 ;
-(char)_isSiblingElement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(float)floatValue;
-(char)isValid;
-(id<AXFUIElementDelegate>)delegate;
-(NSString *)stringValue;
-(long long)integerValue;
-(unsigned long long)unsignedIntegerValue;
-(void)setDelegate:(id<AXFUIElementDelegate>)arg1 ;
-(void)_invalidate;
-(NSString *)applicationIdentifier;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setAccessibilitySubrole:(NSString *)arg1 ;
-(NSString *)accessibilitySubrole;
-(AXFUIElement *)accessibilityDecrementButton;
-(AXFUIElement *)accessibilityIncrementButton;
-(AXFUIElement *)accessibilityParent;
-(NSArray *)accessibilityChildren;
-(NSString *)accessibilityRole;
-(NSString *)accessibilityLabel;
-(long long)accessibilityIndex;
-(void)accessibilityReplaceRange:(NSRange)arg1 withText:(id)arg2 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(CGRect)accessibilityFrame;
-(long long)accessibilityRowCount;
-(NSArray *)accessibilityVisibleChildren;
-(NSString *)accessibilityRoleDescription;
-(long long)accessibilityColumnCount;
-(NSArray *)accessibilitySelectedChildren;
-(void)setAccessibilitySelectedChildren:(NSArray *)arg1 ;
-(NSArray *)accessibilitySelectedCells;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
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
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityFocused:(char)arg1 ;
-(CGPoint)accessibilityActivationPoint;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1 ;
-(AXFUIElement *)accessibilityTopLevelUIElement;
-(void)setAccessibilityTopLevelUIElement:(AXFUIElement *)arg1 ;
-(NSURL *)accessibilityURL;
-(void)setAccessibilityURL:(NSURL *)arg1 ;
-(id)accessibilityValue;
-(void)setAccessibilityValue:(id)arg1 ;
-(NSString *)accessibilityValueDescription;
-(void)setAccessibilityValueDescription:(NSString *)arg1 ;
-(void)setAccessibilityVisibleChildren:(NSArray *)arg1 ;
-(NSString *)accessibilityTitle;
-(void)setAccessibilityTitle:(NSString *)arg1 ;
-(AXFUIElement *)accessibilityTitleUIElement;
-(void)setAccessibilityTitleUIElement:(AXFUIElement *)arg1 ;
-(NSArray *)accessibilityNextContents;
-(void)setAccessibilityNextContents:(NSArray *)arg1 ;
-(long long)accessibilityOrientation;
-(void)setAccessibilityOrientation:(long long)arg1 ;
-(AXFUIElement *)accessibilityOverflowButton;
-(void)setAccessibilityOverflowButton:(AXFUIElement *)arg1 ;
-(void)setAccessibilityParent:(AXFUIElement *)arg1 ;
-(NSString *)accessibilityPlaceholderValue;
-(void)setAccessibilityPlaceholderValue:(NSString *)arg1 ;
-(NSArray *)accessibilityPreviousContents;
-(void)setAccessibilityPreviousContents:(NSArray *)arg1 ;
-(void)setAccessibilityRole:(NSString *)arg1 ;
-(void)setAccessibilityRoleDescription:(NSString *)arg1 ;
-(AXFUIElement *)accessibilitySearchButton;
-(void)setAccessibilitySearchButton:(AXFUIElement *)arg1 ;
-(AXFUIElement *)accessibilitySearchMenu;
-(void)setAccessibilitySearchMenu:(AXFUIElement *)arg1 ;
-(char)isAccessibilitySelected;
-(void)setAccessibilitySelected:(char)arg1 ;
-(NSArray *)accessibilityServesAsTitleForUIElements;
-(void)setAccessibilityServesAsTitleForUIElements:(NSArray *)arg1 ;
-(AXFUIElement *)accessibilityShownMenu;
-(void)setAccessibilityShownMenu:(AXFUIElement *)arg1 ;
-(id)accessibilityMinValue;
-(void)setAccessibilityMinValue:(id)arg1 ;
-(id)accessibilityMaxValue;
-(void)setAccessibilityMaxValue:(id)arg1 ;
-(NSArray *)accessibilityLinkedUIElements;
-(void)setAccessibilityLinkedUIElements:(NSArray *)arg1 ;
-(AXFUIElement *)accessibilityWindow;
-(void)setAccessibilityWindow:(AXFUIElement *)arg1 ;
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
-(AXFUIElement *)accessibilityClearButton;
-(void)setAccessibilityClearButton:(AXFUIElement *)arg1 ;
-(AXFUIElement *)accessibilityCancelButton;
-(void)setAccessibilityCancelButton:(AXFUIElement *)arg1 ;
-(char)isAccessibilityProtectedContent;
-(void)setAccessibilityProtectedContent:(char)arg1 ;
-(NSArray *)accessibilityContents;
-(void)setAccessibilityContents:(NSArray *)arg1 ;
-(char)isAccessibilityAlternateUIVisible;
-(void)setAccessibilityAlternateUIVisible:(char)arg1 ;
-(NSArray *)accessibilitySharedFocusElements;
-(void)setAccessibilitySharedFocusElements:(NSArray *)arg1 ;
-(NSArray *)accessibilityCustomRotors;
-(AXFUIElement *)accessibilityApplicationFocusedUIElement;
-(void)setAccessibilityApplicationFocusedUIElement:(AXFUIElement *)arg1 ;
-(AXFUIElement *)accessibilityMainWindow;
-(void)setAccessibilityMainWindow:(AXFUIElement *)arg1 ;
-(char)isAccessibilityHidden;
-(void)setAccessibilityHidden:(char)arg1 ;
-(char)isAccessibilityFrontmost;
-(void)setAccessibilityFrontmost:(char)arg1 ;
-(AXFUIElement *)accessibilityFocusedWindow;
-(void)setAccessibilityFocusedWindow:(AXFUIElement *)arg1 ;
-(NSArray *)accessibilityWindows;
-(void)setAccessibilityWindows:(NSArray *)arg1 ;
-(AXFUIElement *)accessibilityExtrasMenuBar;
-(void)setAccessibilityExtrasMenuBar:(AXFUIElement *)arg1 ;
-(AXFUIElement *)accessibilityMenuBar;
-(void)setAccessibilityMenuBar:(AXFUIElement *)arg1 ;
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
-(AXFUIElement *)accessibilityDisclosedByRow;
-(void)setAccessibilityDisclosedByRow:(AXFUIElement *)arg1 ;
-(NSArray *)accessibilityDisclosedRows;
-(void)setAccessibilityDisclosedRows:(NSArray *)arg1 ;
-(long long)accessibilityDisclosureLevel;
-(void)setAccessibilityDisclosureLevel:(long long)arg1 ;
-(NSArray *)accessibilityMarkerUIElements;
-(void)setAccessibilityMarkerUIElements:(NSArray *)arg1 ;
-(id)accessibilityMarkerValues;
-(void)setAccessibilityMarkerValues:(id)arg1 ;
-(AXFUIElement *)accessibilityMarkerGroupUIElement;
-(void)setAccessibilityMarkerGroupUIElement:(AXFUIElement *)arg1 ;
-(long long)accessibilityUnits;
-(void)setAccessibilityUnits:(long long)arg1 ;
-(NSString *)accessibilityUnitDescription;
-(void)setAccessibilityUnitDescription:(NSString *)arg1 ;
-(long long)accessibilityRulerMarkerType;
-(void)setAccessibilityRulerMarkerType:(long long)arg1 ;
-(NSString *)accessibilityMarkerTypeDescription;
-(void)setAccessibilityMarkerTypeDescription:(NSString *)arg1 ;
-(AXFUIElement *)accessibilityHorizontalScrollBar;
-(void)setAccessibilityHorizontalScrollBar:(AXFUIElement *)arg1 ;
-(AXFUIElement *)accessibilityVerticalScrollBar;
-(void)setAccessibilityVerticalScrollBar:(AXFUIElement *)arg1 ;
-(NSArray *)accessibilityAllowedValues;
-(void)setAccessibilityAllowedValues:(NSArray *)arg1 ;
-(NSArray *)accessibilityLabelUIElements;
-(void)setAccessibilityLabelUIElements:(NSArray *)arg1 ;
-(float)accessibilityLabelValue;
-(void)setAccessibilityLabelValue:(float)arg1 ;
-(NSArray *)accessibilitySplitters;
-(void)setAccessibilitySplitters:(NSArray *)arg1 ;
-(void)setAccessibilityDecrementButton:(AXFUIElement *)arg1 ;
-(void)setAccessibilityIncrementButton:(AXFUIElement *)arg1 ;
-(NSArray *)accessibilityTabs;
-(void)setAccessibilityTabs:(NSArray *)arg1 ;
-(AXFUIElement *)accessibilityHeader;
-(void)setAccessibilityHeader:(AXFUIElement *)arg1 ;
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
-(AXFTextRange *)accessibilityVisibleCharacterRange;
-(void)setAccessibilityVisibleCharacterRange:(AXFTextRange *)arg1 ;
-(long long)accessibilityNumberOfCharacters;
-(void)setAccessibilityNumberOfCharacters:(long long)arg1 ;
-(NSString *)accessibilitySelectedText;
-(void)setAccessibilitySelectedText:(NSString *)arg1 ;
-(AXFTextRange *)accessibilitySelectedTextRange;
-(void)setAccessibilitySelectedTextRange:(AXFTextRange *)arg1 ;
-(NSArray *)accessibilitySelectedTextRanges;
-(void)setAccessibilitySelectedTextRanges:(NSArray *)arg1 ;
-(AXFUIElement *)accessibilityToolbarButton;
-(void)setAccessibilityToolbarButton:(AXFUIElement *)arg1 ;
-(char)isAccessibilityModal;
-(void)setAccessibilityModal:(char)arg1 ;
-(AXFUIElement *)accessibilityProxy;
-(void)setAccessibilityProxy:(AXFUIElement *)arg1 ;
-(char)isAccessibilityMain;
-(void)setAccessibilityMain:(char)arg1 ;
-(AXFUIElement *)accessibilityFullScreenButton;
-(void)setAccessibilityFullScreenButton:(AXFUIElement *)arg1 ;
-(AXFUIElement *)accessibilityGrowArea;
-(void)setAccessibilityGrowArea:(AXFUIElement *)arg1 ;
-(NSString *)accessibilityDocument;
-(void)setAccessibilityDocument:(NSString *)arg1 ;
-(AXFUIElement *)accessibilityDefaultButton;
-(void)setAccessibilityDefaultButton:(AXFUIElement *)arg1 ;
-(AXFUIElement *)accessibilityCloseButton;
-(void)setAccessibilityCloseButton:(AXFUIElement *)arg1 ;
-(AXFUIElement *)accessibilityZoomButton;
-(void)setAccessibilityZoomButton:(AXFUIElement *)arg1 ;
-(AXFUIElement *)accessibilityMinimizeButton;
-(void)setAccessibilityMinimizeButton:(AXFUIElement *)arg1 ;
-(char)isAccessibilityMinimized;
-(void)setAccessibilityMinimized:(char)arg1 ;
-(void)_performAction:(id)arg1 ;
-(void)setIntegerValue:(long long)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(char)isSelectable;
-(id)_accessibilityClassName;
-(CGRect)visibleBounds;
-(_AXFUIElementDataProvider *)_dataProvider;
-(char)supportsAction:(id)arg1 ;
-(id)screenshotData;
-(char)performDefaultAction;
-(id)initWithDataProvider:(id)arg1 ;
-(AXFUIElement *)accessibilityEditableAncestor;
-(char)canSetAccessibilityValue;
-(AXFTextRange *)totalContentRange;
-(long long)accessibilityLineForTextPosition:(id)arg1 ;
-(id)accessibilityPreviousTextPositionForPosition:(id)arg1 ;
-(id)accessibilityTextRangeForLine:(long long)arg1 ;
-(AXFUIElement *)topmostUIAncestor;
-(id)accessibilityStringForTextRange:(id)arg1 ;
-(id)_accessibilityPreviousWordStartTextMarkerForTextPosition:(id)arg1 ;
-(id)_accessibilityLeftWordTextRangeWithTextPosition:(id)arg1 ;
-(AXFUIElement *)applicationElement;
-(id)accessibilityAttributedStringForTextRange:(id)arg1 ;
-(CGRect)accessibilityBoundsForTextRange:(id)arg1 ;
-(void)_setAccessibilityEnhancedUserInterface:(char)arg1 ;
-(id)_copyObjectForAttribute:(id)arg1 ;
-(id)initWithElementRef:(AXUIElementRef)arg1 applicationIdentifier:(id)arg2 ;
-(AXFTextRange *)accessibilityTextInputMarkedRange;
-(int)applicationProcessIdentifier;
-(id)accessibilityPressAction;
-(id)firstAncestorWithinDistance:(long long)arg1 matchingBlock:(/*^block*/id)arg2 ;
-(char)isKeyboardFocusable;
-(id)_accessibilityFocusedApplication;
-(NSArray *)accessibilitySupportedActions;
-(id)_accessibilityChildrenInNavigationOrder;
-(id)accessibilityActivateAction;
-(void)setSelected:(char)arg1 exclusive:(char)arg2 ;
-(char)isAncestorOfElement:(id)arg1 ;
-(ProcessSerialNumber)applicationProcessSerialNumber;
-(const AXUIElementRef)elementRef;
-(char)_accessibilityIsIgnored;
-(id)_accessibilityTextMarkerRange;
-(id)_accessibilityPageIndex;
-(void)setUnsignedIntegerValue:(unsigned long long)arg1 ;
-(id)transportRepresentation;
-(NSArray *)selectedElements;
-(NSMutableSet *)_supportedAttributes;
-(char)_canSetAttributeValue:(id)arg1 ;
-(id)accessibilityIncrementAction;
-(id)accessibilityDecrementAction;
-(id)accessibilityCancelAction;
-(unsigned)_accessibilityWindowID;
-(char)shouldTryToUseMarkerBasedTextAPI;
-(char)scrollToVisibleWithinScrollAreaAncestor:(id)arg1 rectToScrollVisible:(CGRect)arg2 ;
-(id)_accessibilityNextWordEndTextMarkerForTextPosition:(id)arg1 ;
-(id)_accessibilityRightWordTextRangeWithTextPosition:(id)arg1 ;
-(id)_accessibilitySentenceTextRangeWithTextPosition:(id)arg1 ;
-(char)isAccessibilityEnabledAttributeSet;
-(id)firstDescendantWithinDistance:(long long)arg1 matchingBlock:(/*^block*/id)arg2 ;
-(long long)accessibilityMenuItemCmdModifiers;
-(NSString *)accessibilityMenuItemCmdChar;
-(long long)accessibilityMenuItemCmdGlyph;
-(long long)accessibilityMenuItemCmdVirtualKey;
-(NSString *)accessibilityMenuItemMarkChar;
-(id)_accessibilityClosestWebAreaAncestor;
-(void)postNotification:(id)arg1 info:(id)arg2 ;
-(char)makeElementVisibleInScrollArea;
-(char)_setAccessibilityFocusRing;
@end
