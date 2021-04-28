/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPDecoderReadCoordinatorDelegate.h>

@class TSPObjectContext, TSPDeepCopyObjectMap, TSPObject, NSDictionary, TSPComponent, NSString;

@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate> {

	TSPObjectContext* _context;
	TSPDeepCopyObjectMap* _objectMap;
	TSPObject* _cachedMetadataObject;
	NSDictionary* _cachedDataMap;
	char _isDecodingTransientObject;
	unsigned long long _readVersion;
	TSPComponent* _component;

}

@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)sourceType;
-(unsigned long long)fileFormatVersion;
-(char)hasDocumentVersionUUID;
-(char)isCrossAppPaste;
-(unsigned long long)readVersion;
-(long long)objectIdentifierForUUID:(id)arg1 ;
-(char)isCrossDocumentPaste;
-(char)canResolveExternalReferences;
-(char)processMetadataObject:(id)arg1 error:(id*)arg2 ;
-(id)rootObjectComponent;
-(char)isDecodingTransientObject;
-(id)cachedMetadataObject;
-(id)metadataComponent;
-(char)shouldResolveExternalReferencesUsingObjectUUID;
-(id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1 ;
-(id)cachedDataForIdentifier:(long long)arg1 ;
-(id)dataInfoForIdentifier:(long long)arg1 ;
-(char)shouldDecodeMissingDataAsRemote;
-(id)initWithContext:(id)arg1 objectMap:(id)arg2 cachedMetadataObject:(id)arg3 cachedDataMap:(id)arg4 ;
-(id)decodeDeepCopySerializedData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

