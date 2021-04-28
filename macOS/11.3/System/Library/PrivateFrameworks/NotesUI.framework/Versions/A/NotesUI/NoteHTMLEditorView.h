/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/WKUIDelegatePrivate.h>
#import <libobjc.A.dylib/_WKInputDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>
#import <libobjc.A.dylib/WKScriptMessageHandler.h>
#import <libobjc.A.dylib/WKURLSchemeHandler.h>

@protocol NoteHTMLEditorViewDelegate, NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewLayoutDelegate;
@class NSLayoutConstraint, NoteWKWebView, NSString, NSArray, ICSelectorDelayer, WebArchive;

@interface NoteHTMLEditorView : NSView <WKUIDelegatePrivate, _WKInputDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKURLSchemeHandler> {

	char _hasAttachments;
	char _editable;
	char _editing;
	char _updatingContent;
	char _setSelectionToEndAfterLoad;
	char _startEditingAfterLoad;
	unsigned short _listStyle;
	id<NoteHTMLEditorViewDelegate> _delegate;
	id<NoteHTMLEditorViewActionDelegate> _actionDelegate;
	id<NoteHTMLEditorViewLayoutDelegate> _layoutDelegate;
	NSLayoutConstraint* _contentSizeHeightConstraint;
	NSLayoutConstraint* _contentSizeWidthConstraint;
	NoteWKWebView* _webView;
	NSString* _htmlString;
	NSString* _title;
	NSString* _text;
	NSArray* _attachmentContentIDs;
	long long _selectionLength;
	NSString* _htmlStringToLoad;
	NSArray* _attachmentsToLoad;
	ICSelectorDelayer* _updateContentDelayer;

}

