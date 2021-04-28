/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/Versions/A/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PAMediaConversionServiceResourceURLCollection : NSObject {

	NSMutableDictionary* _urlReferencesByRole;

}

@property (retain) NSMutableDictionary * urlReferencesByRole;              //@synthesize urlReferencesByRole=_urlReferencesByRole - In the implementation block
@property (readonly) unsigned long long urlCount; 
@property (readonly) char allURLsAreReadable; 
+(id)collectionWithMainResourceURL:(id)arg1 ;
+(id)collectionForBookmarkDataDictionaryRepresentation:(id)arg1 error:(id*)arg2 ;
+(char)getSignatureString:(id*)arg1 filenameSummary:(id*)arg2 forDictionaryRepresentation:(id)arg3 ;
+(id)filenameSummaryStringForDictionaryRepresentation:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setResourceURL:(id)arg1 forRole:(id)arg2 ;
-(id)resourceURLForRole:(id)arg1 ;
-(unsigned long long)urlCount;
-(void)setResourceURL:(id)arg1 forRole:(id)arg2 deleteOnDeallocation:(char)arg3 ;
-(void)setShouldDeleteURLOnDeallocation:(char)arg1 forRole:(id)arg2 ;
-(char)containsAllRoles:(id)arg1 ;
-(char)containsAnyRole:(id)arg1 ;
-(id)typeIdentifierForResourceURLWithRole:(id)arg1 ;
-(id)bookmarkDataDictionaryRepresentationWithError:(id*)arg1 ;
-(id)filenameExtensionAndPathHashForRole:(id)arg1 ;
-(char)ensureFilesExistWithError:(id*)arg1 ;
-(char)removeExistingEmptyFilesWithError:(id*)arg1 ;
-(char)allURLsAreReadable;
-(id)logMessageSummaryWithFullPath:(char)arg1 ;
-(id)logMessageSummary;
-(id)fileSizeSummary;
-(void)enumerateResourceURLReferences:(/*^block*/id)arg1 ;
-(void)enumerateResourceURLs:(/*^block*/id)arg1 ;
-(id)urlForDebugDumpWithDirectoryName:(id)arg1 inExistingParentDirectory:(id)arg2 error:(id*)arg3 ;
-(char)copyURL:(id)arg1 forRole:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)urlReferencesByRole;
-(void)setUrlReferencesByRole:(NSMutableDictionary *)arg1 ;
@end

