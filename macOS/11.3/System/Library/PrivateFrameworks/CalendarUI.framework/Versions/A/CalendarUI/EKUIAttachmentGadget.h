/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/EKUIIsolateableSingleViewGadget.h>
#import <libobjc.A.dylib/QLSeamlessOpenerDelegate.h>
#import <libobjc.A.dylib/QLPreviewPanelDelegate.h>
#import <libobjc.A.dylib/QLPreviewPanelDataSource.h>
#import <CalendarUI/CalUIResizingTextFieldDelegate.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>

@class NSArray, EKUITextButton, NSLayoutConstraint, EKUIAttachmentTableView, NSView, NSDictionary, EKAttachment, NSString;

@interface EKUIAttachmentGadget : EKUIIsolateableSingleViewGadget <QLSeamlessOpenerDelegate, QLPreviewPanelDelegate, QLPreviewPanelDataSource, CalUIResizingTextFieldDelegate, NSTableViewDelegate, NSTableViewDataSource> {

	NSArray* _attachments;
	EKUITextButton* _addButton;
	NSLayoutConstraint* _heightConstraint;
	EKUIAttachmentTableView* _tableView;
	NSView* _container;
	NSArray* _attachmentConstraints;
	NSDictionary* _viewMetrics;
	EKAttachment* _selectedAttachment;

}

@property (retain) NSArray * attachments;                              //@synthesize attachments=_attachments - In the implementation block
@property (retain) EKUITextButton * addButton;                         //@synthesize addButton=_addButton - In the implementation block
@property (retain) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (retain) EKUIAttachmentTableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSView * container;                                 //@synthesize container=_container - In the implementation block
@property (retain) NSArray * attachmentConstraints;                    //@synthesize attachmentConstraints=_attachmentConstraints - In the implementation block
@property (retain) NSDictionary * viewMetrics;                         //@synthesize viewMetrics=_viewMetrics - In the implementation block
@property (__weak) EKAttachment * selectedAttachment;                  //@synthesize selectedAttachment=_selectedAttachment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(char)hasData;
-(NSView *)container;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)updateConstraints;
-(EKUIAttachmentTableView *)tableView;
-(long long)rowHeight;
-(char)isEditable;
-(char)performDragOperation:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 shouldSelectRow:(long long)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(void)setContainer:(NSView *)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(void)setTableView:(EKUIAttachmentTableView *)arg1 ;
-(long long)_numberOfRows;
-(CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2 ;
-(id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)control;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(long long)numberOfPreviewItemsInPreviewPanel:(id)arg1 ;
-(id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2 ;
-(id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(EKAttachment *)selectedAttachment;
-(id)initWithViewController:(id)arg1 ;
-(void)removeAttachment:(id)arg1 ;
-(char)shouldDisplay;
-(double)horizontalInset;
-(id)claimedPboardTypes;
-(void)updateWithChanges:(id)arg1 ;
-(char)wantsToDisplay;
-(NSDictionary *)viewMetrics;
-(char)_shouldShowPlusButton;
-(void)setViewMetrics:(NSDictionary *)arg1 ;
-(void)setSelectedAttachment:(EKAttachment *)arg1 ;
-(char)quickLookSelectedFiles;
-(void)_launchFilePicker:(id)arg1 ;
-(void)syncCachedAttachments;
-(void)downloadAttachments;
-(NSArray *)attachmentConstraints;
-(EKUITextButton *)addButton;
-(char)_shouldShowAddAttachmentsLabel;
-(void)setAttachmentConstraints:(NSArray *)arg1 ;
-(char)_updateQLPanelToCurrentSelection:(id)arg1 ;
-(void)updateActiveQLDelegate;
-(id)downloadedAttachmentsForQuickLook;
-(void)setAddButton:(EKUITextButton *)arg1 ;
@end