@property (nonatomic,copy) NSString * htmlStringToLoad;                                               //@synthesize htmlStringToLoad=_htmlStringToLoad - In the implementation block
@property (nonatomic,copy) NSArray * attachmentsToLoad;                                               //@synthesize attachmentsToLoad=_attachmentsToLoad - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * updateContentDelayer;                                //@synthesize updateContentDelayer=_updateContentDelayer - In the implementation block
@property (assign,nonatomic) char updatingContent;                                                    //@synthesize updatingContent=_updatingContent - In the implementation block
@property (assign,nonatomic) char setSelectionToEndAfterLoad;                                         //@synthesize setSelectionToEndAfterLoad=_setSelectionToEndAfterLoad - In the implementation block
@property (assign,nonatomic) char startEditingAfterLoad;                                              //@synthesize startEditingAfterLoad=_startEditingAfterLoad - In the implementation block
@property (assign,nonatomic,__weak) id<NoteHTMLEditorViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NoteHTMLEditorViewActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NoteHTMLEditorViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentSizeHeightConstraint;                        //@synthesize contentSizeHeightConstraint=_contentSizeHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentSizeWidthConstraint;                         //@synthesize contentSizeWidthConstraint=_contentSizeWidthConstraint - In the implementation block
@property (nonatomic,retain) NoteWKWebView * webView;                                                 //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * htmlString;                                                     //@synthesize htmlString=_htmlString - In the implementation block
@property (nonatomic,copy) NSString * title;                                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * text;                                                           //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * attachmentContentIDs;                                            //@synthesize attachmentContentIDs=_attachmentContentIDs - In the implementation block
@property (assign,nonatomic) char hasAttachments;                                                     //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (nonatomic,readonly) WebArchive * webArchive; 
@property (assign,getter=isEditable,nonatomic) char editable;                                         //@synthesize editable=_editable - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                                           //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) long long selectionLength;                                               //@synthesize selectionLength=_selectionLength - In the implementation block
@property (assign,nonatomic) double textZoomFactor; 
@property (assign,nonatomic) unsigned short listStyle;                                                //@synthesize listStyle=_listStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)baseHTMLString;
-(id)initWithCoder:(id)arg1 ;
-(id<NoteHTMLEditorViewDelegate>)delegate;
-(void)setDelegate:(id<NoteHTMLEditorViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isEditable;
-(char)isEditing;
-(void)setEditable:(char)arg1 ;
-(id<NoteHTMLEditorViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<NoteHTMLEditorViewLayoutDelegate>)arg1 ;
-(NSString *)text;
-(void)setEditing:(char)arg1 ;
-(NoteWKWebView *)webView;
-(WebArchive *)webArchive;
-(void)setText:(NSString *)arg1 ;
-(void)updateContent;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(void)setActionDelegate:(id<NoteHTMLEditorViewActionDelegate>)arg1 ;
-(id<NoteHTMLEditorViewActionDelegate>)actionDelegate;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg1 ;
-(void)setWebView:(NoteWKWebView *)arg1 ;
-(unsigned short)listStyle;
-(void)setListStyle:(unsigned short)arg1 ;
-(void)scrollSelectionToVisible:(char)arg1 ;
-(void)setHasAttachments:(char)arg1 ;
-(char)hasAttachments;
-(void)setHtmlString:(NSString *)arg1 ;
-(void)_webView:(id)arg1 didInsertAttachment:(id)arg2 withSource:(id)arg3 ;
-(void)webView:(id)arg1 startURLSchemeTask:(id)arg2 ;
-(void)webView:(id)arg1 stopURLSchemeTask:(id)arg2 ;
-(id)webViewConfiguration;
-(NSString *)htmlString;
-(long long)selectionLength;
-(void)setSelectionLength:(long long)arg1 ;
-(void)setSelectionToEnd;
-(void)setSelectionToStart;
-(void)startEditing;
-(char)_webView:(id)arg1 focusShouldStartInputSession:(id)arg2 ;
-(void)_webView:(id)arg1 didStartInputSession:(id)arg2 ;
-(void)accentColorDidChange:(id)arg1 ;
-(void)setupWebView;
-(void)alwaysShowLightContentDidChange:(id)arg1 ;
-(void)updateApperanceIfNecessary;
-(NSArray *)attachmentContentIDs;
-(void)setHtmlStringToLoad:(NSString *)arg1 ;
-(void)setAttachmentsToLoad:(NSArray *)arg1 ;
-(void)setAttachmentContentIDs:(NSArray *)arg1 ;
-(id)jsonStringFromDictionaryOrArray:(id)arg1 ;
-(void)setEnableSmartLists:(char)arg1 ;
-(void)setEnableAttachments:(char)arg1 ;
-(void)updateDataDetectors;
-(id)attachmentInfoDictionaryForAttachmentPresentation:(id)arg1 ;
-(void)undoablyRemoveAttachmentPresentations:(id)arg1 undoManager:(id)arg2 ;
-(void)undoablyReplaceSelectionWithAttachmentPresentations:(id)arg1 undoManager:(id)arg2 ;
-(void)adoptEditableState;
-(void)setStartEditingAfterLoad:(char)arg1 ;
-(void)stopEditingWithCompletion:(/*^block*/id)arg1 ;
-(char)updatingContent;
-(ICSelectorDelayer *)updateContentDelayer;
-(void)setUpdatingContent:(char)arg1 ;
-(void)replaceContentIDs:(id)arg1 ;
-(void)setSetSelectionToEndAfterLoad:(char)arg1 ;
-(NSString *)htmlStringToLoad;
-(NSArray *)attachmentsToLoad;
-(void)setHtmlString:(id)arg1 attachments:(id)arg2 ;
-(void)setEnableShiftNewlinesInSmartLists:(char)arg1 ;
-(char)setSelectionToEndAfterLoad;
-(char)startEditingAfterLoad;
-(double)textZoomFactor;
-(void)setTextZoomFactor:(double)arg1 ;
-(void)insertHTMLString:(id)arg1 ;
-(void)insertLinkWithURL:(id)arg1 title:(id)arg2 ;
-(void)insertLinksWithURLs:(id)arg1 titles:(id)arg2 ;
-(void)replaceSelectionWithAttachmentPresentation:(id)arg1 ;
-(void)stopEditing;
-(void)insertImage:(id)arg1 ;
-(void)insertBulletedList:(id)arg1 ;
-(void)insertDashedList:(id)arg1 ;
-(void)insertOrderedList:(id)arg1 ;
-(void)removeStyle:(id)arg1 ;
-(void)getRectForSelectionWithCompletion:(/*^block*/id)arg1 ;
-(NSLayoutConstraint *)contentSizeHeightConstraint;
-(void)setContentSizeHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentSizeWidthConstraint;
-(void)setContentSizeWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUpdateContentDelayer:(ICSelectorDelayer *)arg1 ;
@end

