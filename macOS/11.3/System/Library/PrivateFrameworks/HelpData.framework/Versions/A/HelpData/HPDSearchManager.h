/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HelpData.framework/Versions/A/HelpData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, HPDClient, NSMapTable, NSObject, NSSet;

@interface HPDSearchManager : NSObject {

	NSDictionary* _cachedBooks;
	HPDClient* _client;
	NSMapTable* _clientMap;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (retain) HPDClient * client;                                    //@synthesize client=_client - In the implementation block
@property (retain) NSMapTable * clientMap;                                //@synthesize clientMap=_clientMap - In the implementation block
@property (retain) NSDictionary * cachedBooks;                            //@synthesize cachedBooks=_cachedBooks - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (copy,readonly) NSDictionary * bookList; 
@property (readonly) NSSet * indexedBookIDs; 
+(id)new;
+(char)isClient;
+(id)sharedSearchManager;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HPDClient *)client;
-(void)setClient:(HPDClient *)arg1 ;
-(char)cancelQuery:(id)arg1 ;
-(id)cachedBookWithIdentifier:(id)arg1 ;
-(void)client:(id)arg1 helpQuery:(id)arg2 didEncounterError:(id)arg3 ;
-(void)client:(id)arg1 helpQuery:(id)arg2 didReturnSuggestions:(id)arg3 ;
-(void)client:(id)arg1 helpQuery:(id)arg2 didReturnActions:(id)arg3 ;
-(void)client:(id)arg1 helpQuery:(id)arg2 didReturnResults:(id)arg3 ;
-(void)client:(id)arg1 helpQueryDidFinishSearching:(id)arg2 ;
-(NSDictionary *)bookList;
-(id)bookWithIdentifier:(id)arg1 ;
-(char)registerBookWithIdentifier:(id)arg1 appBundleURL:(id)arg2 bookVersion:(id)arg3 bookURL:(id)arg4 ;
-(NSSet *)indexedBookIDs;
-(NSMapTable *)clientMap;
-(void)setClientMap:(NSMapTable *)arg1 ;
-(id)_clientForDelegate:(id)arg1 ;
-(char)searchForString:(id)arg1 inBooks:(id)arg2 withDelegate:(id)arg3 options:(id)arg4 ;
-(void)setCachedBooks:(NSDictionary *)arg1 ;
-(id)cachedBookList;
-(NSDictionary *)cachedBooks;
-(id)_delegateForClient:(id)arg1 ;
-(char)performQuery:(id)arg1 withDelegate:(id)arg2 ;
-(char)cancelQuery:(id)arg1 withDelegate:(id)arg2 ;
-(char)searchForString:(id)arg1 inBooks:(id)arg2 withDelegate:(id)arg3 options:(id)arg4 contextInfo:(const void*)arg5 ;
-(id)bookContainingFileAtPath:(id)arg1 ;
@end
