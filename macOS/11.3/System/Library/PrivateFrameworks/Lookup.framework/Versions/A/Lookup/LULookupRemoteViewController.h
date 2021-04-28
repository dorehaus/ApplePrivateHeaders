/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Lookup.framework/Versions/A/Lookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Lookup/Lookup-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSRemoteViewDelegate.h>
#import <libobjc.A.dylib/NSWindowDelegate.h>

@class NSPopover, NSString, NSNumber, NSRemoteView;

@interface LULookupRemoteViewController : NSViewController <NSRemoteViewDelegate, NSWindowDelegate> {

	NSPopover* _popover;
	NSString* _searchTerm;
	NSString* _searchTermContext;
	NSString* _searchDomain;
	NSNumber* _selectionType;
	NSNumber* _triggerType;
	NSRemoteView* _remoteView;
	char _isObserving;
	char _bridgeBurnt;

}

@property (nonatomic,retain) NSRemoteView * remoteView;               //@synthesize remoteView=_remoteView - In the implementation block
@property (assign,nonatomic,__weak) NSPopover * popover;              //@synthesize popover=_popover - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                     //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,copy) NSString * searchTermContext;              //@synthesize searchTermContext=_searchTermContext - In the implementation block
@property (nonatomic,copy) NSString * searchDomain;                   //@synthesize searchDomain=_searchDomain - In the implementation block
@property (nonatomic,copy) NSNumber * selectionType;                  //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,copy) NSNumber * triggerType;                    //@synthesize triggerType=_triggerType - In the implementation block
@property (readonly) char shouldRetainExportedObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(CGSize)preferredContentSize;
-(NSPopover *)popover;
-(void)setPopover:(NSPopover *)arg1 ;
-(void)setSelectionType:(NSNumber *)arg1 ;
-(NSRemoteView *)remoteView;
-(char)view:(id)arg1 shouldResize:(CGSize)arg2 ;
-(void)setTriggerType:(NSNumber *)arg1 ;
-(NSNumber *)triggerType;
-(NSNumber *)selectionType;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)_viewDidLoad;
-(void)setSearchDomain:(NSString *)arg1 ;
-(void)_viewWillAppear;
-(void)_viewDidAppear;
-(void)_viewWillDisappear;
-(void)_viewDidDisappear;
-(void)burnViewBridge;
-(void)setRemoteView:(NSRemoteView *)arg1 ;
-(void)commonLULookupRemoteViewControllerTeardown;
-(NSString *)searchTermContext;
-(void)setSearchTermContext:(NSString *)arg1 ;
-(NSString *)searchDomain;
@end

