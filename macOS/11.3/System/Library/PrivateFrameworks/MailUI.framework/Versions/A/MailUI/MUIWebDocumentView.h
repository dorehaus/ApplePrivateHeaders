/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSViewToolTipOwner.h>

@class NSView, MUIWKWebViewController, MUIWebDocument, NSString;

@interface MUIWebDocumentView : NSView <NSViewToolTipOwner> {

	unsigned long long _loadedState;
	CGSize _contentSize;
	double _preferredMinLayoutWidth;
	char _preparingToLayoutSynchronously;
	NSView* _snapshotView;
	/*^block*/id _prepareToLayoutSynchronouslyCompletionHandler;
	MUIWKWebViewController* _wkWebViewController;

}

@property (nonatomic,readonly) NSView * snapshotView;                                     //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) char preparingToLayoutSynchronously;                         //@synthesize preparingToLayoutSynchronously=_preparingToLayoutSynchronously - In the implementation block
@property (nonatomic,copy) id prepareToLayoutSynchronouslyCompletionHandler;              //@synthesize prepareToLayoutSynchronouslyCompletionHandler=_prepareToLayoutSynchronouslyCompletionHandler - In the implementation block
@property (nonatomic,__weak,readonly) NSView * contentView; 
@property (assign,nonatomic) char shouldPaintToBounds; 
@property (assign,nonatomic) char drawsBackground; 
@property (nonatomic,retain) MUIWKWebViewController * wkWebViewController;                //@synthesize wkWebViewController=_wkWebViewController - In the implementation block
@property (assign,nonatomic) unsigned long long loadedState; 
@property (assign,nonatomic) CGSize contentSize; 
@property (nonatomic,retain) MUIWebDocument * webDocument; 
@property (assign,nonatomic) double pageZoom; 
@property (assign,nonatomic) double preferredMinLayoutWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)requiresConstraintBasedLayout;
+(id)keyPathsForValuesAffectingWebDocument;
+(id)keyPathsForValuesAffectingPageZoom;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(char)isFlipped;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSView *)contentView;
-(CGSize)intrinsicContentSize;
-(void)setDrawsBackground:(char)arg1 ;
-(id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2 ;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(char)drawsBackground;
-(void)viewDidMoveToSuperview;
-(void)findMatchesForString:(id)arg1 relativeToMatch:(id)arg2 findOptions:(unsigned long long)arg3 maxResults:(unsigned long long)arg4 resultCollector:(/*^block*/id)arg5 ;
-(void)getSelectedText:(/*^block*/id)arg1 ;
-(void)selectFindMatch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(CGPoint)arg3 userData:(void*)arg4 ;
-(void)tearDown;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)printOperationWithPrintInfo:(id)arg1 ;
-(double)pageZoom;
-(void)setPageZoom:(double)arg1 ;
-(NSView *)snapshotView;
-(void)mui_didCacheDisplayInRect;
-(void)mui_prepareToCacheDisplayInRect:(CGRect)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)mui_prepareToAnimate:(/*^block*/id)arg1 ;
-(void)mui_performAnimation;
-(void)mui_cancelAnimation;
-(void)mui_prepareToLayoutSynchronously:(/*^block*/id)arg1 ;
-(void)mui_performLayoutSynchronously;
-(void)mui_cancelSynchronousLayout;
-(MUIWebDocument *)webDocument;
-(void)_muiWebDocumentViewCommonInit;
-(MUIWKWebViewController *)wkWebViewController;
-(void)_updatePreferredMinLayoutWidth;
-(char)preparingToLayoutSynchronously;
-(double)preferredMinLayoutWidth;
-(unsigned long long)loadedState;
-(id)evaluateJavaScriptSynchronously:(id)arg1 ;
-(void)setPreparingToLayoutSynchronously:(char)arg1 ;
-(void)setPrepareToLayoutSynchronouslyCompletionHandler:(id)arg1 ;
-(void)_readyToLayoutSynchronously;
-(id)prepareToLayoutSynchronouslyCompletionHandler;
-(void)setAttachments:(id)arg1 asHidden:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateStyleInlinedWebDocument:(/*^block*/id)arg1 ;
-(void)generateSelectionWebDocument:(/*^block*/id)arg1 ;
-(id)_attachmentControllersForAttachments:(id)arg1 ;
-(void)saveAttachmentsWithPanel:(id)arg1 ;
-(void)saveAttachments:(id)arg1 toDirectory:(id)arg2 makePathsUnique:(char)arg3 ;
-(void)setPreferredMinLayoutWidth:(double)arg1 ;
-(void)setLoadedState:(unsigned long long)arg1 ;
-(void)setWebDocument:(MUIWebDocument *)arg1 ;
-(char)shouldPaintToBounds;
-(void)setShouldPaintToBounds:(char)arg1 ;
-(void)prepareTilesInRect:(CGRect)arg1 ;
-(char)shouldHandleClickForURL:(id)arg1 ;
-(void)quickLookAttachments:(id)arg1 ;
-(char)canExportAttachmentsToApplication:(id)arg1 ;
-(void)exportAttachmentsToApplication:(id)arg1 ;
-(void)setWkWebViewController:(MUIWKWebViewController *)arg1 ;
@end

