/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/AKSignatureCaptureViewControllerDelegate.h>
#import <libobjc.A.dylib/AKUserInterfaceItem.h>

@class AKSignatureCaptureViewController_Mac, NSTableView, NSView, NSButton, NSLayoutConstraint, NSTextField, AKController, NSString;

@interface AKSignaturesViewController_Mac : NSViewController <AKSignatureCaptureViewControllerDelegate, AKUserInterfaceItem> {

	AKSignatureCaptureViewController_Mac* _captureViewController;
	double _signaturesListWidth;
	double _tableViewBottomConstant;
	/*^block*/id _completionHandler;
	id _presentingContainer;
	NSTableView* _tableView;
	NSView* _containerView;
	NSButton* _createSignatureButton;
	NSLayoutConstraint* _tableTrailingSpaceConstraint;
	NSTextField* _warningTextField;
	AKController* _controller;

}

@property (retain) NSTableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSView * containerView;                                         //@synthesize containerView=_containerView - In the implementation block
@property (retain) NSButton * createSignatureButton;                               //@synthesize createSignatureButton=_createSignatureButton - In the implementation block
@property (retain) NSLayoutConstraint * tableTrailingSpaceConstraint;              //@synthesize tableTrailingSpaceConstraint=_tableTrailingSpaceConstraint - In the implementation block
@property (retain) NSTextField * warningTextField;                                 //@synthesize warningTextField=_warningTextField - In the implementation block
@property (__weak) AKController * controller;                                      //@synthesize controller=_controller - In the implementation block
@property (copy) id completionHandler;                                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (__weak) id presentingContainer;                                         //@synthesize presentingContainer=_presentingContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)tag;
-(NSTableView *)tableView;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(void)tableViewSelectionDidChange:(id)arg1 ;
-(void)setController:(AKController *)arg1 ;
-(NSView *)containerView;
-(void)setContainerView:(NSView *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)viewDidLoad;
-(void)popoverWillClose:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
-(void)setTableView:(NSTableView *)arg1 ;
-(id)signatures;
-(id)_captureView;
-(NSLayoutConstraint *)tableTrailingSpaceConstraint;
-(void)switchToViewMode:(long long)arg1 animated:(char)arg2 ;
-(void)_setupListViewForNoCaptureAvailable;
-(NSButton *)createSignatureButton;
-(NSTextField *)warningTextField;
-(CGSize)idealContentSize;
-(void)_animate:(char)arg1 toContentView:(id)arg2 startingSize:(CGSize)arg3 destinationSize:(CGSize)arg4 ;
-(id)presentingContainer;
-(void)_animatePopoverToNewSize;
-(void)captureControllerDidFinish:(id)arg1 ;
-(void)showAddSignatureView:(id)arg1 ;
-(void)deleteSignature:(id)arg1 ;
-(void)setPresentingContainer:(id)arg1 ;
-(void)setCreateSignatureButton:(NSButton *)arg1 ;
-(void)setTableTrailingSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setWarningTextField:(NSTextField *)arg1 ;
@end

