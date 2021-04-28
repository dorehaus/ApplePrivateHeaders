/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAccessibilityNodeParent.h>
#import <libobjc.A.dylib/NSAccessibility.h>
#import <PDFKit/PDFHUDLayerControllerDelegate.h>

@class NSURL, NSString, NSArray, PDFLayerControllerPrivate, CALayer, PDFDocument;

@interface PDFLayerController : NSObject <PDFAccessibilityNodeParent, NSAccessibility, PDFHUDLayerControllerDelegate> {

	PDFLayerControllerPrivate* _private;

}

@property (nonatomic,retain) CALayer * parentLayer; 
@property (nonatomic,retain) PDFDocument * document; 
@property (nonatomic,readonly) CALayer * documentLayer; 
@property (assign,nonatomic) id<PDFLayerControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id accessibilityParent; 
@property (nonatomic,retain) NSString * URLFragment; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)dealloc;
-(id)init;
-(id<PDFLayerControllerDelegate>)delegate;
-(void)setDelegate:(id<PDFLayerControllerDelegate>)arg1 ;
-(id)layout;
-(PDFDocument *)document;
-(void)performAction:(id)arg1 ;
-(CGRect)frame;
-(long long)displayMode;
-(void)setDisplayMode:(int)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(NSString *)accessibilitySubrole;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityParent;
-(NSArray *)accessibilityChildren;
-(NSString *)accessibilityRole;
-(NSString *)accessibilityLabel;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(CGRect)accessibilityFrame;
-(char)accessibilityIsIgnored;
-(char)isAccessibilityElement;
-(NSString *)accessibilityRoleDescription;
-(char)accessibilityShouldUseUniqueId;
-(id)colorSpace;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(id)accessibilityTopLevelUIElement;
-(void)setAccessibilityParent:(id)arg1 ;
-(id)accessibilityWindow;
-(void)rightMouseDown:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(CGSize)contentSize;
-(BOOL)keyDown:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)setScrollPosition:(CGPoint)arg1 ;
-(CGPoint)scrollPosition;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(id)currentPage;
-(void)setDocument:(PDFDocument *)arg1 ;
-(void)setCurrentPage:(id)arg1 ;
-(CALayer *)documentLayer;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)copyLink:(id)arg1 ;
-(double)contentScaleFactor;
-(void)zoomIn:(id)arg1 ;
-(void)zoomOut:(id)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)setParentLayer:(CALayer *)arg1 ;
-(CALayer *)parentLayer;
-(void)selectAll;
-(id)currentSelection;
-(void)setCurrentSelection:(id)arg1 ;
-(void)_searchInDictionary:(id)arg1 ;
-(void)_setActualSize:(id)arg1 ;
-(void)_setAutoSize:(id)arg1 ;
-(void)_setSinglePage:(id)arg1 ;
-(void)_setSinglePageScrolling:(id)arg1 ;
-(void)_setDoublePage:(id)arg1 ;
-(void)_setDoublePageScrolling:(id)arg1 ;
-(void)_searchInSpotlight:(id)arg1 ;
-(unsigned long long)currentPageIndex;
-(void)setDeviceScaleFactor:(double)arg1 ;
-(void)saveToPDF;
-(void)setURLFragment:(NSString *)arg1 ;
-(void)attemptToUnlockWithPassword:(id)arg1 ;
-(double)deviceScaleFactor;
-(CGSize)contentSizeRespectingZoom;
-(void)snapshotInContext:(CGContextRef)arg1 ;
-(void)magnifyWithMagnification:(double)arg1 atPoint:(CGPoint)arg2 immediately:(char)arg3 ;
-(id)menuForEvent:(id)arg1 withUserInterfaceLayoutDirection:(long long)arg2 ;
-(void)copySelection;
-(id)searchSelection;
-(id)findString:(id)arg1 caseSensitive:(char)arg2 highlightMatches:(char)arg3 ;
-(void)setSearchSelection:(id)arg1 ;
-(void)gotoSelection:(id)arg1 ;
-(id)getSelectionForWordAtPoint:(CGPoint)arg1 ;
-(void)searchInDictionaryWithSelection:(id)arg1 ;
-(void)activateNextAnnotation:(char)arg1 ;
-(id)rectsForSelectionInLayoutSpace:(id)arg1 ;
-(unsigned long long)lastPageIndex;
-(void)gotoNextPage;
-(void)gotoPreviousPage;
-(CGRect)boundsForAnnotation:(id)arg1 ;
-(void)setDisplaysPDFHUDController:(char)arg1 ;
-(void)setDeviceColorSpace:(CGColorSpaceRef)arg1 ;
-(void)interactWithAnnotation:(id)arg1 ;
-(CGRect)convertRectToRootView:(CGRect)arg1 fromPageLayer:(id)arg2 ;
-(CGRect)rootViewBounds;
-(CGRect)convertRootViewRect:(CGRect)arg1 toPageLayer:(id)arg2 ;
-(NSEdgeInsets)pageBreakMargins;
-(void)pageChanged:(id)arg1 ;
-(void)gotoDestination:(id)arg1 ;
-(CGColorSpaceRef)deviceColorSpace;
-(char)displaysPDFHUDController;
-(id)highlights;
-(void)_setupDocumentLayer;
-(void)formChanged:(id)arg1 ;
-(void)_updateAutoScale;
-(void)gotoPage:(id)arg1 ;
-(void)_updateDocumentLayer;
-(double)_autoScaleFactor;
-(void)_updateDocumentLayerWithDelegateCalls;
-(void)forceGotoPage:(id)arg1 ;
-(void)_scrollToPoint:(CGPoint)arg1 ;
-(char)documentIsLocked;
-(id)findBox:(id)arg1 ;
-(id)_convertEvent:(id)arg1 toPagePoint:(CGPoint*)arg2 ;
-(void)_trackMouse:(id)arg1 forAnnotation:(id)arg2 ;
-(void)_trackMouse:(id)arg1 forPDFScannerResult:(id)arg2 onPage:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)beginMarqueeTextSelection:(id)arg1 ;
-(void)beginStandardTextSelection:(id)arg1 ;
-(long long)_areaOfInterestForMouse:(id)arg1 ;
-(long long)_getCursorTypeForAreaOfInterest:(long long)arg1 ;
-(void)_finishTrackingAnnotation:(id)arg1 ;
-(void)_finishTrackingPDFScannerResult:(id)arg1 ;
-(void)finishAutoscroll:(id)arg1 ;
-(void)continueStandardTextSelection:(id)arg1 ;
-(void)continueMarqueeTextSelection:(id)arg1 ;
-(void)_continueTrackingAnnotation:(id)arg1 ;
-(void)_continueTrackingPDFScannerResult:(id)arg1 ;
-(void)_performWebSearch:(id)arg1 ;
-(id)_truncateString:(id)arg1 toLength:(long long)arg2 ;
-(void)openWithPreview;
-(void)setEnablePageShadows:(BOOL)arg1 ;
-(void)printActivePageAnnotations;
-(void)scrollWithDelta:(CGSize)arg1 ;
-(void)windowUp;
-(void)windowDown;
-(void)gotoDestinationNoPush:(id)arg1 ;
-(id)nextPage;
-(id)previousPage;
-(void)setHighlights:(id)arg1 ;
-(id)passwordInstruction;
-(id)passwordPrompt;
-(id)annotationPreceding:(id)arg1 wrapAround:(char)arg2 ;
-(id)annotationFollowing:(id)arg1 wrapAround:(char)arg2 ;
-(void)gotoAnnotation:(id)arg1 ;
-(void)handleButtonHit:(id)arg1 ;
-(void)annotationHit:(id)arg1 ;
-(void)doButtonHit:(id)arg1 ;
-(int)recursivelyPerformNextActions:(id)arg1 index:(int)arg2 count:(int)arg3 ;
-(void)gotoFirstPage;
-(void)gotoLastPage;
-(void)beginAutoscroll:(id)arg1 ;
-(void)_setupPDFHUDController;
-(void)continueAutoscroll:(id)arg1 ;
-(id)determineCurrentPage;
-(CGPoint)accessibilityConvertPointFromRootView:(CGPoint)arg1 withPageIndex:(long long)arg2 ;
-(NSString *)URLFragment;
-(void)debugMenu:(id)arg1 ;
-(char)validateDebugMenuItem:(id)arg1 ;
-(void)debugAccessibilityMenu:(id)arg1 ;
-(char)validateDebugAccessibilityMenuItem:(id)arg1 ;
-(void)colorWidgetBackgrounds:(BOOL)arg1 ;
-(BOOL)isDrawingAccessibilityNodeType:(int)arg1 ;
-(void)drawAccessibilityNodeType:(int)arg1 enableDrawing:(BOOL)arg2 ;
-(void)resetAccessibilityTree;
-(void)printAccessibilityTree;
-(void)printActivePageInfo;
-(void)internalForceTileRefresh;
-(void)goToRect:(CGRect)arg1 onPage:(id)arg2 ;
-(id)input:(id)arg1 defaultValue:(id)arg2 ;
-(void)pageDown;
-(void)pageUp;
-(BOOL)flipsTileContents;
-(CGRect)accessibilityConvertBoundsToRootView:(CGRect)arg1 withPageIndex:(long long)arg2 ;
-(id)accessibilityElementForAnnotation:(id)arg1 ;
@end

