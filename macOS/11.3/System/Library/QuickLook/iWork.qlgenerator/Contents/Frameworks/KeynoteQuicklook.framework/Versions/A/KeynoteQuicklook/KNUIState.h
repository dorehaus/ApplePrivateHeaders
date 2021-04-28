/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TSAUIState.h>

@class TSKSelectionPath, NSMutableDictionary, KNMacUILayout, NSSet, NSArray, TSDFreehandDrawingToolkitUIState, KNSlideCollectionSelection, NSString;

@interface KNUIState : NSObject <NSCopying, TSAUIState> {

	double _mobileCanvasViewScale;
	CGPoint _mobileCanvasOffset;
	double _desktopCanvasViewScale;
	CGPoint _desktopCanvasOffset;
	char _editingDisabled;
	NSMutableDictionary* _chartUIState;
	char _slideViewFitsContentInWindow;
	char _lightTableHidesSkippedSlides;
	char _showsMobileLightTable;
	char _mobileLightTableHidesSkippedSlides;
	char _showsMobileOutline;
	char _desktopOutlineViewDefaultFixed;
	char _showSlideGuides;
	char _showMasterGuides;
	char _showsComments;
	char _showsRuler;
	char _commentsPrintingToggleEnabled;
	TSKSelectionPath* _selectionPath;
	KNMacUILayout* _documentUILayout;
	double _lightTableZoomScale;
	double _mobileLightTableZoomScale;
	double _desktopElementListViewWidth;
	double _desktopNavigatorViewWidth;
	double _desktopOutlineViewWidth;
	double _desktopPresenterNotesHeight;
	double _desktopPresenterNotesScrollPosition;
	NSSet* _collapsedSlideNodes;
	NSSet* _outlineCollapsedSlideNodes;
	NSSet* _outlineHasBodySlideNodes;
	NSArray* _elementListExpandedGroups;
	TSDFreehandDrawingToolkitUIState* _freehandDrawingToolkitUIState;
	CGPoint _desktopMainWindowOrigin;
	CGSize _desktopMainContentSize;

}

