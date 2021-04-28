/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ISS_MMUtilities : NSObject
+(void)initialize;
+(id)_sourceId;
+(id)principalPropertiesFromPrincipalID:(id)arg1 ;
+(id)_fetchConfigsWithURL:(id)arg1 ;
+(id)_deserializeDictionaryData:(id)arg1 ;
+(char)_useSecurePrincipalManagement;
+(id)_createGuid;
+(id)_getConfigDictionaryAtURL:(id)arg1 ;
+(id)_xmlNodeFromProperties:(id)arg1 ;
+(id)_deriveErrorFromTransaction:(id)arg1 forMasterRequest:(id)arg2 ;
+(int)_osVersionNum;
+(unsigned)_threadMax;
+(char)_doErrorLogging;
+(char)_doDebugLogging;
+(id)formattedDataFromProperties:(id)arg1 ;
+(id)_dispatchRequest:(id)arg1 synchronously:(char)arg2 withDelegate:(id)arg3 postHandler:(SEL)arg4 targetObject:(id)arg5 andNotes:(id)arg6 requiringResult:(char)arg7 ;
+(id)_deriveErrorFromInfo:(id)arg1 forMasterRequest:(id)arg2 ;
+(id)_escapeXMLString:(id)arg1 ;
+(id)_unescapeXMLString:(id)arg1 ;
+(id)_normalizeXMLString:(id)arg1 ;
+(id)_removeWSForbiddenElements:(id)arg1 ;
+(id)_decodeCharacterEntitiesInString:(id)arg1 ;
+(char)_createdDirectoryAtPath:(id)arg1 ;
+(id)_gzipData:(id)arg1 ;
+(id)_gunzipData:(id)arg1 ;
+(char)_osIsTigerOrGreater;
+(char)_osIsLeopardOrGreater;
+(int)verifyResources;
@end
