/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSInspectorBarDelegate, NSInspectorBarClient;
@class NSArray, NSMutableDictionary, NSWindow, NSTitlebarAccessoryViewController, NSView;

@interface NSInspectorBar : NSObject <NSCoding> {

	NSArray* _items;
	NSArray* _defaultItems;
	NSArray* _defaultItemIdentifiers;
	NSMutableDictionary* _itemTable;
	id _defaultController;
	id<NSInspectorBarDelegate> _delegate;
	id<NSInspectorBarClient> _client;
	NSWindow* _documentWindow;
	NSArray* _identifiers;
	NSTitlebarAccessoryViewController* _viewController;
	SCD_Struct_NS90 _flags;
	NSView* _inspectorBarView;

}

@property (copy) NSArray * defaultItemIdentifiers; 
@property (readonly) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (readonly) NSWindow * window;                              //@synthesize documentWindow=_documentWindow - In the implementation block
@property (assign) id<NSInspectorBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<NSInspectorBarClient> client;                  //@synthesize client=_client - In the implementation block
@property (getter=isVisible) char visible; 
@property (assign) char showsBaselineSeparator; 
+(id)standardTextItemIdentifiers;
+(Class)standardItemControllerClass;
+(id)_sharedSpacerItem;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSInspectorBarDelegate>)delegate;
-(void)setDelegate:(id<NSInspectorBarDelegate>)arg1 ;
-(NSWindow *)window;
-(void)_update;
-(id<NSInspectorBarClient>)client;
-(void)setClient:(id<NSInspectorBarClient>)arg1 ;
-(char)isVisible;
-(id)_startingWindowForSendAction:(SEL)arg1 ;
-(void)setDefaultItemIdentifiers:(NSArray *)arg1 ;
-(void)_setWindow:(id)arg1 ;
-(void)setVisible:(char)arg1 ;
-(NSArray *)items;
-(char)showsBaselineSeparator;
-(id)_auxiliaryViewController;
-(id)itemForIdentifier:(id)arg1 ;
-(id)convertAttributes:(id)arg1 ;
-(id)convertFont:(id)arg1 ;
-(NSArray *)defaultItemIdentifiers;
-(id)defaultItems;
-(void)_setIsOwnedByTextView:(char)arg1 ;
-(char)_isOwnedByTextView;
-(void)setShowsBaselineSeparator:(char)arg1 ;
-(id)_createItemsForIdentifiers:(id)arg1 ;
-(id)_inspectorBarView;
-(char)_updateAuxiliaryViewControllerIfAvailable;
-(void)_tile;
-(void)inspectorBarViewDidLoad:(id)arg1 ;
-(long long)_defaultItemGravity;
@end
