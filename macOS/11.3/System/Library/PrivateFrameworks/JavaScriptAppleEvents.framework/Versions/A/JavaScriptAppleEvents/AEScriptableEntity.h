/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/JavaScriptAppleEvents.framework/Versions/A/JavaScriptAppleEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface AEScriptableEntity : NSObject {

	char _includeStandardAdditions;
	char _strictPropertyScope;
	char _strictCommandScope;
	char _strictParameterType;
	char _hasProcessedSDEF;
	NSString* _name;
	NSString* _bundleID;
	NSString* _path;
	NSMutableDictionary* _classesForNames;
	NSMutableDictionary* _classNamesForCodes;
	NSMutableDictionary* _enumerationsForNames;
	NSMutableDictionary* _commandDetailsForNames;
	NSMutableDictionary* _typeDictionary;
	NSMutableDictionary* _pluralDictionary;

}

@property (retain) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (retain) NSString * bundleID;                                       //@synthesize bundleID=_bundleID - In the implementation block
@property (retain) NSString * path;                                           //@synthesize path=_path - In the implementation block
@property (assign) char hasProcessedSDEF;                                     //@synthesize hasProcessedSDEF=_hasProcessedSDEF - In the implementation block
@property (retain) NSMutableDictionary * classesForNames;                     //@synthesize classesForNames=_classesForNames - In the implementation block
@property (retain) NSMutableDictionary * classNamesForCodes;                  //@synthesize classNamesForCodes=_classNamesForCodes - In the implementation block
@property (retain) NSMutableDictionary * enumerationsForNames;                //@synthesize enumerationsForNames=_enumerationsForNames - In the implementation block
@property (retain) NSMutableDictionary * commandDetailsForNames;              //@synthesize commandDetailsForNames=_commandDetailsForNames - In the implementation block
@property (retain) NSMutableDictionary * typeDictionary;                      //@synthesize typeDictionary=_typeDictionary - In the implementation block
@property (retain) NSMutableDictionary * pluralDictionary;                    //@synthesize pluralDictionary=_pluralDictionary - In the implementation block
@property (assign) char includeStandardAdditions;                             //@synthesize includeStandardAdditions=_includeStandardAdditions - In the implementation block
@property (assign) char strictPropertyScope;                                  //@synthesize strictPropertyScope=_strictPropertyScope - In the implementation block
@property (assign) char strictCommandScope;                                   //@synthesize strictCommandScope=_strictCommandScope - In the implementation block
@property (assign) char strictParameterType;                                  //@synthesize strictParameterType=_strictParameterType - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)path;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)classNames;
-(id)element:(id)arg1 ;
-(id)propertiesForClass:(id)arg1 ;
-(NSMutableDictionary *)classNamesForCodes;
-(id)propertyNameForCode:(unsigned)arg1 ;
-(NSMutableDictionary *)typeDictionary;
-(id)property:(id)arg1 ;
-(id)sendAppleEvent:(id)arg1 withContext:(id)arg2 waitForReply:(char)arg3 error:(id*)arg4 ;
-(id)emptyAppleEventWithEventClass:(unsigned)arg1 eventID:(unsigned)arg2 ;
-(id)sendAppleEvent:(id)arg1 timeout:(long long)arg2 withContext:(id)arg3 waitForReply:(char)arg4 error:(id*)arg5 ;
-(id)commandDetailsAndNames;
-(void)setupInstanceVariables;
-(void)setStrictPropertyScope:(char)arg1 ;
-(void)setStrictCommandScope:(char)arg1 ;
-(void)setStrictParameterType:(char)arg1 ;
-(void)setHasProcessedSDEF:(char)arg1 ;
-(void)setClassesForNames:(NSMutableDictionary *)arg1 ;
-(void)setClassNamesForCodes:(NSMutableDictionary *)arg1 ;
-(void)setEnumerationsForNames:(NSMutableDictionary *)arg1 ;
-(void)setCommandDetailsForNames:(NSMutableDictionary *)arg1 ;
-(void)setTypeDictionary:(NSMutableDictionary *)arg1 ;
-(void)setPluralDictionary:(NSMutableDictionary *)arg1 ;
-(char)hasProcessedSDEF;
-(char)isRemoteApplication;
-(void)buildTypeDictionary:(id)arg1 ;
-(void)processSdef:(id)arg1 ;
-(void)getAndProcessSDEFIfNeeded;
-(NSMutableDictionary *)classesForNames;
-(NSMutableDictionary *)pluralDictionary;
-(id)inheritsForClassName:(id)arg1 ;
-(char)strictPropertyScope;
-(char)includeStandardAdditions;
-(id)elementNameForCode:(unsigned)arg1 ;
-(unsigned)typeCodeForName:(id)arg1 ;
-(NSMutableDictionary *)commandDetailsForNames;
-(id)commandDetailsForEventClass:(unsigned)arg1 andEventID:(unsigned)arg2 ;
-(id)commandNames;
-(char)strictCommandScope;
-(NSMutableDictionary *)enumerationsForNames;
-(id)enumeratorNameForCode:(unsigned)arg1 ;
-(unsigned)enumeratorCodeForName:(id)arg1 ;
-(id)enumerationForCode:(unsigned)arg1 ;
-(void)processEnumeration:(id)arg1 ;
-(void)processRecordType:(id)arg1 ;
-(void)processValueType:(id)arg1 ;
-(void)processClass:(id)arg1 ;
-(void)processClassExtension:(id)arg1 ;
-(void)processCommand:(id)arg1 ;
-(id)initCurrentApplication;
-(id)initRemoteApplicationWithPath:(id)arg1 ;
-(unsigned)classCodeForName:(id)arg1 ;
-(id)classNameForCode:(unsigned)arg1 ;
-(id)pluralNameForClass:(id)arg1 ;
-(id)property:(id)arg1 inClass:(id)arg2 ;
-(id)element:(id)arg1 inClass:(id)arg2 ;
-(id)elementsForClass:(id)arg1 ;
-(id)contentsInClass:(id)arg1 ;
-(id)propertyNameForCode:(unsigned)arg1 inClass:(id)arg2 ;
-(id)elementNameForCode:(unsigned)arg1 inClass:(id)arg2 ;
-(id)typeNameForCode:(unsigned)arg1 ;
-(id)commandDetailsForName:(id)arg1 ;
-(id)respondsToForClass:(id)arg1 ;
-(id)parameterNamesForCommand:(id)arg1 ;
-(id)parameterTypeForName:(id)arg1 inCommand:(id)arg2 ;
-(id)enumeratorsForEnumeration:(id)arg1 ;
-(char)handlerIsStandardAddition:(id)arg1 ;
-(id)sendAppleEvent:(id)arg1 modifiers:(id)arg2 withContext:(id)arg3 waitForReply:(char)arg4 error:(id*)arg5 ;
-(void)setIncludeStandardAdditions:(char)arg1 ;
-(char)strictParameterType;
@end

