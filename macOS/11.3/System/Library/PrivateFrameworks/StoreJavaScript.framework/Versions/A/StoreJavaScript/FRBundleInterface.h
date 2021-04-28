/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreJavaScript.framework/Versions/A/StoreJavaScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreJavaScript/StoreJavaScript-Structs.h>
#import <libobjc.A.dylib/NSKeyedUnarchiverDelegate.h>
#import <libobjc.A.dylib/FRJSMessagingDelegate.h>
#import <libobjc.A.dylib/FRJSObjectDelegate.h>

@class CKStoreClient, FRJSObject, NSArray, NSMutableDictionary, NSString;

@interface FRBundleInterface : NSObject <NSKeyedUnarchiverDelegate, FRJSMessagingDelegate, FRJSObjectDelegate> {

	CKStoreClient* _storeClient;
	OpaqueWKBundleRef _bundle;
	OpaqueWKBundlePageRef _page;
	OpaqueWKBundleFrameRef _frame;
	OpaqueWKBundleScriptWorldRef _world;
	OpaqueWKBundleDOMWindowExtensionRef _windowExtension;
	FRJSObject* _rootObject;
	NSArray* _rootObjectFunctions;
	NSArray* _rootObjectProperties;
	NSMutableDictionary* _eventListeners;
	NSMutableDictionary* _contextMenus;
	NSMutableDictionary* _activeContextMenu;

}

@property (nonatomic,readonly) OpaqueWKBundleRef bundle;                                         //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) OpaqueWKBundlePageRef page;                                       //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) OpaqueWKBundleFrameRef frame;                                     //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) OpaqueWKBundleScriptWorldRef world;                               //@synthesize world=_world - In the implementation block
@property (nonatomic,readonly) OpaqueWKBundleDOMWindowExtensionRef windowExtension;              //@synthesize windowExtension=_windowExtension - In the implementation block
@property (nonatomic,readonly) FRJSObject * rootObject;                                          //@synthesize rootObject=_rootObject - In the implementation block
@property (nonatomic,readonly) NSArray * rootObjectFunctions;                                    //@synthesize rootObjectFunctions=_rootObjectFunctions - In the implementation block
@property (nonatomic,readonly) NSArray * rootObjectProperties;                                   //@synthesize rootObjectProperties=_rootObjectProperties - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventListeners;                             //@synthesize eventListeners=_eventListeners - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * contextMenus;                               //@synthesize contextMenus=_contextMenus - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeContextMenu;                            //@synthesize activeContextMenu=_activeContextMenu - In the implementation block
@property (nonatomic,readonly) CKStoreClient * storeClient;                                      //@synthesize storeClient=_storeClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedMessageClasses;
-(void)dealloc;
-(FRJSObject *)rootObject;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(OpaqueWKBundleRef)bundle;
-(OpaqueWKBundleFrameRef)frame;
-(OpaqueWKBundlePageRef)page;
-(OpaqueWKBundleScriptWorldRef)world;
-(NSMutableDictionary *)eventListeners;
-(CKStoreClient *)storeClient;
-(NSMutableDictionary *)contextMenus;
-(void)sendMessage:(id)arg1 messageBody:(id)arg2 ;
-(void)dispatchEvent:(id)arg1 withEventObject:(id)arg2 ;
-(void)dispatchGlobalEvent:(id)arg1 withEventObject:(id)arg2 ;
-(void)contextMenuDismissed;
-(void)contextMenuItemClicked:(id)arg1 ;
-(OpaqueJSValueRef)_getJavaScriptProperty:(const char*)arg1 inContext:(OpaqueJSContextRef)arg2 thisObject:(OpaqueJSValueRef)arg3 ;
-(OpaqueWKBundleDOMWindowExtensionRef)windowExtension;
-(OpaqueJSValueRef)_callJavaScriptFunction:(const char*)arg1 inContext:(OpaqueJSContextRef)arg2 thisObject:(OpaqueJSValueRef)arg3 argumentCount:(unsigned long long)arg4 arguments:(const OpaqueJSValue*)arg5 ;
-(NSArray *)rootObjectProperties;
-(NSArray *)rootObjectFunctions;
-(void)didReceiveMessage:(id)arg1 messageBody:(id)arg2 ;
-(void)setActiveContextMenu:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activeContextMenu;
-(id)sendSynchronousMessage:(id)arg1 messageBody:(id)arg2 ;
-(char)hasProperty:(id)arg1 forObject:(id)arg2 ;
-(id)object:(id)arg1 getProperty:(id)arg2 ;
-(char)hasFunction:(id)arg1 forObject:(id)arg2 ;
-(id)object:(id)arg1 callFunction:(id)arg2 withArguments:(id)arg3 ;
-(id)initWithBundle:(OpaqueWKBundleRef)arg1 userData:(id)arg2 ;
-(OpaqueWKArrayRef)_contextMenuItemsForJSContextMenuNamed:(id)arg1 appendingDefaultMenu:(OpaqueWKArrayRef)arg2 withDOMElement:(OpaqueJSValueRef)arg3 context:(OpaqueJSContextRef)arg4 ;
@end

