/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpotlightIndexUtilities.framework/Versions/A/SpotlightIndexUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpotlightIndexUtilities/SpotlightIndexUtilities-Structs.h>
@class NSString;

@interface SIIndexerComplete : NSObject {

	int _cancel;
	AI _addDocumentCount;
	AI _addDocumentForSplitCount;
	unsigned _completedDocumentCount;
	unsigned _completedBatchCount;
	NSString* _dirPath;
	SIRef _si;
	SIIndexCallbacks* _syncCallbacks;

}

@property (nonatomic,copy) NSString * dirPath;                             //@synthesize dirPath=_dirPath - In the implementation block
@property (assign,nonatomic) SIRef si;                                     //@synthesize si=_si - In the implementation block
@property (assign,nonatomic) SIIndexCallbacks* syncCallbacks;              //@synthesize syncCallbacks=_syncCallbacks - In the implementation block
@property (nonatomic,readonly) int cancel;                                 //@synthesize cancel=_cancel - In the implementation block
@property (assign,nonatomic) AI addDocumentCount;                          //@synthesize addDocumentCount=_addDocumentCount - In the implementation block
@property (assign,nonatomic) AI addDocumentForSplitCount;                  //@synthesize addDocumentForSplitCount=_addDocumentForSplitCount - In the implementation block
@property (assign,nonatomic) unsigned completedDocumentCount;              //@synthesize completedDocumentCount=_completedDocumentCount - In the implementation block
@property (assign,nonatomic) unsigned completedBatchCount;                 //@synthesize completedBatchCount=_completedBatchCount - In the implementation block
+(void)initialize;
+(void)setLogLevel:(int)arg1 ;
+(void)setLogLevelWarning;
+(SCD_Struct_SI2*)volumeParams;
+(void)setLogLevelDebug;
+(void)setLogLevelInfo;
+(SIUserCtxRef)createUserContext:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(char)commit;
-(int)cancel;
-(id)initWithPath:(id)arg1 options:(long long)arg2 error:(id*)arg3 ;
-(id)getPropertyForKey:(id)arg1 ;
-(char)merge;
-(void)deleteFilesInDirectory:(int)arg1 ;
-(char)openIndexWithDirFd:(int)arg1 options:(long long)arg2 error:(id*)arg3 ;
-(void)setDirPath:(NSString *)arg1 ;
-(void)addRecords:(id)arg1 forIDs:(unsigned long long*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)dirPath;
-(SIRef)si;
-(void)setSi:(SIRef)arg1 ;
-(SIIndexCallbacks*)syncCallbacks;
-(void)setSyncCallbacks:(SIIndexCallbacks*)arg1 ;
-(AI)addDocumentCount;
-(void)setAddDocumentCount:(AI)arg1 ;
-(AI)addDocumentForSplitCount;
-(void)setAddDocumentForSplitCount:(AI)arg1 ;
-(unsigned)completedDocumentCount;
-(void)setCompletedDocumentCount:(unsigned)arg1 ;
-(unsigned)completedBatchCount;
-(void)setCompletedBatchCount:(unsigned)arg1 ;
@end