@property (nonatomic,copy) TSKSelectionPath * selectionPath;                                                //@synthesize selectionPath=_selectionPath - In the implementation block
@property (nonatomic,readonly) KNSlideCollectionSelection * slideTreeSelection; 
@property (assign,nonatomic) double canvasViewScale; 
@property (assign,nonatomic) CGPoint canvasOffset; 
@property (nonatomic,copy) KNMacUILayout * documentUILayout;                                                //@synthesize documentUILayout=_documentUILayout - In the implementation block
@property (assign,nonatomic) char slideViewFitsContentInWindow;                                             //@synthesize slideViewFitsContentInWindow=_slideViewFitsContentInWindow - In the implementation block
@property (assign,nonatomic) double lightTableZoomScale;                                                    //@synthesize lightTableZoomScale=_lightTableZoomScale - In the implementation block
@property (assign,nonatomic) char lightTableHidesSkippedSlides;                                             //@synthesize lightTableHidesSkippedSlides=_lightTableHidesSkippedSlides - In the implementation block
@property (assign,nonatomic) char showsMobileLightTable;                                                    //@synthesize showsMobileLightTable=_showsMobileLightTable - In the implementation block
@property (assign,nonatomic) double mobileLightTableZoomScale;                                              //@synthesize mobileLightTableZoomScale=_mobileLightTableZoomScale - In the implementation block
@property (assign,nonatomic) char mobileLightTableHidesSkippedSlides;                                       //@synthesize mobileLightTableHidesSkippedSlides=_mobileLightTableHidesSkippedSlides - In the implementation block
@property (assign,nonatomic) char showsMobileOutline;                                                       //@synthesize showsMobileOutline=_showsMobileOutline - In the implementation block
@property (assign,nonatomic) CGPoint desktopMainWindowOrigin;                                               //@synthesize desktopMainWindowOrigin=_desktopMainWindowOrigin - In the implementation block
@property (assign,nonatomic) CGSize desktopMainContentSize;                                                 //@synthesize desktopMainContentSize=_desktopMainContentSize - In the implementation block
@property (assign,nonatomic) double desktopElementListViewWidth;                                            //@synthesize desktopElementListViewWidth=_desktopElementListViewWidth - In the implementation block
@property (assign,nonatomic) double desktopNavigatorViewWidth;                                              //@synthesize desktopNavigatorViewWidth=_desktopNavigatorViewWidth - In the implementation block
@property (assign,nonatomic) double desktopOutlineViewWidth;                                                //@synthesize desktopOutlineViewWidth=_desktopOutlineViewWidth - In the implementation block
@property (assign,nonatomic) double desktopPresenterNotesHeight;                                            //@synthesize desktopPresenterNotesHeight=_desktopPresenterNotesHeight - In the implementation block
@property (assign,nonatomic) double desktopPresenterNotesScrollPosition;                                    //@synthesize desktopPresenterNotesScrollPosition=_desktopPresenterNotesScrollPosition - In the implementation block
@property (assign,nonatomic) char desktopOutlineViewDefaultFixed;                                           //@synthesize desktopOutlineViewDefaultFixed=_desktopOutlineViewDefaultFixed - In the implementation block
@property (nonatomic,copy) NSSet * collapsedSlideNodes;                                                     //@synthesize collapsedSlideNodes=_collapsedSlideNodes - In the implementation block
@property (nonatomic,copy) NSSet * outlineCollapsedSlideNodes;                                              //@synthesize outlineCollapsedSlideNodes=_outlineCollapsedSlideNodes - In the implementation block
@property (nonatomic,copy) NSSet * outlineHasBodySlideNodes;                                                //@synthesize outlineHasBodySlideNodes=_outlineHasBodySlideNodes - In the implementation block
@property (nonatomic,copy) NSArray * elementListExpandedGroups;                                             //@synthesize elementListExpandedGroups=_elementListExpandedGroups - In the implementation block
@property (assign,nonatomic) char showSlideGuides;                                                          //@synthesize showSlideGuides=_showSlideGuides - In the implementation block
@property (assign,nonatomic) char showMasterGuides;                                                         //@synthesize showMasterGuides=_showMasterGuides - In the implementation block
@property (assign,nonatomic) char showsComments;                                                            //@synthesize showsComments=_showsComments - In the implementation block
@property (assign,nonatomic) char showsRuler;                                                               //@synthesize showsRuler=_showsRuler - In the implementation block
@property (assign,nonatomic) char commentsPrintingToggleEnabled;                                            //@synthesize commentsPrintingToggleEnabled=_commentsPrintingToggleEnabled - In the implementation block
@property (nonatomic,retain) TSDFreehandDrawingToolkitUIState * freehandDrawingToolkitUIState;              //@synthesize freehandDrawingToolkitUIState=_freehandDrawingToolkitUIState - In the implementation block
@property (assign,nonatomic) char editingDisabled;                                                          //@synthesize editingDisabled=_editingDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(id)init;
-(void)setCanvasOffset:(CGPoint)arg1 ;
-(CGPoint)canvasOffset;
-(char)showsComments;
-(void)setShowsComments:(char)arg1 ;
-(TSDFreehandDrawingToolkitUIState *)freehandDrawingToolkitUIState;
-(id)archivedUIStateInContext:(id)arg1 ;
-(id)UIStateForChart:(id)arg1 ;
-(void)setUIState:(id)arg1 forChart:(id)arg2 ;
-(KNSlideCollectionSelection *)slideTreeSelection;
-(NSSet *)collapsedSlideNodes;
-(NSSet *)outlineCollapsedSlideNodes;
-(NSSet *)outlineHasBodySlideNodes;
-(TSKSelectionPath *)selectionPath;
-(void)setSelectionPath:(TSKSelectionPath *)arg1 ;
-(void)setOutlineCollapsedSlideNodes:(NSSet *)arg1 ;
-(void)setOutlineHasBodySlideNodes:(NSSet *)arg1 ;
-(double)canvasViewScale;
-(KNMacUILayout *)documentUILayout;
-(char)slideViewFitsContentInWindow;
-(double)lightTableZoomScale;
-(char)lightTableHidesSkippedSlides;
-(CGPoint)desktopMainWindowOrigin;
-(CGSize)desktopMainContentSize;
-(double)desktopElementListViewWidth;
-(double)desktopNavigatorViewWidth;
-(double)desktopOutlineViewWidth;
-(double)desktopPresenterNotesHeight;
-(char)desktopOutlineViewDefaultFixed;
-(char)showSlideGuides;
-(char)showMasterGuides;
-(char)showsRuler;
-(char)commentsPrintingToggleEnabled;
-(char)editingDisabled;
-(void)resetForInitialViewing;
-(void)setEditingDisabled:(char)arg1 ;
-(void)setSlideTreeSelection:(id)arg1 withDocumentRoot:(id)arg2 ;
-(void)setCanvasViewScale:(double)arg1 ;
-(void)updateOutlineStateFromSlideTree:(id)arg1 ;
-(void)loadFromArchive:(const UIStateArchive*)arg1 unarchiver:(id)arg2 context:(id)arg3 ;
-(void)saveToArchive:(UIStateArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(void)setDocumentUILayout:(KNMacUILayout *)arg1 ;
-(void)setSlideViewFitsContentInWindow:(char)arg1 ;
-(void)setLightTableZoomScale:(double)arg1 ;
-(void)setLightTableHidesSkippedSlides:(char)arg1 ;
-(char)showsMobileLightTable;
-(void)setShowsMobileLightTable:(char)arg1 ;
-(double)mobileLightTableZoomScale;
-(void)setMobileLightTableZoomScale:(double)arg1 ;
-(char)mobileLightTableHidesSkippedSlides;
-(void)setMobileLightTableHidesSkippedSlides:(char)arg1 ;
-(char)showsMobileOutline;
-(void)setShowsMobileOutline:(char)arg1 ;
-(void)setDesktopMainWindowOrigin:(CGPoint)arg1 ;
-(void)setDesktopMainContentSize:(CGSize)arg1 ;
-(void)setDesktopElementListViewWidth:(double)arg1 ;
-(void)setDesktopNavigatorViewWidth:(double)arg1 ;
-(void)setDesktopOutlineViewWidth:(double)arg1 ;
-(void)setDesktopPresenterNotesHeight:(double)arg1 ;
-(double)desktopPresenterNotesScrollPosition;
-(void)setDesktopPresenterNotesScrollPosition:(double)arg1 ;
-(void)setDesktopOutlineViewDefaultFixed:(char)arg1 ;
-(void)setCollapsedSlideNodes:(NSSet *)arg1 ;
-(NSArray *)elementListExpandedGroups;
-(void)setElementListExpandedGroups:(NSArray *)arg1 ;
-(void)setShowSlideGuides:(char)arg1 ;
-(void)setShowMasterGuides:(char)arg1 ;
-(void)setShowsRuler:(char)arg1 ;
-(void)setCommentsPrintingToggleEnabled:(char)arg1 ;
-(void)setFreehandDrawingToolkitUIState:(TSDFreehandDrawingToolkitUIState *)arg1 ;
@end
