/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InstallerPlugins.framework/Versions/A/InstallerPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSToolbarDelegate.h>

@class NSWindow, NSOutlineView, IFDInstallController, IFDCustomizationController, NSMutableDictionary, NSString, NSLock, NSMutableArray, NSConditionLock;

@interface IFXFileListWindow : NSObject <NSToolbarDelegate> {

	NSWindow* uiWindow;
	NSOutlineView* uiFileListView;
	IFDInstallController* _installCtrl;
	IFDCustomizationController* _ctrl;
	NSMutableDictionary* _fileListingDictionary;
	NSString* _searchString;
	NSLock* _lock;
	NSMutableArray* _loadQueue;
	NSConditionLock* _queueLock;
	char _threadShouldRun;

}

@property (readonly) NSWindow * window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)fileControllerForWithInstallCtrl:(id)arg1 ;
-(void)dealloc;
-(NSWindow *)window;
-(void)copy:(id)arg1 ;
-(char)windowShouldClose:(id)arg1 ;
-(id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(char)arg3 ;
-(id)toolbarDefaultItemIdentifiers:(id)arg1 ;
-(id)toolbarAllowedItemIdentifiers:(id)arg1 ;
-(long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2 ;
-(char)outlineView:(id)arg1 isItemExpandable:(id)arg2 ;
-(id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3 ;
-(id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3 ;
-(char)outlineView:(id)arg1 shouldSelectItem:(id)arg2 ;
-(void)backgroundThreadMethod;
-(void)loadPathsForItem:(id)arg1 ;
-(id)filteredArray:(id)arg1 withText:(id)arg2 ;
-(id)initWithInstallCtrl:(id)arg1 ;
-(id)getArrayForItem:(id)arg1 ;
-(void)searchUsingToolbarSearchField:(id)arg1 ;
@end
