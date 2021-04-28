/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InstallerPlugins.framework/Versions/A/InstallerPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallerPlugins/InstallerPlugins-Structs.h>
#import <AppKit/NSWindowController.h>
#import <libobjc.A.dylib/NSToolbarDelegate.h>
#import <libobjc.A.dylib/NSTextFieldDelegate.h>

@class NSWindow, NSTableView, NSPanel, NSTextField, NSBundle, NSPopUpButton, NSSearchField, NSMutableDictionary, NSArray, IFXLogDataSource, NSString;

@interface IFXLogWindowController : NSWindowController <NSToolbarDelegate, NSTextFieldDelegate> {

	NSWindow* window;
	NSTableView* uiLogView;
	NSPanel* sendLogSheet;
	NSTextField* sendLogCommentTxt;
	NSTextField* sendLogContactTxt;
	NSBundle* _resourcesBundle;
	NSPopUpButton* _logDetailLevelPopUpButton;
	NSSearchField* _filterField;
	NSMutableDictionary* _toolbarItems;
	NSArray* _toolbarIDList;
	id _closeWatcherObj;
	SEL _closeWatcherSel;
	IFXLogDataSource* _logDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)validateMenuItem:(id)arg1 ;
-(void)saveDocument:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(void)toolbarWillAddItem:(id)arg1 ;
-(char)validateToolbarItem:(id)arg1 ;
-(void)savePanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void*)arg3 ;
-(void)printOperationDidRun:(id)arg1 success:(char)arg2 contextInfo:(void*)arg3 ;
-(void)showErrorLogs:(id)arg1 ;
-(void)showProgressLogs:(id)arg1 ;
-(void)showAllLogs:(id)arg1 ;
-(void)searchFieldTextChanged:(id)arg1 ;
-(id)_toolbarItemList;
-(void)printInstallerDocument:(id)arg1 ;
-(char)writeLogToFile:(id)arg1 ;
-(void)_createAndAddToolbar;
-(void)_setDefaultLogWindowFrame;
-(void)showLogCommentSheet:(id)arg1 ;
-(void)_sendLogViaCrashReporter;
-(id)initWithCloseObserver:(id)arg1 selector:(SEL)arg2 ;
@end

