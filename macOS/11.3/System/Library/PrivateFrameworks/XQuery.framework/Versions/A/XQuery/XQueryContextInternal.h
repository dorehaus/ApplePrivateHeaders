/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <XQuery/XQuery-Structs.h>
@class NSMutableArray, NSMutableDictionary, XQueryError, NSDate, XQueryProlog;

@interface XQueryContextInternal : NSObject {

	NSMutableArray* _variables;
	NSMutableDictionary* _globals;
	NSMutableDictionary* _documentCache;
	NSMutableDictionary* _URLCache;
	NSMutableDictionary* _contextNamespaces;
	NSMutableArray* _inScopeNamespaces;
	CFDictionaryRef _baseURINodes;
	XQueryError* _error;
	NSDate* _currentDateTime;
	XQueryProlog* _prolog;
	id _client;
	id _contextItem;
	unsigned long long _position;
	unsigned long long _last;
	char _ordered;

}
+(id)context;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)error;
-(unsigned long long)position;
-(id)namespaceForPrefix:(id)arg1 ;
-(id)client;
-(void)setClient:(id)arg1 ;
-(unsigned long long)last;
-(void)setLast:(unsigned long long)arg1 ;
-(void)setOrdered:(char)arg1 ;
-(id)currentDateTime;
-(void)setError:(id)arg1 raiseException:(char)arg2 ;
-(id)activeProlog;
-(id)baseURI;
-(void)setBaseURI:(id)arg1 forNode:(id)arg2 ;
-(void)pushInScopeNamespaces:(id)arg1 ;
-(void)popInScopeNamespaces;
-(id)namespaceForPrefix:(id)arg1 fromProlog:(char*)arg2 ;
-(id)firstPrefixForNamespace:(id)arg1 ;
-(char)xmlSpacePreserve;
-(void)setVariable:(id)arg1 forID:(long long)arg2 ;
-(id)contextItem;
-(id)baseURIForNode:(id)arg1 ;
-(id)defaultCollation;
-(id)XQueryDocumentForURL:(id)arg1 ;
-(id)URLBody:(id)arg1 ;
-(id)_inScopeVariables;
-(void)_setInScopeVariables:(id)arg1 ;
-(/*function pointer*/void*)XQueryExternalFunctionForQName:(id)arg1 ;
-(char)ordered;
-(void)setActiveProlog:(id)arg1 ;
-(void)setContextItem:(id)arg1 position:(unsigned long long)arg2 ;
-(id)variableForID:(long long)arg1 ;
-(id)globalForQName:(id)arg1 ;
-(void)addNamespace:(id)arg1 forPrefix:(id)arg2 ;
-(id)defaultElementNamespace;
-(void)_clearGlobals;
-(void)setGlobal:(id)arg1 forQName:(id)arg2 ;
-(unsigned long long)baseURINodeCount;
-(id)contextNamespaceForPrefix:(id)arg1 ;
@end

