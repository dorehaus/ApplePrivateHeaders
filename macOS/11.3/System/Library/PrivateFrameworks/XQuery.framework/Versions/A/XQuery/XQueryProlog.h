/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XQuery.framework/Versions/A/XQuery
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class XQueryModules, NSString, NSMutableArray, NSMutableDictionary;

@interface XQueryProlog : NSObject {

	XQueryModules* _modules;
	NSString* _modulePrefix;
	NSString* _defaultCollation;
	NSString* _defaultElementNamespace;
	NSString* _defaultFunctionNamespace;
	NSString* _baseURI;
	NSString* _location;
	int _schemaMode;
	NSMutableArray* _errors;
	NSMutableArray* _moduleImports;
	NSMutableArray* _schemaImports;
	NSMutableArray* _namespacePrefixes;
	NSMutableDictionary* _namespacePrefixIDs;
	NSMutableArray* _declarations;
	NSMutableArray* _qNameReferences;
	NSMutableDictionary* _variables;
	NSMutableDictionary* _functions;
	unsigned long long _nextLocalVariableID;
	NSMutableDictionary* _localVariableIDs;
	NSMutableArray* _inScopeNamespaces;
	char _xmlSpacePreserve;
	char _constructionPreserve;
	char _ordered;
	char _emptyLeast;
	char _inheritNamespaces;

}
+(void)initialize;
+(id)prologWithItems:(id)arg1 atLocation:(id)arg2 forModules:(id)arg3 version:(id)arg4 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)location;
-(id)namespaceForPrefix:(id)arg1 ;
-(long long)addNamespace:(id)arg1 ;
-(id)errors;
-(void)setOrdered:(char)arg1 ;
-(id)modules;
-(void)addError:(id)arg1 ;
-(id)xmlQNameFromString:(id)arg1 ;
-(void)addQNameReference:(id)arg1 ;
-(id)namespaceForID:(unsigned long long)arg1 ;
-(id)baseURI;
-(void)pushInScopeNamespaces:(id)arg1 ;
-(char)isModule;
-(void)popInScopeNamespaces;
-(id)namespaceForPrefix:(id)arg1 fromProlog:(char*)arg2 ;
-(char)inheritNamespaces;
-(char)xmlSpacePreserve;
-(char)emptyLeast;
-(unsigned long long)nextLocalVariableID;
-(void)setNextLocalVariableID:(long long)arg1 ;
-(id)variableQNameFromString:(id)arg1 ;
-(unsigned long long)newLocalVariableIDForQName:(id)arg1 ;
-(id)defaultCollation;
-(unsigned long long)localVariableIDForQName:(id)arg1 ;
-(id)functionQNameFromString:(id)arg1 ;
-(id)functionInfoForSignature:(id)arg1 ;
-(char)ordered;
-(void)setModulePrefix:(id)arg1 ;
-(void)addPrefix:(id)arg1 forNamespace:(id)arg2 ;
-(void)setXMLSpacePreserve:(char)arg1 ;
-(void)setEmptyLeast:(char)arg1 ;
-(void)setInheritNamespaces:(char)arg1 ;
-(void)setConstructionPreserve:(char)arg1 ;
-(void)setDefaultCollation:(id)arg1 ;
-(void)setBaseURI:(id)arg1 ;
-(unsigned long long)namespaceIDForPrefix:(id)arg1 ;
-(void)addNamespace:(id)arg1 forPrefix:(id)arg2 ;
-(void)setDefaultElementNamespace:(id)arg1 ;
-(void)setDefaultFunctionNamespace:(id)arg1 ;
-(id)modulePrefix;
-(id)variableInfoForQName:(id)arg1 ;
-(void)setVariableInfo:(id)arg1 forQName:(id)arg2 ;
-(void)setFunctionInfo:(id)arg1 forSignature:(id)arg2 ;
-(void)setSchemaMode:(int)arg1 ;
-(void)addModule:(id)arg1 ;
-(void)addSchema:(id)arg1 ;
-(void)setDefaultSchema:(id)arg1 atLocation:(id)arg2 ;
-(void)_setLocation:(id)arg1 ;
-(void)_setModules:(id)arg1 ;
-(void)_addItems:(id)arg1 ;
-(void)_resolveImports;
-(void)_bindInfo;
-(id)defaultElementNamespace;
-(id)defaultFunctionNamespace;
-(char)constructionPreserve;
-(int)schemaMode;
-(id)prefixesForID:(long long)arg1 ;
-(unsigned long long)namespaceID:(id)arg1 ;
-(id)qNameReferences;
-(id)declarations;
@end
