/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class CNUIDeprecatedIKImageBrowserView, NSView, NSTextField;

@interface CNPhotoLikenessEditorMediaLibraryViewController : NSViewController {

	CNUIDeprecatedIKImageBrowserView* _mediaLibraryView;
	CNUIDeprecatedIKImageBrowserView* _defaultPhotosLibraryView;
	NSView* _emptyContentView;
	NSTextField* _emptyContentTextField;

}

@property (retain) CNUIDeprecatedIKImageBrowserView * mediaLibraryView;                      //@synthesize mediaLibraryView=_mediaLibraryView - In the implementation block
@property (retain) CNUIDeprecatedIKImageBrowserView * defaultPhotosLibraryView;              //@synthesize defaultPhotosLibraryView=_defaultPhotosLibraryView - In the implementation block
@property (retain) NSView * emptyContentView;                                                //@synthesize emptyContentView=_emptyContentView - In the implementation block
@property (retain) NSTextField * emptyContentTextField;                                      //@synthesize emptyContentTextField=_emptyContentTextField - In the implementation block
+(Class)mediaLibraryClass;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSView *)emptyContentView;
-(void)viewWillAppear;
-(void)setMediaLibraryView:(CNUIDeprecatedIKImageBrowserView *)arg1 ;
-(CNUIDeprecatedIKImageBrowserView *)mediaLibraryView;
-(id)createLoadingView;
-(void)setEmptyContentView:(NSView *)arg1 ;
-(NSTextField *)emptyContentTextField;
-(void)setEmptyContentTextField:(NSTextField *)arg1 ;
-(void)setLoadingIndicatorHidden:(char)arg1 ;
-(void)setEmptyContentString:(id)arg1 ;
-(CNUIDeprecatedIKImageBrowserView *)defaultPhotosLibraryView;
-(void)setDefaultPhotosLibraryView:(CNUIDeprecatedIKImageBrowserView *)arg1 ;
@end

